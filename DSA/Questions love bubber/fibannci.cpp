#include<iostream>;
#include<cmath>;
using namespace std;
void fib(int n){
    int t1=0;
    int t2=1;
    int next=0;
    for(int i=1;i<=n;i++){
        cout<<t1<<endl;
        next=t1+t2;
        t1=t2;
        t2=next;
    }
}
int main(){
    fib(5);
}