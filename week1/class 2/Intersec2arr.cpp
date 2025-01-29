#include <iostream>
#include <vector>
using namespace std;

int main(){

    //Intersection of 2 array
    //common elements

    //INTERSECTION

    vector<int> arr{1,2,3,4,6,8};
    vector<int> brr{3,49,10};

    vector<int> ans;

    //outer loop on arr vector
    for (int i = 0; i < arr.size(); i++)
    {
        int element = arr[i];
        //for every element, run loop on brr
        for (int j = 0; j < brr.size(); j++)
        {
            if(element == brr[j]){
                //mark
                // a[] -> {1,2,3,3,4,6,8};
                // b[] -> {3,3,4,5,10};
                // take 3 in a[]=3
                //     a[]=3 instand of 3 give -1 or INT_MIN
                // b[]-> {-1,-1,4,5,10}
                // it won't count the 
                brr[j] = -1;
                ans.push_back(element);
            }
        }
    }

    //print ans
    for (auto value: ans)
    {
        cout<< value << " ";
    }
    cout<<endl;

    return 0;
}