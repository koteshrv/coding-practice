#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        long long num = 0;
        for(int i = 0; i < n; i++) 
            num += pow(i, 2);
        cout << num << endl;
    }

    return 0;
}