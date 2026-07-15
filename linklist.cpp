#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }

};
int main(){
    Node a,b,c;
    a.val=10;
    b.val=20;
    c.val=30;
    a.next=&b;
    b.next=&c;
    c.next=NULL;
    cout<<(*a.next).val;
    cout<<a.next->val;

    return 0;
}