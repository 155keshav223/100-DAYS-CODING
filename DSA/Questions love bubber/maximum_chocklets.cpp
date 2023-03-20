#include<iostream>;
#include<cmath>;
using namespace std;
void max_choc(int n){
    int cholet=n;
    int wrapper=n;
    while(wrapper>=3){
        cholet = cholet + wrapper/3;
        wrapper = wrapper/3 +wrapper % 3;

    }
    cout<<cholet;




}
int main(){
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;
    
    max_choc(n);

}
