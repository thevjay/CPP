// Union of 2 arrays
// no duplicate
// a[]->{2,4,6,8}
// b[]->{1,3,7}

// ans[]-{1,2,3,4,6}

// UNIon
#include <iostream>
#include <vector>
using namespace std;

int main(){

    int arr[] = {1,3,5,7,9};
    int sizea = 5;
    int brr[] = {2,4,3,6,9,8};
    int sizeb = 6;

    vector<int> ans;

    //push all element of vector arr
    for (int i = 0; i < sizea; i++)
    {
        ans.push_back(arr[i]);
    }

    //push all element of vector brr
    for (int i = 0; i < sizeb; i++)
    {
        bool isDuplicate= false;
        for (int j = 0; j < sizea; j++)
        {
            if (brr[i] == arr[j])
            {   
                isDuplicate = true;
                brr[i] = -1;
                break;
            }
            
        }
        if(brr[i] != -1) ans.push_back(brr[i]);
    }
    
    //print ans
    cout << "Printing ans array" << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    
    
    return 0;
}