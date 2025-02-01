#include <iostream>
#include <vector>
using namespace std;


void moveLeft(vector<int>& arr, int n){
    int low = 0;
    int high = n-1;

    while (low<high)
    {
        if(arr[low]<0){
            low++;
        }
        else if (arr[high]>0)
        {
            high--;
        }
        else{
            swap(arr[low],arr[high]);
            low++;
            high--;
        }
        
    }
    
}
int main(){
    cout<<"Hello World"<<endl;

    vector<int> arr{1,2,-3,4,-5,6};
    int n = arr.size();

    moveLeft(arr,n);

    for ( auto value:arr)
    {
        cout<<value<<" ";
    }
    cout<<endl;
    
    return 0;
}