#include <iostream>
using namespace std;


void printArray (int arr[],int size){
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void inc(int arr[],int size){
    arr[0] = arr[0] + 10;

    printArray(arr,size);
}

bool find(int arr[], int size, int key){
    // linear search

    for(int i=0;i<size;i++){
        if(arr[i] == key){
            return true;
        }
    }

    // not present
    return false;
}

int main(){

    // int arr[] = {5,6};
    // int size = 2;
    // inc(arr,size);

    // printArray(arr,size);

    // Linear Search
    // int arr[5]={1,3,5,7,8};
    // int size=5;

    // cout<<"Enter the key to find " << endl;
    // int key;
    // cin >> key;

    //  if(find(arr,size,key)){
    //     cout << "Found "<<endl;
    //  }
    //  else{
    //     cout<< "not Found "<<endl;
    //  }

    int arr[] = {1,2,3,4,5,6,7,8};
    int size = 8;

    int key = 5;

    bool flag = 0;
    // 0 -> not found
    // 1 -> found

    // Linear search
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            // found
            flag = 1;
            break;
        }
    }

    if(flag){
        cout << "Present" << endl;
    }else{
        cout << "Not Found" << endl;
    }
   
    return 0;
}
