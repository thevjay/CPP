#include <iostream>
#include <vector>
using namespace std;

int main(){
    // Creation of 2D ARRAY

    //Declare 2D array
    // int arr[3][3];

    // Initialisation
    // int brr[3][3]={{1,2,3},{4,5,6},{2,4,8}};

    // Input -1D array in cin>>arr[i]
    // 2D array cin>>arr[i][j]
    // o/p cout<< arr[i][j]

    // cout << brr[1][3]<<endl;

    //Row-wise print
    //Outer loop
    // for (int i = 0; i < 3; i++)
    // {
    //     //for every row, we need to print value in each column
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout<<brr[i][j]<<" ";
    //     }
    //     cout<<endl;
        
    // }

    // cout<<"Printing Column Wise "<<endl;
    // // column print
    // for (int i = 0; i < 3; i++)
    // {
    //     //for every row, we need to print value in each column
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout<<brr[j][i]<<" ";
    //     }
    //     cout<<endl;
        
    // }

    int arr[4][3];
    int rows = 4;
    int cols = 3;

    //input

    //row-wise input
    for (int i = 0; i < rows; i++)
    {
        /* code */
        for (int j = 0; i < cols; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout<<"Printing Row-wise"<<endl;
    
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j];
        }
    }
    
    
         
    return 0;
}