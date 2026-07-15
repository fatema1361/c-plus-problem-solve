#include<bits/stdc++.h>
using namespace std;
int main(){
    double BD,BC;
    cin>>BD>>BC;
    double area =0.5*BC*sqrt(BD*(BC-BD));
    cout<<fixed<<setprecision(6)<<area<<endl;
    return 0;
}