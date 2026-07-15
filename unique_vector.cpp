#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> v(N);

    for(int i = 0; i < N; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    v.erase(unique(v.begin(), v.end()), v.end());

    for(int x : v) {
        cout << x << " ";
    }
}