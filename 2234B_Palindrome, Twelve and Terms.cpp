#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        if (n == 10) {
            cout << -1 << '\n';
            continue;
        }

        long long a = (n % 12 == 10 ? 22 : n % 12);
        cout << a << ' ' << n - a << '\n';
    }
}