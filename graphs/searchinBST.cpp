#include<iostream>
using namespace std;

struct node{
int data;
node *left, *right;
node(int val){
    data=val;
    left=NULL;
    right=NULL;
}
};

node* searchInBst(node* root, int key){

    if(root==NULL){
        return NULL;
    }

    if(root->data==key){
        return root;
    }
    //data>key

    if(root->data > key){
        return searchInBst(root->left,key);
    }

    //data<key
    return searchInBst(root->right,key);
}

int main(){

   node *root = new node(4);
   root->left = new node(2);
   root->right = new node(5);
   root->left->left = new node(1);
   root->left->right = new node(3);
   root->right->right = new node(6);

   /*
              4
             / \
             2  5
             /\  \
            1  3   6
    */

   if(searchInBst(root,5)==NULL)  {
    cout<<"key not exist"<<endl;
   }       
   else{
    cout<<"exists"<<endl;
   }
   return 0;


}
