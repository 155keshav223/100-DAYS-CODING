#include<iostream>;
#include<cmath>;
using namespace std;
void primeno(int n){
    bool flag=0;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            flag=1;
            cout<<"non_prime"<<endl;
            break;
        }
    }
    if(flag==0){
        cout<<"prime"<<endl;
    }
}
int main(){
    int a=35;
    primeno(a);

}