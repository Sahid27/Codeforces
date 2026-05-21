#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int a[100];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        
        int spy_idx = -1;
        if (a[0] == a[1])
        {
            for (int i = 2; i < n; i++)
            {
                if (a[i] != a[0])
                {
                    spy_idx = i + 1;
                    break;
                }
            }
        }
        else if (a[0] == a[2])
        {
            spy_idx = 2;
        }
        else
        {
            spy_idx = 1;
        }
        cout << spy_idx << "\n";
    }
}