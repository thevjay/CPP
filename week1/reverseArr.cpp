#include <iostream>
using namespace std;

void reverseWithSwap(int arr[], int size){
    int start = 0;
    int end = size-1;

    while (start <= end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    
}

void reverseWithTemp(int arr[],int size){

    int start = 0;
    int end = size - 1;
    while (start<end)
    {
        int temp = arr[start];  // Store the value at start
        arr[start] = arr[end];  // Assigb the value at end to start
        arr[end] = temp;        // Assign the stiored value to end
        start++;                // move start pointer forword
        end--;                  // Move end pointer backend
    }
}

void reverseWithXOR(int arr[],int size){

    int start = 0;
    int end = size - 1;

    while (start<end)
    {
        arr[start] ^= arr[end];
        arr[end] ^= arr[start];
        arr[start] ^= arr[end];
        start++;
        end--;
    }
    
}

int main(){
    
    int arr[] = {10,20,30,40,50,60,70};

    int size = sizeof(arr) / sizeof(arr[0]);

    //int size = 7;
    // int start = 0;
    // int end = size-1;

    // while (start<=end)
    // {
    //     //step:1
    //     swap(arr[start],arr[end]);
    //     //step:2
    //     start++;
    //     //step:3
    //     end--;
    // }

    reverseWithSwap(arr,size);
    reverseWithTemp(arr,size);
    reverseWithXOR( arr, size);

    //printing array
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}