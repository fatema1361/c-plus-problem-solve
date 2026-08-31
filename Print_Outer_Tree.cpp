#include<bits/stdc++.h>
using namespace std;
class Node{
      public:
      int val;
      Node* left;
      Node* right;
    Node(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;

    }
};
Node* input_tree(){
    int val;
    cin>>val;
    if(val==-1)return NULL;
    Node* root=new Node(val);
    queue<Node*>q;
    q.push(root);
    

    while(!q.empty()){
        Node* p=q.front();
        q.pop();
        int l,r;
        cin>>l>>r;
        Node* myleft,*myright;
        if(l==-1)myleft=NULL;
        else myleft=new Node(l);
        if(r==-1)myright=NULL;
        else myright=new Node(r);
         p->left=myleft;
         p->right=myright;
        if(p->left){
            q.push(p->left);
        }
        if(p->right){
            q.push(p->right);
        }

    }
    return root;


}
void leftSide(Node* root){
    if(root==NULL)return;
    if(root->left==NULL && root->right==NULL){
       cout<<root->val<<" ";
        return;
    }
    
    if(root->left){
        leftSide(root->left);
      
    }
    else{
        leftSide(root->right);
    }
    cout<<root->val<<" ";
}

void rightSide(Node* root){
    if(root==NULL)return;
    if(root->left==NULL && root->right==NULL){
        cout<<root->val<<" ";
        return;
    }
    cout<<root->val<<" ";
    if(root->right){
        rightSide(root->right);
    }
    else{
        rightSide(root->left);
        
    }
    
}
int main(){
    Node* root=input_tree();
    if(root==NULL)return 0;

    if(root->left==NULL && root->right==NULL){
        cout<<root->val;
        return 0;
    }
    if(root->left){
        leftSide(root->left);
        
    }
    cout<<root->val<<" ";
    
    
    if(root->right){
        
        rightSide(root->right);
    }
   

    return 0;
}