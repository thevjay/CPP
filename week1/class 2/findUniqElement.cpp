// Find Unique Element 
// every element occurs twice except one

// i/p -> arr -> {1,2,4,3,2,1,6,5,5,6,4}
// usin XOR op 
//     same -0
//     diff -1

#include <iostream>
#include <vector>
using namespace std;


int findUnique(vector<int> arr){
    int ans = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        ans = ans ^ arr[i];
    }

    return ans;
    
}

int main(){
     
    int n;
    cout << "Enter the size of array " << endl;
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements " << endl;
    //taking input
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }

    int uniqueElement = findUnique(arr);

    cout << "Unique Element is " << uniqueElement << endl;

    return 0;
    
}

42