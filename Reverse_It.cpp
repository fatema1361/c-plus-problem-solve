#include<bits/stdc++.h>
using namespace std;
struct Student{
    string nm;
    int cls;
    char s;
    int id;
};
int main(){
    int N;
    cin>>N;
    Student st[100];
    for(int i=0;i<N;i++){
        cin>>st[i].nm>>st[i].cls>>st[i].s>>st[i].id;
    }
    for(int i=0;i<N/2;i++){
        swap(st[i].s,st[N-1-i].s);
    }
    for(int i=0;i<N;i++){
        cout<<st[i].nm<<" "<<st[i].cls<<" "
        <<st[i].s<<" "<<st[i].id<<endl;
    }
    
    return 0;
}