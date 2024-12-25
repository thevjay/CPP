#include <iostream>
using namespace std;

int main(){
    
    //Creating an array;

    //declarection:
        // int arr[7];
        // cout << arr << endl;
        // cout << "Array created successfully"<< endl;

    //Initialization:
        // int arr[] = {2, 4, 6, 12};
        // int brr[5] = {2,4,6,7,10};

        // cout << "Array initialised successfully"<< endl;

    //Index && Access in Array

        // int arr[] = {1,3,5,7,9};

        //cout << arr[4] << endl;

    //printin all values
        // for(int i=0; i<5;i++){
        //     cout << arr[i] << " ";
        // }
    
    // int arr[10];

    // cout << "Enter th input values in array " << endl;
    // //taking input in array
    // for (int i = 0; i < 10; i++)
    // {
    //     // int n;
    //     // cin >> n;
    //     // arr[i] = n; 
    //     cin >> arr[i];
    // }
    
    // printing
    // cout << "printing the values in array" << endl;

    // for (int i = 0; i < 10; i++)
    // {
    //     /* code */
    //     cout << arr[i] << " ";
    // }

    int arr[500];

    int n;
    cout << "How many numbers you want to add in array" << endl;

    cin >> n;

    cout << "Enter the numbers " << endl;
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> arr[i];
    }

    //print doubles
    cout << "Doubles: ";
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout << 2 * arr[i] << " ";
    }
     
    
    

    return 0;
}
1