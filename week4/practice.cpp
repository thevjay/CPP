#include <iostream>
#include <vector>
using namespace std;

int main(){


    vector<int> arr{5,9,12,6,4,1};

    vector<int> ans;

    for (int i = 0; i < arr.size(); i++)
    {
        ans.push_back(abs(arr[i]-arr[i+1]));
    }
    
    for(auto val:ans){
        cout<<val<<" ";
    }
    cout<<endl;
    
    return 0;
}