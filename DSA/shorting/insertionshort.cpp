#include<bits/stdc++.h>
using namespace std;
int main(){
    //instrtion Sort
    int arr[] = {7,4,9,8,3,12,17,2};
    int n= sizeof(arr)/sizeof(arr[0]);
    for(int i=1;i<n;i++){
        int current=arr[i];
        int j= i-1;
        while(j>=0 && current<arr[j]){
            arr[j+1] =arr[j];
            j--;

        }

        arr[j+1]=current;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}