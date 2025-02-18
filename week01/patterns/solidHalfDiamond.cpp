#include <iostream>
using namespace std;

int main(){

    //Solid half Diamond
    int n;
    cin>>n;

    for (int row = 0; row < 2*n-1; row++)
    {
        //int cond=0;
        // if(row<n){//growing phase of Diamond
        //     cond=row;
        // }
        // else{ //shrinking phase of Diamond
        //     cond = n-(row%n)-2;
        // }
        int cond = row < n ? cond = row : n - ( row % n ) - 2 ;

        for (int col = 0; col <= cond; col++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    

    // for (int row = 0; row < n; row++)
    // {
    //     for(int col=0;col<row+1;col++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    // for(int row=n-2; row >=0;row--){
    //     for(int col=0;col <= row; col++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    return 0;
}