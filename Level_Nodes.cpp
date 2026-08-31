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

int main(){
    Node* root=input_tree();
    int X;
    cin>>X;
    
    if(root==NULL){
      cout<<"Invalid"<<endl;
      return 0;
    }
    queue<pair<Node*,int>>q;
    q.push({root,0});
    bool found=false;
    while(!q.empty()){
        pair<Node*,int>p;
        p=q.front();
        q.pop();

        Node*node=p.first;
        int level=p.second;
        if(level==X){
            cout<<node->val<<" ";
            found=true;
        }
        if(node->left)
        q.push({node->left,level+1});
        
        if(node->right)
        q.push({node->right,level+1});
    }
    if(!found){
        cout<<"Invalid";
    }
    
    return 0;
}