#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s1="asdsjfskdjfhsk";
    string s2="ASFDDMBDSJFSDMGFH";
    string s3="skdjfhskjfhskhf";

//method 1

    for(int i=0;i<s1.size();i++){
        if(s1[i]>='a' || s1[i]<='z'){
            s1[i]-=32;
        }
    }
    cout<< s1 <<endl;
    for(int i=0;i<s2.size();i++){
        if(s2[i]>='A' || s2[i]<='Z'){
            s2[i]+=32;
        }
    }
    cout<<s2<<endl;

    //method 2

    transform(s3.begin(),s3.end(),s3.begin(),:: toupper);
    cout<<s3<<endl;

}