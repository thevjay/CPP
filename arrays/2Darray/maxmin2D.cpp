#include <iostream>
using namespace std;

int getMax(int arr[][3], int rows, int cols){
    int maxi = INT_MIN;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            if(arr[i][j] > maxi){
                maxi = arr[i][j];
            }
        }
    }

    return maxi;
}

int getMin(int arr[][3],int rows, int cols){
    int mini = INT_MAX;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            if(arr[i][j] < mini){
                mini = arr[i][j];
            }
        }
    }
    return mini;
}

int main(){

    int arr[3][3] ={{1,2,3},{4,5,6},{7,8,9}};
    int rows = 3;
    int cols = 3;

    cout << " Max Number: " << getMax(arr, rows, cols) << endl;
    cout << " Mini Number: " << getMin(arr, rows, cols);

    return 0;
}