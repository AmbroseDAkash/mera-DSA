#include<iostream>
using namespace std;

void swap(int *p,int *q){
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;


}

void selectionSort(int arr[],int x){
    int min_idx;
    for(int i=0;i<x-1;i++){
        min_idx=i;
        for(int j=i;j<x;j++){
            if(arr[j]<arr[min_idx]){
                min_idx=j;

                if(min_idx!=i){
                    swap(&arr[min_idx],&arr[i]);
                }
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
    selectionSort(arr,5);
    cout<<"sorted array:"<<endl;
    printarray(arr,5);
}