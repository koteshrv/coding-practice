#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        unsigned long long int k, sum = 0;
        for(int i = 0; i < n; i++) {
            cin >> k;
            sum += k;
        }
        cout << sum << endl;
    }
    return 0;
}
