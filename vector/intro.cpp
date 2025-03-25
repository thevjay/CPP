#include <iostream>
#include <vector>
using namespace std;


int main(){

    // Create vector
    vector<int> arr;

    int ans = sizeof(arr)/sizeof(int);
    cout << ans << endl;

    cout << arr.size() <<endl;
    cout << arr.capacity() <<endl;

    //insert
    arr.push_back(5);
    arr.push_back(6);

    //print
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    //remove / delete
    arr.pop_back();

    //Print
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    vector<int> brr(10,1);
    cout<<"Size of b "<<brr.size()<<endl;
    cout<<"Capacity of b "<<brr.capacity()<<endl;

    for(int i=0;i<brr.size();i++){
        cout<<brr[i]<<" ";
    }
    cout<<endl;

    vector<int> crr{10,20,30,40,50};

    for(int i=0;i<crr.size();i++){
        cout<<crr[i]<<" ";
    }
    cout<<endl;

    cout << "Vector crr is Empty or Not "<<crr.empty()<<endl;
    
    vector<int> drr;
    cout << "Vector crr is Empty or Not "<<drr.empty()<<endl;
  

    return 0;
}