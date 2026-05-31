#include<iostream>
using namespace std;

int main(){

    int t;
    cin >> t;
    
    while(t--){
        
        int a,b,c,d;
        cin >> a >> b >> c >> d;

        int n = 0;

        if(b > a){
            n++;
        }

        if(c > a){
            n++;
        }

        if(d > a){
            n++;
        }

        cout << n << endl;
    }
}