#include <iostream>
using namespace std;

int add(int a,int b){
    int result = a+b;
    return result;
}

int main(){
    
    // int a = 5;
    // cout << "Address of a is: "<< &a <<endl;

    int a;
    cout<<"Enter the value of a "<<endl;

    cin>>a;

    int b;
    cout<< "Enter the value of b "<<endl;
    cin>>b;

    int sum = add(a,b);

    cout<< "Addition result is: "<<sum<<endl;

    return 0;
}