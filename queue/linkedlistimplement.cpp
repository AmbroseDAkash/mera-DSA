#include<iostream>
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
class queue{
    node* front;
    node* rear;

    public:
    queue(){
        front=NULL;
        rear=NULL;
    }

    void push(int x){
        node* n= new node(x);

        if(front==NULL){
            rear=n;
            front=n;
            return;
        }
        rear->next=n;
        rear=n;
    }

    void pop(){
        if(front==NULL){
            cout<<"underflow"<<endl;
            return;
        }
        node* todelete= front;
        front=front->next;
        delete todelete;
    }

    int peek(){
        if(front==NULL){
            cout<<"no element in queue"<<endl;
            return -1;
        }
        return front->data;
    }

    bool empty(){
        if(front==NULL){
            return true;
        }
        return false;
    }

};

int main(){
queue q;
q.push(1);
q.push(2);
q.push(3);
q.peek();
}