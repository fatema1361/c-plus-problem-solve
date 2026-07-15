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

int main(){
    Node* head=NULL;
    Node* tail=NULL;
    int x;
    while(cin>>x && x!=-1){
        Node* newNode=new Node(x);
        if(head==NULL){
            head=newNode;
            tail=newNode;

        }
        else{
            tail->next=newNode;
            tail=newNode;
        }
    }
    int mx=head->val;
    int mn=head->val;
    Node* temp=head;

    while(temp!=NULL){
        mx=max(mx,temp->val);
        mn=min(mn,temp->val);
        temp=temp->next;
    }
    cout<<mx-mn<<endl;
    return 0;
}