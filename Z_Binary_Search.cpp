#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,Q;
    cin >>N>>Q;
   
    set<int>s;
    int X,A;
    for(int i=0;i<N;i++){
        cin>>A;
        s.insert(A);
    }
    
    
    while(Q--){
        cin>>X;
    
            if(s.count(X)){
                cout<<"found"<<endl;
            }
            else{
                cout<<"not found"<<endl;
            }
        }
        
    
    return 0;
}
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int N,Q;
//     cin >>N>>Q;
//     int A[N];
//     for(int i=0;i<N;i++){
//         cin>>A[i];
//     }
//     int X,count=0;
    
//     while(Q--){
//         cin>>X;
//         for(int i=0;i<N;i++){
//             if(A[i]==X){
//                 count=1;
//                 break;
//             }
//             else{
//                 count=0;
//             }
//         }
//         if(count==1){
//             cout<<"found"<<endl;
//         }
//         else{
//             cout<<"not found"<<endl;
//         }
//     }
//     return 0;
// }