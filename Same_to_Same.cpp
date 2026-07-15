#include<bits/stdc++.h>
using namespace std;
class Node{
      public:
      int val;
      Node*next;
    Node(int val){
        this->val=val;
        this->next=NULL;

    }
};
void insert_tail(Node* &head,Node* &tail,int val){
    Node* newNode=new Node(val);
    if(head==NULL){
        head=newNode;
        tail=newNode;
    }
    else{
        tail->next=newNode;
        tail=newNode;
    }
}
bool isSame(Node* head1,Node* head2){
     Node* t1=head1;
     Node* t2=head2;

     while(t1!=NULL && t2!=NULL){
        if(t1->val!=t2->val){
            return false;
        }
        t1=t1->next;
        t2=t2->next;
     }
     if(t1!=NULL || t2!=NULL){
        return false;
     }
     return true;
}
int main(){
    Node* head1=NULL;
    Node* tail1=NULL;
    Node* head2=NULL;
    Node* tail2=NULL;
    int val;

    while(cin >>val && val!=-1){
        insert_tail(head1,tail1,val);
    }
    while(cin>> val && val!=-1){
        insert_tail(head2,tail2,val);
    }
    if(isSame(head1,head2)){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    
    return 0;
}