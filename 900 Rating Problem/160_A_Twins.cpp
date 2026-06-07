#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[101];
    int total = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        total += a[i];
    }

    sort(a, a + n, greater<int>());

    int mySum = 0;
    int cnt = 0;

    for (int i = 0; i < n; i++) {
        mySum += a[i];
        cnt++;

        if (mySum > total - mySum) {
            break;
        }
    }

    cout << cnt;

    return 0;
}