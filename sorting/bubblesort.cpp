#include<iostream>
using namespace std;

void swap(int *p,int *q){
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;


}

void bubbleSort(int arr[],int x){
    for(int i=0;i<x-1;i++){
        for(int j=0;j<(x-i-1);j++){
            if(arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
}

void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
            }
}

int main(){
    int arr[5]={3,6,1,30,44};
    bubbleSort(arr,5);
    cout<<"sorted array:"<<endl;
    printarray(arr,5);
}