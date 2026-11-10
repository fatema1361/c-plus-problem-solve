#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,sum;
    cin>>n>>sum;
    vector<pair<int,int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i].first;
        a[i].second=i+1;
    }
    sort(a.begin(),a.end());
    int x,y,z;
    bool paici=false;
  for(int i=0;i<n;i++){
        int ai=a[i].first;
        int lagbe=sum-ai;
    
    int l=i+1,r=n-1;
    while(l<r){
        int currSum=a[l].first+a[i].second;
        if(currSum==lagbe){
            paici=true;
            x=a[i].second;
            y=a[l].second;
            z=a[r].second;
            break;

        }
        else if(currSum==lagbe){
        r--;
        }
        else{
            l++;
        }
            
    }
  }
    if(paici)break;
    if(paici)cout<<x<<" "<<y<<" "<<endl;
    else cout<<"IMPOSSIBLE"<<endl;

    return 0;
}