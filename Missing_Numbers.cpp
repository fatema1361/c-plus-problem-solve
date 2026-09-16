#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    cin>>N;
    int A[N];
    
    for(int i=0;i<N;i++){
        cin>>A[i];
    }
    int M;
    int B[M];
    vector<int>ans;
    for(int i=0;i<M;i++){
        cin>>B[i];
    }
    for(int i=0,j=0;i<N&&j<M;i++,j++){
        if(A[i]!=B[j]){
          ans.push_back(B[j]);
          
        }
    }
    sort(ans.begin(),ans.end());
    ans.erase(unique(ans.begin(),ans.end()),ans.end());
    for(int x:ans){
        cout<<x<<" ";
    }

    return 0;
}