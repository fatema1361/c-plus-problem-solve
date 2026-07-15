#include<bits/stdc++.h>
using namespace std;
void isPalindrome(int X){
    int temp=X,rev=0;
    while(X>0){
        rev=rev*10+(X%10);
        X=X/10;
    }
    if(temp==rev){
       cout<<"The number of palindrome numbers : "<<<<endl; 
    }

     
}
void isPrime(int N,int A[]){
        for(int i=0;i<N;i++){
    int X=A[i],pm=0;
    bool prime=true;
    if(X<=1){
        prime=false;
    }
    for(int j=2;j*j<=X;j++){
        if(X%j==0){
          prime=false;
          break;  
        }
    }
    if(prime){
        pm++;
    }
}
cout<<"The number of prime numbers : "<<pm<<endl;
}
int main(){
    int N;
    cin>>N;
    int A[N];
    for(int i=0;i<N;i++){
        cin>>A[i];
    }
    sort(A,A+N);
    int mn=A[0];
    int mx=A[N-1];
    
     
    cout<<"The maximum number : "<<mx<<endl;
    cout<<"The minimum number : "<<mn<<endl;
    isPrime(N,A);
    isPalindrome()
    cout<<"The number that has the maximum number of divisors : "<<md<<endl;
    return 0;
}