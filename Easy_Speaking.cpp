#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    int N;
    while(T--){
        cin>>N;
        char S[N],count=0,flag=0;
        for(int j=0;j<N;j++){
            cin>>S[j];
        }
        
            for(int j=0;j<N;j++){
                if(S[j]=='a'||S[j]=='e'||S[j]=='i'||S[j]=='o'||S[j]=='u'||S[j]=='A'||S[j]=='E'||S[j]=='I'||S[j]=='O'||S[j]=='U'){
                   count=0;
                }
                else{
                    count++;
                }
                if(count>=4){
                flag=1;
                break;
               }
            }
            
            
            if(flag==1){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
        }
    
    return 0;
}