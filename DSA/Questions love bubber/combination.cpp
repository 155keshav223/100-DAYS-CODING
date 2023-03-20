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
int main(){
    cout<<combination(5,2);
}