#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long n, a, b;
        cin >> n >> a >> b;

        long long groups = n / 3;
        long long rem = n % 3;

        long long ans =
            groups * min(3 * a, b) +
            min(rem * a, b);

        cout << ans << '\n';
    }

    return 0;
}