#include <iostream>
#include <vector>
using namespace std;


int findDuplicate(int arr[],int n){

    int ans = -1;

    for (int i = 0; i < n; i++)
    {
        int index = abs(arr[i]) - 1;
        if(arr[index] < 0){
            ans = abs(arr[i]);
        }       

        arr[index] *= -1;
    }
    return ans;
    
}

int main(){

    int arr[] = {1,3,4,2,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Duplicate number: " << findDuplicate(arr,n) << endl;
    return 0;
}