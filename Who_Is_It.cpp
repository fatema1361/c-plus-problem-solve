#include<bits/stdc++.h>
using namespace std;
struct Student{
    int id;
    string name;
    char section;
    int marks;


};
int main(){
    int T;
    cin>>T;
    while(T--){
      Student best,cur;
      for(int i=0;i<3;i++){
        cin>>cur.id>>cur.name>>cur.section>>cur.marks;
        if(i==0){
            best=cur;
        }
        else{
            if(cur.marks>best.marks){
                best=cur;
            }
            else if(cur.marks==best.marks&&cur.id<best.id){
                  best=cur;
            }
        }
      }
      cout<<best.id<<" "<<best.name<<" "
      <<best.section<<" "<<best.marks<<endl;

    }
    
    return 0;
}