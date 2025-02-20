#include <iostream>
#include <string.h>
using namespace std;


void reverseCharArray(char name[]){
    int i=0;
    int n=strlen(name);
    int j = n-1;

    while(i<j){
        swap(name[i],name[j]);
        i++;
        j--;
    }


}

int main(){

    char name[100];

    cout<<"Enter your name: "<<endl;

    cin.getline(name,100);

    cout<<"Initially: " << name << endl;
    reverseCharArray(name);
    cout<<"After reversal process: "<<name << endl;

    return 0;
}