#include<iostream>;
#include<cmath>;
using namespace std;
void max_min(int arr[],int n){
    
    int temp=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    cout<<"max = "<<arr[0];
    cout<<endl;
    cout<<"min = "<<arr[n-1];
}
int main(){
    int a[5]={3,6,2,8,7};
    int n= sizeof(a)/sizeof(a[0]);
    max_min(a,n);
    
}