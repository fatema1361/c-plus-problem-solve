 #include<bits/stdc++.h>
 using namespace std;
 int main(){
     ios::sync_with_stdio(false);
     cin.tie(nullptr);
     int m,n;
     cin>>n>>m;
     map<string,string>mp;
     while (n--){
        string name,ip;
        cin>>name>>ip;
        mp[ip]=name;
        
     }
     while(m--){
        string comm,ip;
        cin>>comm>>ip;
        ip.pop_back();
        cout<<comm<<" "<<ip<<"; #"<<mp[ip]<<endl;
     }
     

     return 0;
 }