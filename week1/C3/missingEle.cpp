#include <iostream>
using namespace std;

void missingEl(int arr[],int n){
    for(int i=0;i<n;i++){
        int index = abs(arr[i]);
        if(arr[index]>0){
            arr[index-1] *= -1;
        }
    }
}

int main(){
    
    int arr[] = {1,3,5,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);

    missingEl(arr,n);

    for(auto value:arr){
        cout<<value<<" ";
    }
    cout<<endl;

    return 0;
}