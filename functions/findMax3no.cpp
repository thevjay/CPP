#include <iostream>
using namespace std;

int findMax(int a,int b,int c){
    if(a > b && a > c){
        return a;
    }
    else if(b > a && b > c){
        return b;
    }
    else{
        return c;
    }
}

int main(){

    // Find max of 3 numbers
    int a,b,c;
    cin>>a>>b>>c;

    int maxNum = findMax(a,b,c);

    cout<<"Find Max of 3 numbers: "<<maxNum<<endl;

    return 0;
}