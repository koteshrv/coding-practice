#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    string s;
    char c;
    getline(cin, s); 
    cin >> c;
    int n = s.size(), count = 0;
    for(int i=0;i<n;i++) {
        if(s[i]==c) count++;
    }
    cout << count;
    return 0;
}
