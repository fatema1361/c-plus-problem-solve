#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,ans1,ans2,ans3;
        cin>>a>>b>>c;
        if(a==b||b==c||c==a){
            cout<<"0"<<endl;
        }
        else{
        ans1=abs(a-b);
        ans2=abs(a-c);
        ans3=abs(b-c);
        // if(ans1<ans2&&ans1<ans3){
        //     cout<<ans1<<endl;
        // }
        // else if(ans2<ans1&&ans2<ans3){
        //     cout<<ans2<<endl;
        // }
        // else if(ans3<ans2&&ans3<ans1){
        //     cout<<ans3<<endl;
        // }
        int ans=min(ans1,min(ans2,ans3));
        cout<<ans<<endl;
      }

    }
    return 0;
}