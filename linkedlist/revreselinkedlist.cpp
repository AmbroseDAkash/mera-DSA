#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    
    node(int val){
        data=val;
        next=NULL;
    }
};

void insertAtTail(node* &head,int val){

    node* n= new node(val);

    if(head == NULL){
    head=n;
    }

    node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;

    }
    temp->next= n;
}

void insertAtHead(node* &head, int val){
    node* n= new node(val);
    n->next=head;
    head=n;
}

void display(node* head){
    node* temp= head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp=temp->next;

    }
    cout<<endl;

}

bool search(node* head, int key){
    node* temp= head;
    while(temp != NULL){
        if(temp->data == key){
           return true; 
        }
        temp=temp->next;
    }
    return false;
}
node* reverse(node* &head){

    node* prevptr=NULL;
    node* currentptr=head;
    node* nextptr;
    while(currentptr!=NULL){
        nextptr=currentptr->next;
        currentptr->next=prevptr;
        prevptr=currentptr;
        currentptr=nextptr;
    }
    return prevptr;
}
void deleteAtHead(node* &head){
    node* todelete= head;
    head=head->next;

    delete todelete;

}
void deletion(node* &head, int val){

    if(head==NULL){
        return;
    }
    if(head->next==NULL){
        deleteAtHead(head);
        return;
    }

    node* temp=head;
    while(temp->next->data!=val){
        temp=temp->next;
    }
    node* todelete = temp->next;
    temp->next=temp->next->next;

    delete todelete;
}

int main()
{
    node* head= NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    //display(head);
    insertAtHead(head,4);
    //cout<<search(head,5)<<endl;
    //deletion(head,3);
    
    deleteAtHead(head);
    display(head);
    node* newhead=reverse(head);
    display(newhead);
    return 0;


}