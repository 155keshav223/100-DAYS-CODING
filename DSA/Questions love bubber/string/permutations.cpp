#include<iostream>
using namespace std;
void permutation(string s, string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        
    }
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        string ros =s.substr(0,i-1)+s.substr(i+1);
        permutation(ros,ans+ch);

    }
}
int main(){
    permutation("ASF","");
    return 0;
}