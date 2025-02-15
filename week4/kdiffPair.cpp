#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

void kdiffPair(int arr[],int n,int k){
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(abs(arr[i]-arr[j])==k){
                cout<<"(" << arr[i]<<","<<arr[j]<<")  ";
                count++;
            }
        }
    }
    cout<<"\nCount "<<count<<endl;
}

int findPairs(int arr[],int n,int k){
    sort(arr,arr+n);
    //int ans = 0;
    set<pair<int,int>> ans;
    int i=0,j=1;
    while (j<n)
    {
        int diff = arr[j]-arr[i];
        if(diff == k){
            cout<<"("<<arr[i]<<", "<<arr[j]<<")";
            ans.insert({arr[i],arr[j]});
            i++;
            j++;
        }
        else if(diff > k){
            i++;
        }else{
            j++;
        }
        if(i==j) j++;
    }
    return ans.size();
}

//Binary Search

int main(){
    int arr[]={1,3,1,5,4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;

    // kdiffPair(arr,n,k);

    int count = findPairs(arr,n,k);
    cout<<"\nCount"<<count<<endl;
    return 0;
}