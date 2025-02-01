#include <iostream>
using namespace std;




void printArray(int arr[], int size){

    for(int i=0;i<size; i++){
        cout<< arr[i] <<" ";
    }
    cout << endl;

}

void inc(int arr[],int size){
    arr[0] = arr[0] +10;

    printArray(arr,size);
}

int main(){
    
    // Arrays && Functions:
    // int arr[]={5,6};
    // int size=2;
    // inc(arr,size);

    // printArray(arr,size);

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

    // int arr[500];

    // int n;
    // cout << "How many numbers you want to add in array" << endl;

    // cin >> n;

    // cout << "Enter the numbers " << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     /* code */
    //     cin >> arr[i];
    // }

    // //print doubles
    // cout << "Doubles: ";
    // for (int i = 0; i < n; i++)
    // {
    //     /* code */
    //     cout << 2 * arr[i] << " ";
    // }
     
    
    // int arr[5] = {1,2,3,4,5};

    // for (int i = 0; i < 5; i++)
    // {
    //     arr[i]= 1;
    // }

    // for(int i=0;i<5;i++){
    //     cout << arr[i] << " "; 
    // }
    


    // Count 0's and 1's in Array

    // int arr[] = {0,1,1,1,0,0,0,0,1,0,1,0,1,0,1};

    // int size = 15;

    // int numZero = 0;
    // int numOne = 0;

    // for(int i=0; i<size; i++){
    //     // if zero found, increment numZero
    //     if(arr[i] == 0){
    //         numZero++;
    //     }

    //     //if One found , increament numOne
    //     if(arr[i] == 1){
    //         numOne++;
    //     }
    // }

    // cout << "number of zeros " << numZero << endl;
    // cout << "number of ones " << numOne << endl;

    

    // Maximum Number in an Array:
    int arr[] = {2,4,6,1,3,7,9,12,56,43,21};
    int size = 11;
    // initialse the maxi variable with the
    // minimum possible integer value
    int maxi = INT_MIN;
    
    for (int i = 0; i < size; i++)
    {
        if(arr[i] > maxi){
            // found a number greater than maxi , update maxi
            maxi = arr[i];
        }
    }

    cout << "Maximum number is " << maxi << endl;
    


    // Reverse an Array
    int arr[8] = {10,20,30,40,50,60,70,80};
    int size = 8;

    int start = 0;
    int end = size-1;

    while (start<=end)
    {
        /* code */

        //step1:
        swap(arr[start],arr[end]);
        //step2;
        start++;
        //step3
        end--;
    }

    //printing arrey
    for (int i = 0; i < size; i++)
    {
        /* code */
        cout << arr[i] << "";
    }
    
    

    //HW
    // -- implement swap is_function
    // -- 3 _Way

    return 0;
}
