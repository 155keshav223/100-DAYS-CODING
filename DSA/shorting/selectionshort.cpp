#include <iostream>
using namespace std;
int main(){
    int arr[] ={5,7,3,2,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i< n-1 ;i++){
        int smallest =i;
        for(int j=i+1;j<n;j++){
            if(arr[smallest] > arr[j]){
                smallest =j;
            }
        }
        int temp = arr[smallest];
        arr[smallest]=arr[i];
        arr[i]=temp;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}