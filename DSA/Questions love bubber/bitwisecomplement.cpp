#include<iostream>;
using namespace std;
int bitwisecomplement(int n){
    int m=n;
    int mask=0;
    int ans=0;
    if(n==0){
        return 1;
    }
    else{
        while(m != 0){
            mask=(mask<<1)|1;
            m=m>>1;
        }
        ans =(~n) & mask;
    }
    return ans;
}
int main(){


    int a=5;
    int b=bitwisecomplement(a);
    cout<<b;

    


}