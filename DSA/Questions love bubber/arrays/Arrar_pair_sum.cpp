//check if their exist two elements in an arrY AUCH that their sum is equal to given k;
#include<iostream>
using namespace std;
void checkpair(int arr[],int n,int sum){
    int s=0;
    int e=n-1;
    int crr=0;
    bool flag=false;
    while(s<=e){
        crr=arr[s]+arr[e];
        if(crr==sum){
            flag=true;
            cout<<s<<e<<" Found";
            break;
        }
        else if(crr<sum){
            s++;
        }
        else{
            e--;
        }
        

    }
    if(flag==false){
        cout<<"not found";
    }
    

}
int main(){
    int a[]={2,4,8,20,23};
    checkpair(a,5,54);

}