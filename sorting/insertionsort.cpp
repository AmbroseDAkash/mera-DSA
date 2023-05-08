#include<iostream>
using namespace std;

void insertionSort(int arr[],int n){
    int key;
    for(int i=1;i<n;i++){
        key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }
}

void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
            }
}

int main(){
    int arr[5]={3,6,1,30,44};
    insertionSort(arr,5);
    cout<<"sorted array:"<<endl;
    printarray(arr,5);
}