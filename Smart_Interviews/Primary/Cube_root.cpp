#include <bits/stdc++.h>
using namespace std;

double diff(double n, double mid) {
    if(n > (mid * mid * mid)) return n - (mid * mid * mid);
    return (mid * mid * mid) - n;
}

double cuberoot(double n) {
    double start = 0, end = n;
    double e = 0.0000001;
    while(1) {
        double mid = start + end / 2;
        double error = diff(n, mid);
        if(error <= e) return mid;
        if((mid * mid * mid) > n) end = mid;
        else start = mid;
    }
}
int main() {

    int t;
    cin >> t;

    while(t--) {
        double n;
        cin >> n;
        double ans = cuberoot(n);
        cout << ans << endl;
    }

    return 0;
}