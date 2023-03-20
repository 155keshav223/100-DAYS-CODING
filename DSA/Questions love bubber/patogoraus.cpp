#include<iostream>;
#include<cmath>;
using namespace std;
void check(int x, int y,int z){
    int a =max(x,max(y,z));
    int b,c;
    if(a==x){
        b=y;
        c=z;
    }
    else if(a==y){
        b=x;
        c=z;
    }
    else{
        b=x;
        c=y;
    }

    if(a*a==b*b+c*c){
        cout<<"yes";

    }
    else{
        cout<<"no";
    }
}
int main(){
    check(5,3,4);

}