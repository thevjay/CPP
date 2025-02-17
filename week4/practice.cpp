#include <iostream>
#include <vector>
using namespace std;

int main(){


    vector<int> arr{5,9,12,6,4,1};

    vector<int> ans;

    int i=0;
    int j=1;
    while (j < arr.size())
    {
        int result = abs(arr[i]-arr[j]);
        ans.push_back(result);
        i++;
        j++;
    }

    for(auto val:ans){
        cout<<val<<" ";
    }
    cout<<endl;
    
    return 0;
}