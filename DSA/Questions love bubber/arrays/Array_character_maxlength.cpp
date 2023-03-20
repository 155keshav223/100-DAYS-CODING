#include<iostream>;
#include<climits>;
#include<cmath>;
using namespace std;
void maxlength(char arr[],int n){
    int curr=0,maxlen1=INT_MIN;
    int i=0;
    while(arr[i] != '\0'){

        if(arr[i]==' '){
            maxlen1=max(curr,maxlen1);
            curr=0;
        }
        else if(arr[i]=='\0'){
            break;
        }
        else{
            curr++;
        }


        i++;
    }
    cout<<maxlen1;
}
int main(){
    // cout<<"hello";
    int n;
    char a[n+1];
    cout<<"enter n"<<endl;
    cin>>n;
    
    
    cin.getline(a,n);
    cin.ignore();
    maxlength(a,n);
    


}