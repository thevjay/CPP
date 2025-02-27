#include <iostream>
using namespace std;


void printCounting(int n){
    for(int i=1;i<=5;i++){
        cout<<i<<" ";
    }
    cout<<endl;
}
int main(){

    // Counting the Numbers
    int n;
    cout <<"Enter the value of n"<<endl;
    cin>>n;

    printCounting(n);

    return 0;
}