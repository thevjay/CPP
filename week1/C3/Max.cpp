#include <iostream>
#include <vector>
using namespace std;

int getMax(int arr[][3],int rows, int cols){
    int maxi = INT_MIN;
    int mini = INT_MAX;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j]>maxi)
            {
                maxi = arr[i][j];

            }
            if (arr[i][j]<mini)
            {
                mini = arr[i][j];
            }
            
            
        }
        
    }
    return maxi,mini;
}

void transponse(int arr[][3], int r,int c){
    for (int i = 0; i < r; i++)
    {
        for(int j=0;j<c;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
}

void printArray(int arr[][3],int r,int c){
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
}
int main(){

    int arr[3][3]={{1,2,3},{1,3,7},{4,6,8}};
    int rows = 3;
    int cols = 3;
    cout<<getMax(arr,rows,cols);

    printArray(arr,rows,cols);
    transponse(arr,rows,cols);
    printArray(arr,rows,cols);

    return 0;
}