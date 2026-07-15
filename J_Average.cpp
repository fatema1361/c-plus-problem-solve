#include<bits/stdc++.h>
using namespace std;
void fun(double sum,int N){
    double avg=0;
     avg=sum/N;
    cout<<fixed<<setprecision(7)<<avg<<endl;

}
int main(){
    int N;
    cin>>N;
    double A[N],sum=0;
    for(int i=0;i<N;i++){
       cin>>A[i];
       sum=sum+A[i];

    }
    fun(sum,N);
    
    return 0;
}