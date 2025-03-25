#include <iostream>
using namespace std;


void transpose(int arr[][3], int r, int c){
    for(int i=0; i<r; i++){
        for(int j=i+1; j<c; j++){
            swap(arr[i][j],arr[j][i]);   
        }
    }
}

void printArray(int arr[][3],int rows, int cols){
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cout<<arr[i][j]<<" ";
        }
        cout << endl;
    }
}

int main() {

    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int rows = 3;
    int cols = 3;
    cout<<"Printin array " << endl;
    printArray(arr, rows, cols);
    cout<<"Transpose array " << endl;
    transpose(arr,rows,cols);
    cout<<"Printin array " << endl;
    printArray(arr,rows,cols);

    return 0;
}