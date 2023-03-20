#include<iostream>;
#include<cmath>;
using namespace std;
// int sumarr(int arr[],int s,int e){
//     int sum=0;
//     for(int i=s;i<=e;i++){
//         sum+=arr[i];
//     }
//     return sum;
// }
// void check(int arr[],int n,int sum){

//     for(int i=0;i<n;i++){
//         for(int j=i;j<n;j++){
//             if(sumarr(arr,i,j)==sum){
//                 cout<<i<<" "<<j<<endl;
//             }
//         }
//     }

// }
void check(int arr[],int n,int sum){
    int currsum=0, i=0, j=-1;
    while(currsum<sum &&j<n){
        j++;
        currsum+=arr[j];
        if(currsum==sum){
        cout<<i<<" "<<j<<endl;
        break;
    }

    (currsum>sum)
        
        currsum-=arr[i];
        i++;
}}
int main(){
    int a[]={2,5,4,2,7,6,8,3,2};
    check(a,9,9);


}