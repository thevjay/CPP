#include <iostream>
#include <vector>
using namespace std;

void sort(vector<int>& arr){
    int l = 0;
    int m = 0;
    int h = arr.size()-1;

    while (m<h)
    {
        if(arr[m] == 0){
            l++;
            m++;
        }
        else if (arr[m] == 1)
        {
            m++;
        }
        else{
            swap(arr[m],arr[h]);
            h--;
        }
        
    }
    
}

int main(){

    vector<int> arr{2,0,2,1,1,0};

    sort(arr);

    for (auto values:arr)
    {
        cout<<values<<" ";
    }
    cout<<endl;

    return 0;

}