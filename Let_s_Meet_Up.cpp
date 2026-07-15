#include<bits/stdc++.h>
using namespace std;
long long int gcd(int A,int B){
    while(B!=0){
        int temp=A%B;
        A=B;
        B=temp;
    }
    return A;
}
int main(){
    int A,B;
    cin>>A>>B;
   long long int lcm=(A/gcd(A,B))*B;
    cout<<lcm<<endl;

    return 0;
}