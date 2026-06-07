#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    double x, sum = 0;

    for (int i = 0; i < n; i++) {
        cin >> x;
        sum += x;
    }

    double ans = sum / n;

    cout << ans << endl;

    return 0;
}