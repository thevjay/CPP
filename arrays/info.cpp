#include <iostream>
using namespace std;

int main(){

    // creating an array
    // int arr[7];

    // cout << "Array created successfully"<<endl;

    // cout << arr << endl;

    // cout << &arr << endl;

    // int count[23];  // 4*23 = 92 bytes
    // char arr[106];
    // bool arr[23];
    
    
    // Initialisation
    // int arr[]={2,4,9,12};
    // int brr[5]={2,2,5,8,1};
    // int crr[10]={2,3,4,5,6};
    // int drr[4]={2,3,4,5};

    // cout << "Array initialised successfully"<<endl;

    // char arr[10] = {'a','b','c'};
     
    // int n;
    // cin>>n;

    // int arr[] = {1,3,5,7,9};

    // printing all values
    // for(int i=0; i<5 ; i++){
    //     cout << arr[i] << " ";
    // }

//    int arr[10];

//    cout << "Enter the input values in array " << endl;

//    for(int i=0; i<10; i++){
        // int n;
        // cin >> n;
        // arr[i] = n;
//        cin >> arr[i];
//    }

    // printing 
    // cout << "Printing the values in array " << endl;

    // for(int i=0;i<10;i++){
    //     cout << arr[i] << " ";
    // }


    int arr[500];

    int n;
    cout << "How many numbers you want to add in array"<< endl;

    cin>>n;

    cout << "Enter the numbers "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    // print doubles
    cout << "Doubles: ";
    for(int i=0;i<n;i++){
        cout<<2*arr[i]<<"";
    }

    return 0;
}
