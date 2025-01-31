#include <iostream>
#include <vector>
using namespace std;

void Reverse(vector<int>& arr,int start,int end){
    while (start < end)
    {
        swap(arr[start],arr[end]);
        // int temp = arr[start];
        // arr[start] = arr[end];
        // arr[end] = temp;
        start++;
        end--;
    }
    
}

void RotateEleLeft( vector<int>& arr, int n,int d){
    d = d % n;
    // Reverse first n-k elements
        Reverse(arr,0,d-1);
    // Reverse last k elements
        Reverse(arr,d,n-1);
    // Reverse whole array
        Reverse(arr,0,n-1);
}

int main(){

    vector<int> arr{1,2,3,4,5,6,7};
    int n = arr.size();
    int d = 3;
    
    // vector<int> temp;
    // int j = 0;
    // for (int i = 0; i < d; i++)
    // {
    //     temp.push_back(arr[i]);
    // }
    // for (int i = d; i < arr.size(); i++)
    // {
    //     arr[i-d] = arr[i];
    // }

    // for (int i = arr.size() - d; i < arr.size(); i++)
    // {
    //     arr[i] = temp[j];
    //     j++;
    // }

    RotateEleLeft(arr,n,d);

    cout << "After Rotating the k elements to left ";
    for(auto value:arr){
        cout<<value<<" ";
    }
    cout<<endl;
    return 0;
}