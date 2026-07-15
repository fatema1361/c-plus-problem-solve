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
void insert_head(Node* &head,Node* &tail,int val){
    Node* newNode=new Node(val);
    if(head==NULL){
        head=newNode;
        tail=newNode;
        return;
    }
    newNode->next=head;
    head=newNode;
}
void insert_tail(Node* &head,Node* &tail,int val){
    Node* newNode=new Node(val);
    if(head==NULL){
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    tail=newNode;
}

void delete_index(Node* &head,Node* &tail,int idx){
    if(head==NULL ||idx<0){
        return;
    }
    if(idx==0){
        Node* del=head;
        head=head->next;
        if(head==NULL) tail=NULL;
        delete del;
        return;

    }

    Node* temp=head;
    for(int i=0;i<idx-1;i++){
        if(temp==NULL || temp->next==NULL){
            return;
        }
        temp=temp->next;
    }
    if(temp==NULL || temp->next==NULL){
        return;
    }
    Node* del=temp->next;
    temp->next=temp->next->next;
    
    if(del==tail){
        tail=temp;
    }
    delete del;
}
void print_list(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    int Q;
    cin>>Q;
    Node* head=NULL;
    Node* tail=NULL;
    while(Q--){
        int X,V;
        cin>>X>>V;
        if(X==0){
            insert_head(head,tail,V);

        }
        else if(X==1){
            insert_tail(head,tail,V);

        }
        else if(X==2){
            delete_index(head,tail,V);
        }
        print_list(head);

    }
    return 0;
}