#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin>>s;
    int len=s.length(),lo=0,up=0;
    for(int i=0;i<len;i++){
        if(s[i]>='A'&&s[i]<='Z'){
            up++;
        }
        
        else if(s[i]>='a'&&s[i]<='z'){
            lo++;
        
        }
            

    }
   for(int i=0;i<len;i++){
    
       if(up>lo){
        s[i]=toupper(s[i]);
       }
       else{
        s[i]=tolower(s[i]);
       }

   }
   cout<<s<<endl;
    return 0;
}