#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    int A[1000], B[1000];
    int newSize = 0;

    // input
    for(int i = 0; i < N; i++) {
        cin >> A[i];
    }

    for(int i = 0; i < N; i++) {
        int found = 0;

        // check already exists in B[]
        for(int j = 0; j < newSize; j++) {
            if(A[i] == B[j]) {
                found = 1;
                break;
            }
        }

        // if not found, add to B[]
        if(!found) {
            B[newSize] = A[i];
            newSize++;
        }
    }

    // print result
    for(int i = 0; i < newSize; i++) {
        cout << B[i] << " ";
    }

    return 0;
}