#include <bits/stdc++.h>
using namespace std;

int main() {

    long long a, b, c;
    cin >> a >> b >> c;
    cout << __gcd(__gcd(a, b), c) << endl;

    return 0;
}