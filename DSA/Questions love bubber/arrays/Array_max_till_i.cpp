#include<iostream>;
#include<cmath>;
using namespace std;
int maxele(int arr[],int n){
    int maxno =INT_MIN;
    for(int i=0;i<n;i++){
        maxno=max(maxno,arr[i]);
    }
    return maxno;
}
void max_till_ith(int arr[],int n){
    
    for(int i=0;i<n;i++){
        cout<<maxele(arr,i+1)<<" ";
    }

}
int main(){
    int a[]={1,0,5,4,6,8};
    // cout<<maxele(a,6);
    max_till_ith(a,6);
}