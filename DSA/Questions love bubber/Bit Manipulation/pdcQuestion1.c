// Keshav Balesara (20BCE0725)
#include <omp.h>
#include<stdio.h>
int ackermann(int m, int n) {
    if (m == 0) {
        return n + 1;
    } else if (n == 0) {

        return ackermann(m - 1, 1);
    } else {
        int a;
        #pragma omp task shared(a)
        a = ackermann(m, n - 1);

        return ackermann(m - 1, a);
    }
}

int main(int argc, char *argv[]) {
    #pragma omp parallel
    {
        #pragma omp single
        {
            int result = ackermann(3, 4);
            printf("Result: %d\n", result);
        }
    }
    return 0;
}