#include<bits/stdc++.h>
using namespace std;
int main(){
    string A,B;
    cin>>A>>B;
    int p1=-1,p2=-1;
    int cnt=0;
    if(A.size()!=B.size()){
            cout<<"NO\n";
            return 0;
    }
    for(int i=0;i<A.size();i++){
        if(A[i]!=B[i]){
            
            cnt++;
            if(cnt==1){
                p1=i;
            }
            else if(cnt==2){
                p2=i;
            }
        }


    }
    if(cnt==2){
        swap(A[p1],A[p2]);
        cout<<(A==B?"YES\n":"NO\n");
    }
    else if(cnt==0){
        int freq[26]={0};
        bool ok=false;
        for(int i=0;i<A.size();i++){
            freq[A[i]-'a']++;
            if(freq[A[i]-'a']>=2){
                ok=true;
            }
            
        }
        cout<<(ok?"YES\n":"NO\n");
        
    }
    else{
            cout<<"NO\n";
        }
        cout<<"\n";
        
    return 0;
}