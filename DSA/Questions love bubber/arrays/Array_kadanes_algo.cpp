//to find maximum sum of subarray 
#include<iostream>;
#include<cmath>;
using namespace std;
void kadane(int arr[],int n){
    int crr=0;
    int maxsum=INT_MIN;
    for(int i=0;i<n;i++){
        crr+=arr[i];
        if(crr<=0){
            crr=0;
        }
        maxsum=max(maxsum,crr);
    }
    cout<<maxsum;
}
int main(){
    int a[]={3,5,3,2,-1,-4};
    kadane(a,6);


}