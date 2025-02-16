#include <iostream>
using namespace std;

int main(){
    
    int n;
    cin >> n;

    for(int row = 0;row<n;row++){
        //spaces
        for(int sp=0;sp<n-row-1;sp++){
            cout<<" ";
        }
        //stars
        for(int st=0;st<row+1;st++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}