#include<iostream>;
#include<cmath>;
using namespace std;
int factorial(int n){
    if(n==0){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}
int combination(int n,int r){
    return (factorial(n))/((factorial(n-r))*factorial(r));

}
void pascalm(int n){
    for(int line=0;line<=n;line++){
        for(int i=0;i<=line;i++){
            cout<<combination(line,i)<<" ";
        }
        cout<<"\n";
    }
}
int main(){
    pascalm(5);
}