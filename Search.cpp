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
int search_index(Node* head,int x){
    int idx=0;
    Node* temp=head;

    while(temp!=NULL){
        if(temp->val==x){
            return idx;
        }
        temp=temp->next;
        idx++;
    }
    return -1;
}
int main(){
    int T;
    cin>>T;
    while(T--){
        Node* head=NULL;
        Node* tail=NULL;

        int x,val;
        while(cin>>val && val!=-1){
            insert_tail(head,tail,val);
        }
        cin>>x;
        cout<<search_index(head,x)<<endl;


    }
    return 0;
}