#include <iostream>
#include <limits.h>
using namespace std;

int main(){
    // int arr[]={2,4,5,6,73,3,6,7};
    // int size=sizeof(arr)/sizeof(int);
    // int maxi = INT_MIN;

    // for(int i=0;i<size;i++){
    //     if(arr[i]>maxi){
    //         //found a number greate than maxi, update maxi
    //         maxi = arr[i];
    //     }
    // }
    // cout << "maximum number is "<<maxi<<endl;

    // int arr[8] = {10,20,30,40,50,60,70,80};
    // int size = 8;

    // int start = 0;
    // int end = size-1;

    // while(start<= end){
    //     if(start == end){
    //         cout<<arr[start];
    //     }else{
    //         cout<<arr[start]<<" ";
    //         cout<<arr[end]<<" ";
    //     }
    // }

    int arr[8] = {10,20,30,40,50,60,70,80};
    int size = 7;

    int start = 0;
    int end = size-1;

    while (start<=end)
    {
        //ste1:
        swap(arr[start],arr[end]);
        //Step2:
        start++;
        //step3:
        end--;
    }

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    
    return 0;
}