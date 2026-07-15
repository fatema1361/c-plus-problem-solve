#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin>>N;
    int A[N];
    int found[1001]={0};
    for(int i=0;i<N;i++){
        cin>>A[i];
        found[A[i]]=1;
    }
    int K,count=0;
    cin>>K;
    
    if(found[K]){
    cout<<-1<<endl;
    return 0;
    }
    for(int i=0;i<K;i++){
        if(!found[i]){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}