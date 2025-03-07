#include <iostream>
using namespace std;

int main(){
    // int arr[5] = {1,3,5,7,9};

    // for(int i=0;i<5;i++){
    //     arr[i] = 1;
    // }

    // for(int i=0;i<5;i++){
    //     cout<<arr[i]<<" ";
    // }

    // int arr[10] = {1,2};

    // for(int i=0;i<10;i++){
    //     cout<<arr[i]<<" ";
    // }
    //1,2,0,0,0,0,0,0

    // int arr[10]={0};

    // for(int i=0;i<10;i++){
    //     cout<<arr[i]<<" ";
    // }

    // memmeset
    int arr[10];
    memset(arr,2,sizeof(arr));

    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}