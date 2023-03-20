#include<iostream>
using namespace std;
vector<vector<int>> ans;
void permutation(vector<int> a,int indx){
    if(indx==a.size()){
        ans.push_back(a);
        return;
    }
    for(int i=indx;i<a.size();i++){
        swap(a[i],a[indx]);
        permutation(a,indx+1);
        swap(a[i],a[indx]);
    }
    return;


}
int main(){
    int n;
    cin>>n;
    vector<int> a;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        a.push_back(arr[i]);

    }
    permutation(a,0);
}