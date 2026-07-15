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
    if(a.eng_marks==b.eng_marks){
        if(a.math_marks==b.math_marks){
            return a.id<b.id;
        }
        return a.math_marks>b.math_marks;
    }
    return a.eng_marks>b.eng_marks;
}
int main(){
    int N,sum=0;
    cin>>N;
    Student st[1000];
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