#include<iostream>;
using namespace std;
void powerOfTwo(int n){
    for(int i=0;i<31;i++){
        if(n==(pow(2,i))){
            cout<<true;
            
        }
        break;
    }
    cout<<false;
}
int main(){
    int a=4;
    powerOfTwo(a);
}