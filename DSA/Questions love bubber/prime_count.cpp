#include<iostream>;
#include<cmath>;
using namespace std;
bool isprime(int n){
    bool flag =0;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            flag =1;
            return false;
            break;
        }
    }
    if(flag==0){
        return true;
    }
}
int main(){
    
    for(int i=5;i<=25;i++){
        if(isprime(i)){
            cout<<i<<endl;
        }
    }

}