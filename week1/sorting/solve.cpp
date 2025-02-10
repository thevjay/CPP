#include <iostream>
using namespace std;


int solve(int arr[], int n){
    int s = 0;
    int e = n-1;
    int mid = s+(e-s)/2;

    while (s <= e)
    {
        if(s == e){
            //single element
            return s;
        }

        //2 cases -> mid - even or mid - odd
        if( mid%2 == 0){
            if(arr[mid] == arr[mid+1]){
                s =mid + 2;
            }else{
                e=mid;
            }
        }
        else 
        {
            if(arr[mid] == arr[mid-1]){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        mid = s+(e-s)/2;
    }
    return -1;
}

int main(){

    int arr[] = {1,1,2,2,3,3,4,4,3,600,600,4,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int ans = solve(arr,n);
    cout << "index of " << " is " << ans << endl;
    cout << "value of " << " is " << arr[ans] << endl;

    return 0;
}
