#include <iostream>
using namespace std;
int main(){
    int i,j,arr[100],n;
    cout<<"enter the n";
    cin>>n;
    for(i=0;i<n;i++){
        cout<<"Enter the Value of %d",i;
        cin>>arr[i];
    }
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[i]<arr[i+1]){
                int temp = arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
    }
    cout<<"Output";
    for(i=0;i<n;i++){
        
        cout<<arr[i];
    }
    
}
// Average time complaxity = O(n^2)
//Best case time complexity =O(n)
//Worst case time complexity =O(n^2)

