#include <iostream>
#include <vector>
using namespace std;

vector<int> twoPtrMethod(vector<int>& arr,int k,int x){
    int l=0;
    int h=arr.size()-1;

    while(h-l>=k){
        if(x-arr[l] > arr[h]-x){
            l++;
        }
        else{
            h--;
        }
    }
    
    vector<int> ans;
    for(int i=l;i<=h;i++){
        ans.push_back(arr[i]);
    }

    return ans;
}

int main(){

    vector<int> arr{12,16,22,30,35,39,42,45,48,50,53,55,56};
    int k = 4;
    int x = 35;

    vector<int> result = twoPtrMethod(arr,k,x);
    
    cout << "Closest " << k << " elements to " << x << " are: ";
    for(int num : result){
        cout << num << " ";
    }
    cout << endl;

    return 0;
}