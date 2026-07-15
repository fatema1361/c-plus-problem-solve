#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    unordered_set<int> s;

    for(int i = 0; i < N; i++) {
        int x;
        cin >> x;
        s.insert(x);
    }

    for(auto val : s) {
        cout << val << " ";
    }
}