#include <iostream>
#include <set>
using namespace std;

int main() {
    int n;
    cin >> n;

    set<int> s;

    int p;
    cin >> p;

    while (p--) {
        int x;
        cin >> x;
        s.insert(x);
    }

    int q;
    cin >> q;

    while (q--) {
        int x;
        cin >> x;
        s.insert(x);
    }
    
    if (s.size() == n)
     cout << "I become the guy.";
    else
    cout << "Oh, my keyboard!";
}