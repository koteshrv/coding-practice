#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {
        long long n;
        cin >> n;
        cout << (long long)(n * (n + 2) * (2 * n + 1) / 8) << endl;
    }

    return 0;
}