#include <iostream>
using namespace std;
int partion(int arr[],int low,int high){
    int pivot = arr[high];
    int i = low-1;
    for(int j=low;j<high;j++){
        if(arr[j]<pivot){
            i++;
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    i++;
    int temp=arr[i];
    arr[i]=arr[high];
    arr[high]=temp;
    return i;
}
void quickShort(int arr[],int low,int high){
    if(low<high){
        int pi= partion(arr,low,high);
        quickShort(arr,low,pi-1);
        quickShort(arr,pi+1,high);
    }
}
int main(){

    int arr[]= {6,5,8,3,9,2,0,1};
    quickShort(arr,0,8);
    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
    }

}
//Average case time complexity = O(nlog(n))
//best case time complexity = O(nlog(n))
//worst case time complexity = O(n^2)
