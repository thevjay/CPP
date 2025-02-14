#include <iostream>
using namespace std;

void selectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int miniIndex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[miniIndex]){
                miniIndex=j;
            }
        }
        swap(arr[miniIndex],arr[i]);
    }
}

int main(){

    int arr[]={6,2,8,4,10};
    int n = sizeof(arr)/sizeof(arr[0]);

    selectionSort(arr,n);

    for(auto val:arr){
        cout<<val<<" ";
    }
    cout<<endl;

    return 0;
}