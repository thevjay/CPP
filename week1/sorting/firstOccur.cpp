#include <iostream>
using namespace std;

int firstOccurence(int arr[],int n , int target){
    int s = 0;
    int e = n-1;
    int mid = s+(e-s)/2;
    int ans = -1;

    while(s<=e){
        if(arr[mid] == target){
            // Store the index and Search
            ans = mid ;
            e = mid - 1;
        }
        else if(target < arr[mid] ){
            // left me search
            e = mid - 1;
        }
        else if(target > arr[mid]){
            // right search
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int main(){

    int arr[] = {1,3,4,4,4,4,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 4;
    int indexOfFirstOcc = firstOccurence(arr,n,target);

    cout << "Ans is " << indexOfFirstOcc << endl;

    return 0;
}
