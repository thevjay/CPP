#include <iostream>
using namespace std;



int binarySearch(int arr[], int size, int target){

}

int main(){

    int arr[] = { 2,4,6,8,10,12,16};
    int size = 7;
    int target = 2;

    int indexOftarget = binarySearch(arr,size,target);

    if(indexOftarget == -1){
        cout << "target not found" << endl;
    }
    else{
        cout << "target found at" << indexOftarget << endl;
    }
    return 0;
}

23