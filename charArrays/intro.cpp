#include <iostream>
#include <cstring>
using namespace std;


int getLength(char name[]){
    int length = 0;
    int i = 0;
    while(name[i] != '\0'){
        length++;
        i++;
    }
    return length;
} 

int main(){

    //Initialization of char array

    // char name[100];
    // cout<<"Enter Your Name "<< endl;

    // cin>>name;

    // cout<<"Your Name: "<< name <<" hai "<<endl;


    // char ch[100];

    // ch[0]='a';
    // ch[1]='b';
    // cin>>ch[2];

    // cout << ch[0] << ch[1] << ch[2] << endl;

    // char name[100];

    // cin>>name;

    // for(int i=0;i<6;i++){
    //     cout<<"index: "<<i<<" value: " << name[i]<<endl;
    // }
    // cout<<endl;

    // int value = (int)name[6];
    // cout<<"value is : "<<value<<endl;


    // char arr[100];

    //getline(cin,arr);

    // cin.getline(arr,50);

    // cout<<arr;


    //1 Length of string
            //
    
        char name[100];
        cin>>name;

        cout << "length is: " << getLength(name)<<endl;
        cout << "Length is -> "<< strlen(name)<<endl;
    
    return 0;
}