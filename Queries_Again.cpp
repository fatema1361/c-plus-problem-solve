#include<bits/stdc++.h>
using namespace std;
class Node{
      public:
      int val;
      Node* next;
      Node* prev;
    Node(int val){
        this->val=val;
        this->next=NULL;
        this->prev=NULL;


    }
};
class doublyLinkedList{
    public:
    Node* head;
    Node* tail;
    int sz;
    doublyLinkedList(){
        head=NULL;
        tail=NULL;
        sz=0;

    }
    void insert_at_head(int val){
        Node* newnode =new Node(val);
        if(head==NULL){
            head=tail=newnode;
        }
        else{
            newnode->next=head;
            head->prev=newnode;
            head=newnode;
        }
        sz++;
    }
    void insert_at_tail(int val){
        Node* newnode=new Node(val);
        if(head==NULL){
            head=tail=newnode;
        }
        else{
            tail->next=newnode;
            newnode->prev=tail;
            tail=newnode;
        }
        sz++;
    }
    void insert_at_any_position(int idx,int val){
        if(idx==0){
            insert_at_head(val);
            return;
        }
        if(idx==sz){
            insert_at_tail(val);
            return;
        }
        Node* temp=head;
        for(int i=0;i<idx-1;i++){
            temp=temp->next;
        }
        Node* newnode=new Node(val);
        newnode->next=temp->next;
        newnode->prev=temp;

        temp->next->prev=newnode;
        temp->next=newnode;
        sz++;
    }
    void print_forward(){
        cout<<"L -> ";
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    void print_backward(){
        cout<<"R -> ";
        Node* temp=tail;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->prev;
        }
        cout<<endl;
    }
};

int main(){
    doublyLinkedList dll;
    int Q;
    cin>>Q;
    while(Q--){
       int X,V;
       cin>>X>>V;
       if(X<0||X>dll.sz){
        cout<<"Invalid"<<endl;
       } 
       else{
        dll.insert_at_any_position(X,V);
        dll.print_forward();
        dll.print_backward();

       }
    }
    return 0;
}