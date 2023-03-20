#include<iostream>;
using namespace std;
void binaryno(int n){
    int a=0;
    int m=n;
    while(m!=0){
        a=a*10+m%2;
        m=m/2;
    }
    
}
int main(){
    int a=45;
    binaryno(a);

}