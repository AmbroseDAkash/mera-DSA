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

node* inOrderSucc(node* root){
    node* curr = root;
    while(curr && curr->left != NULL){
        curr = curr->left;
    }
    return curr;
}

node* deleteInBst(node* root, int key){
    if(key<root->data){
        root->left = deleteInBst(root->left,key);

    }

    else if(key>root->data){
        root->right = deleteInBst(root->right,key);
    }

    else{
        if(root->left==NULL){
            node* temp = root->right;
            free(root);
            return temp;
        }
        else if(root->right== NULL){
            node* temp= root->left;
            free(root);
            return temp;
        }

        //case 3

        node* temp = inOrderSucc(root->right);
        root->data = temp->data;
        root->right = deleteInBst(root->right,temp->data);
    }
    return root;


}
void inorder(node* root){
    if (root==NULL)
    {
      return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
    
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

   inorder(root);
   cout<<endl;
   root = deleteInBst(root,5);
   inorder(root);
   cout<<endl;
   return 0;


}
