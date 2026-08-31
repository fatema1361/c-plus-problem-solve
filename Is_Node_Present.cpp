#include<bits/stdc++.h>
using namespace std;
class Node{
      public:
      int val;
      Node*left;
      Node*right;
    Node(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;

    }
};
Node* tree_input(){
    int val;
    cin>>val;
    if(val==-1)return NULL;
    Node* root=new Node(val);
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        Node* f=q.front();
        q.pop();
        
        int l,r;
        cin>>l>>r;
        Node*myleft,*myright;
        

        if(l==-1)myleft=NULL;
        else myleft=new Node(l);

        if(r==-1)myright=NULL;
        else myright=new Node(r);
        f->left=myleft;
        f->right=myright;

        if(f->left){
            q.push(f->left);
        }
        if(f->right){
            q.push(f->right);
        }
    }
    return root;
}
bool tree_travel(Node* root,int key){
    if(root==NULL){
        return false;
    }
    if(root->val==key){
        return true;
    }
    bool left=tree_travel(root->left,key);
    bool right=tree_travel(root->right,key);
    return left||right;
}
int main(){
    Node* root=tree_input();
    int key;
    cin>>key;
    if(tree_travel(root,key)){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
    return 0;
}