#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        string s="codeforces";
        int found=0;
        char a;
        cin>>a;
        for(int i=0;i<10;i++){
            if(a==s[i]){
                found=1;
                break;
            }
        }
        if(found){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
        }
        return 0;
    }