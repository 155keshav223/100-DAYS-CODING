#include<iostream>;
#include<cmath>;
using namespace std;
void firstocc(int arr[],int n){
    const int N= 6e+2;
    int c[N];
    for(int i=0;i<N;i++){
        c[i]==-1;
    }
    int min_ds=INT_MAX;
    for(int i=0;i<n;i++){
        if(c[arr[i]] !=-1){
            min_ds=min(min_ds,c[arr[i]]);
        }
        else{
            c[arr[i]] = i;
        }
    }
    if(min_ds==INT_MAX){
        cout<<"NO Element Is Repeating";
    }
    else{
        cout<<min_ds+1;
    }
}
int main(){
    int arr[]= {1,3,3,4};
    firstocc(arr,4);

}