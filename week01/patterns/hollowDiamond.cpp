#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    //hollow diamond
    for(int row=0;row<n;row++){
        //space
        for(int col=0;col<n-row-1;col++){
            cout << " ";
        }
        //stars
        for(int col=0;col<2*row+1;col++){
            //if first character or if last charater
            if(col == 0 || col == 2*row){
                //first Character or last character
                cout << "*";
            }else{
                cout << " ";
            }
        }
        cout<<endl;
    }

    for(int row=0 ;row<n;row++){
        //spaces
        for(int col=0;col<row;col++){
            cout << " ";
        }

        //star;
        for(int col=0;col<2*n-2*row-1;col++){
            //if first or last character
            if(col==0 || col == 2*n-2*row-2){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
