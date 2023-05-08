#include<iostream>
using namespace std;
#define n 100

class queue{
    int* arr;
    int front,rear;

    public:
    queue(){
        arr=new int[n];
        front=-1;
        rear=-1;
    }
    void push(int x){
        if(rear==n-1){
            cout<<"queue overflow"<<endl;
            return;
        }
        rear++;
        arr[rear]=x;

        if(front==-1){
            front++;
        }
        
    }

    void pop(){
        if(front == -1 || front>rear){
            cout<<"no element in queue"<<endl;

        }
        front++;
    }

    int peek(){
        if(front==-1 || front>rear){
            cout<<"no elements"<<endl;
            return -1;
        }
        return arr[front];
    }

    bool empty(){
        if(front==-1 || front>rear){
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
    q.push(4);
    q.peek();
    q.pop();
    q.empty();
    q.peek();
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.peek();
    q.empty();

}