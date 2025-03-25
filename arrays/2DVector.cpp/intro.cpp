#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    vector<vector<int> > arr;

    vector<int> a{1,2,3};
    vector<int> b{2,4,6};
    vector<int> c{1,3,7};

    arr.push_back(a);
    arr.push_back(b);
    arr.push_back(c);

    for(int i=0; i<arr.size(); i++){
        for(int j=0; j<arr[0].size();j++){
            cout<<arr[i][j] <<" ";
        }
        cout<<endl;
    }

    cout << "Nested Vector "<< endl;

    int row = 3;
    int col = 5;
    
    vector<vector<int> > arr1(row, vector<int>(col,1));

    for(int i=0; i<arr1.size(); i++){
        for(int j=0; j<arr1[0].size();j++){
            cout<<arr1[i][j] <<" ";
        }
        cout<<endl;
    }

    return 0;
}