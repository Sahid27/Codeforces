#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int a[55];

        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        // Sort
        for(int i=0;i<n-1;i++){
            for(int j=0;j<n-1-i;j++){
                if(a[j] > a[j+1]){
                    int temp = a[j];
                    a[j] = a[j+1];
                    a[j+1] = temp;
                }
            }
        }

        int flag = 1;

        for(int i=0;i<n-1;i++){
            if(a[i+1] - a[i] > 1){
                flag = 0;
                break;
            }
        }

        if(flag){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }

    return 0;
}