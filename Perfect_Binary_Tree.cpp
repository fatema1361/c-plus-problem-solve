#include<bits/stdc++.h>
using namespace std;
class Node{
      public:
      int val;
      Node*left;
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
        
        Node *myleft,*myright;
        int l,r;
        cin>>l>>r;
        if(l==-1)myleft=NULL;
        else{
             myleft=new Node(l);
             
        }
        if(r==-1)myright=NULL;
        else {
            myright=new Node(r);
            
        }
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
int count(Node* root){
    if(root==NULL)return 0;
    return 1+count(root->left)+count(root->right);
}
int tree_depth(Node* root){
    if(root==NULL){
        return 0;
    }
    int L=tree_depth(root->left);
    int R=tree_depth(root->right);
    return 1+max(L,R);
}
int main(){
    Node* root=input_tree();
    int d=tree_depth(root);
    int c=count(root);
    int ans=pow(2,d);
    if(c==(ans-1)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}