#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string>a(n),b(n),c(n);
        unordered_map<string, int>freq;
        for(int i=0;i<n;i++){
            cin>>a[i];
            freq[a[i]]++;
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
            freq[b[i]]++;
        }
        for(int i=0;i<n;i++){
            cin>>c[i];
            freq[c[i]]++;
        }
        int p1=0,p2=0,p3=0;
        for(string w:a){
            if(freq[w]==1)p1+=3;
            else if(freq[w]==2)p1+=1;
        }
        for(string w:b){
            if(freq[w]==1)p2+=3;
            else if(freq[w]==2)p2+=1;
        }
        for(string w:c){
            if(freq[w]==1)p3+=3;
            else if(freq[w]==2)p3+=1;
        }
        cout<<p1<<" "<<p2<<" "<<p3<<endl;
    }
    return 0;
}