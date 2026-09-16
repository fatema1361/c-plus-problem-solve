#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int R,B,p=0,q=0;
    cin>>R>>B;
   int g=min(R,B);
   if(g==R){
     p=B-R;
   }
   else{
    q=R-B;
   }


    
   

    cout<<g*5+p*2+q*1<<endl;

    return 0;
}