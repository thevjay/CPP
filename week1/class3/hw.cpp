#include <iostream>
#include <vector>
using namespace std;


void moveAllNegToLeft(vector<int>& arr,int n){
    // Dutch National flag Algo.
    int low = 0;
    int high = n-1;

    while (low<high)
    {
        if(arr[low] < 0){
            low++;
        }
        else if(arr[high]>0){
            high++;
        }
        else{
            swap(arr[low],arr[high]);
        }
    }
     
}

int main(){

    vector<int> arr{1,2,-3,4,-5,6};
    int n = arr.size();

    moveAllNegToLeft(arr,n);

    for (auto value:arr)
    {
        cout<<value<<" arr";
    }
    cout<<endl;
    
    return 0;
}