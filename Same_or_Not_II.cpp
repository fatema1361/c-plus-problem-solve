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
class Stack{
    public:
    Node* head;
    int sz;
    Stack(){
        head=NULL;
        sz=0;
    }
    void push(int val){
        Node* newnode=new Node(val);
        newnode->next=head;
        head=newnode;
        sz++;
    }
    void pop(){
        if(head==NULL){
            return;
        }
        Node* deletenode =head;
        head=head->next;
        delete deletenode;
        sz--;
    }
    int top(){
        return head->val;
    }
    bool empty(){
        return head==NULL;
    }
};
class Queue{
    public:
    Node* head;
    Node* tail;
    int sz;
    Queue(){
        head=NULL;
        tail=NULL;
        sz=0;
    }
    void push(int val){
        Node* newnode =new Node(val);
        if(head==NULL){
            head=newnode;
            tail=newnode;

        }
        else{
            tail->next=newnode;
            tail=newnode;
            
        }
        sz++;
    }
    void pop(){
        if(head==NULL){
            return;
        }
        Node* deletenode=head;
        head=head->next;
        if(head==NULL){
            tail=NULL;
        }
        delete deletenode;
        sz--;
    }
    int front(){
        return head->val;
    }
    bool empty(){
        return head==NULL;
    }
};

int main(){
    int N,M;
    cin>>N>>M;
    if(N!=M){
        cout<<"NO"<<endl;
        return 0;
    }
    Stack A;
    Queue B;
    for(int i=0;i<N;i++){
        int x;
        cin>>x;
        A.push(x);
    }
    for(int i=0;i<M;i++){
        int x;
        cin>>x;
        B.push(x);
    }
    while(!A.empty()){
        if(A.top()!=B.front()){
            cout<<"NO"<<endl;
            return 0;
        }
        A.pop();
        B.pop();
    }
    cout<<"YES"<<endl;
    return 0;
}