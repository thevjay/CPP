#include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    for(int row=0;row<n;row++){
        for(int col=0;col<row+1;col++){
            cout<<row+1;
            //last star
            if(col != row){
                cout<<"*";
            }
        }
        cout<<endl;
    }
    for(int row=0;row<n;row++){
        for(int col=0;col<n-row;col++){
            cout<<n-row;
            //last star
            if(col != n-row-1){
                cout<<"*";
            }
        }
        cout<<endl;
    }
    
    return 0;
}