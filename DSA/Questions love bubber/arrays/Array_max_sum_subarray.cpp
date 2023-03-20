// we have to find the maximun value of subarrays
#include<iostream>;
#include<cmath>;
using namespace std;
int sum(int arr[],int i,int j){
    int s=0;
    for(int k=i;k<=j;k++){
        s+=arr[k];
    }
    return s;
}
int maxsum(int arr[],int n){
    int b=INT_MIN;
    
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            b=max(b,sum(arr,i,j));
        }
    }
    return b;

}
int main(){
    int a[]={1,4,7,2};
    cout<<maxsum(a,4);


}