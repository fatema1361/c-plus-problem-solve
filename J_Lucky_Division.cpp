#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int temp=n;
    int lucky=1;
    while(n>0){
        int digit=n%10;
        if(digit!=4 && digit!=7){
            lucky=0;
        }
        n=n/10;
    }
    if(lucky){
        cout<<"YES"<<endl;
    }
    else if(temp%4==0||temp%7==0||temp%44==0||temp%77==0||temp%47==0||temp%74==0||
    temp%444==0||temp%447==0||temp%474==0||temp%477==0||temp%744==0||temp%747==0||
    temp%774==0||temp%777==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}