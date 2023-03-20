#include<iostream>
using namespace std;
void gcd(int a,int b){
    while(b!=0){
        rem=a%b;
        a=b;
        b=rem;
        gcd(a,b);
    }
    cout<<a;

}
int main(){
    cout<<"Enter the value of a and b"<<endl;
    int a,b;
    cin>>a>>b;
    gcd(a,b);

    return 0;
}