// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//    int X,N,ans=0;
//    cin>>X>>N;
//     for(int i=2;i<=N;i=i+2){
//        ans=ans+pow(X,i);
//     }
//     cout<<ans<<endl;
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
void fun(int X,int N){
    long long ans=0;
     for(int i=2;i<=N;i=i+2){
       ans=ans+pow(X,i);
    }
    cout<<ans<<endl;
}
int main(){
   int X,N;
   cin>>X>>N;
    fun(X,N);
    return 0;
}