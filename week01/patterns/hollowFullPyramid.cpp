#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int row=0;row<n;row++){
        //spaces
        for(int col=0;col<n-row-1;col++){
            cout<<" ";
        }

        //stars
        for(int col=0;col<2*row+1;col++){
            if(col==0 || col == 2*row || row==n-1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }

        //spaces
        for(int col=0;col<n-row-1;col++){
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}