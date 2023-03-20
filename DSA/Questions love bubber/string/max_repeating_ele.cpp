#include<iostream>;
#include<string>;
#include<algorithm>;
using namespace std;
int main(){
    string s1="akdjfaaaajejaakjdsknfkjjeaaaafkjfkeaa";
    sort(s1.begin(),s1.end());
    // cout<<s1<<endl;
    int crr=1,maxcount=INT_MIN;
    int i=1;
    while(i<s1.size()){
        if(s1[i]==s1[i-1]){
            crr++;
        }
        else if(s1[i] != s1[i-1]){
            maxcount=max(crr,maxcount);
            crr=0;
        }
        i++;
    }
    cout<<maxcount<<endl;
    

}