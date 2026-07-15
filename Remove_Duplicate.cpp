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
void insert_tail(Node* &head, Node* &tail, int val) {
    Node* newNode = new Node(val);

    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
void remove_duplicates(Node* head){
    Node* curr=head;
    while(curr!=NULL){
         Node* prev=curr;
         Node* temp=curr->next;

         while(temp!=NULL){
              if (temp->val == curr->val) {
                prev->next = temp->next;
                delete temp;
                temp = prev->next;
            }
            else {
                prev = temp;
                temp = temp->next;
            }

         }
         curr=curr->next;
    }
}

void print_list(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;
    int x;
    while (cin >> x && x != -1) {
        insert_tail(head, tail, x);
    }
    remove_duplicates(head);

    print_list(head);

    return 0;
}