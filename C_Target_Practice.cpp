#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        char y[11][11];
        for(int i=1;i<=10;i++){
            for(int j=1;j<=10;j++){
                cin>>y[i][j];
            }
        }
        int ans=0,cnt1=0,cnt2=0,cnt3=0,cnt4=0,cnt5=0;
        for(int i=1;i<=10;i++){
            for(int j=1;j<=10;j++){
                if(y[i][j]=='X'){
                    if(i==1||i==10||j==1||j==10){
                        ans+=1;
                    }
                    else if(i==2||i==9||j==2||j==9){
                        ans+=2;
                    }
                    else if(i==3||i==8||j==3||j==8){
                        ans+=3;
                    }
                    else if(i==4||i==7||j==4||j==7){
                        ans+=4;
                    }
                    else if(i==5||i==6||j==5||j==6){
                        ans+=5;
                    }

                }
            }
        }
        //ans=cnt1*1+cnt2*2+cnt3*3+cnt4*4+cnt5*5;
        cout<<ans<<endl;


    }
    return 0;
}
