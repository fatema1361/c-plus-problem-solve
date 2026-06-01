#include<bits/stdc++.h>
using namespace std;

int ctn(long long n) {
    if (n < 2) return 0;

    return 1 + ctn(n / 2);
}

int main() {
    long long n;
    cin >> n;

    cout << ctn(n) << endl;

    return 0;
}