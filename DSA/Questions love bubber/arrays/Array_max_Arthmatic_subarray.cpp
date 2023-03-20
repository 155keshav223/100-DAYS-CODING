#include<iostream>;
#include<cmath>;
using namespace std;
//here we have to find the maximum length of subarray having same difference;
void maxarthmaticarr(int arr[],int n){
    int ans=2;
    int pd=arr[1]-arr[0];
    int j=2;
    int crr=2;
    while(j<n){
        if(pd==arr[j]-arr[j-1]){
            crr++;
        }
        else{
            pd=arr[j]-arr[j-1];
            crr=2;
        }
        ans=max(crr,ans);
        j++;
    }
    cout<<ans;
}
int main(){
    int a[]={10,7,4,6,8,10,11};
    maxarthmaticarr(a,7);

}