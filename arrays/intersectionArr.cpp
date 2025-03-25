#include <iostream>
#include <vector>
using namespace std;

vector<int> findArrayInter(vector<int> &arr,vector<int> &brr){
    vector<int> ans;

    int i = 0, j = 0;
    while(i < arr.size() && j < brr.size()){
        if(arr[i] < brr[j]){
            i++;
        }
        else if(arr[i] > brr[j]){
            j++;
        }
        else{
            ans.push_back(arr[i]);
            i++;
            j++;
        }
    }

    return ans;
}


int main(){

    //INTERSECTION OF 2 ARRAY

    vector<int> arr{1,2,3,4,6,8};
    vector<int> brr{3,3,4,9,10};

    // vector<int> ans;

    // Call function and store result
    vector<int> ans = findArrayInter(arr,brr);
    // // Outer loop on arr vector
    // for(int i=0;i<arr.size();i++){
    //     int element = arr[i];
    //     // for every element, run loop on brr
    //     for(int j=0; j<brr.size();j++){
    //         if(element == brr[j]){
    //             // mark
    //             brr[j] = -1;
    //             ans.push_back(element);
    //         }
    //     }
    // }

    // Print the intersection result
    for(auto val:ans){
        cout << val <<" ";
    }

    cout << endl;

    return 0;
}