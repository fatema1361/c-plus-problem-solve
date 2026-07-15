#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin>>N;
    int A[N],b[N];
    for(int i=0;i<N;i++){
       cin>>A[i];
       b[i]=A[i];
    }
   sort(b,b+N);
   int mid=N/2;
   int median=b[mid];
   int index=-1;
   for(int i=0;i<N;i++){
    if(A[i]==median){
        index=i;
        break;
    }
   }
   cout<<abs(index-mid)<<endl;
    return 0;
}