#include <iostream>
using namespace std;


int binarySearch(int arr[], int n, int target){
    int s = 0;
    int e = n-1;

    int mid = s+(e-s)/2;

    while (s<=e)
    {
        if(arr[mid] == target){
            return mid;
        }
        if(mid-1 >= s && arr[mid-1] == target){
            return mid-1;
        }  
        if(mid+1 <= e && arr[mid+1] == target){
            return mid+1;
        }

        if(target > arr[mid]){
            //Right Search 
            e = mid+2;
        }
        else{
            //Left Search
            s = mid-2;
        }
        mid = s+(e-s)/2;
    }
    return -1;
}

int main(){

    int arr[] = {10,3,40,20,50,80,70};
    int n = sizeof(arr)/sizeof(arr[0]);

    int target = 50;
    
    int ans = binarySearch(arr,n,target);
    cout << "index of " << target << " is " << ans << endl;

    return 0;
}
