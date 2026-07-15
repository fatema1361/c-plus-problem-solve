#include<bits/stdc++.h>
using namespace std;
struct Student{
    string nm;
    int cls;
    char s;
    int id;
    int math_marks,eng_marks;

};
bool cmp(Student a,Student b){
    int totalA=a.math_marks+a.eng_marks;
    int totalB=b.math_marks+b.eng_marks;
    if(totalA==totalB){
        return a.id<b.id;
    }
    return totalA>totalB;
}
int main(){
    int N,sum=0;
    cin>>N;
    Student st[100];
    for(int i=0;i<N;i++){
        cin>>st[i].nm>>st[i].cls>>st[i].s>>st[i].id>>st[i].math_marks>>st[i].eng_marks;
       sum=st[i].math_marks+st[i].eng_marks;
    }
    sort(st,st+N,cmp);
    for(int i=0;i<N;i++){
        cout<<st[i].nm<<" "<<st[i].cls<<" "<<st[i].s<<" "<<st[i].id<<" "<<st[i].math_marks<<" "<<st[i].eng_marks <<endl;
       
    }
    cout<<endl;

    
    return 0;
}