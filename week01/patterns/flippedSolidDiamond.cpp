#include <iostream>
using namespace std;

int main(){
    //Flipped Solid Diamond

    int n;
    cin>>n;

    //Upper Half
    for (int row = 0; row < n; row++)
    {
        //half pyramid
        for(int col=0;col<n-row;col++){
            cout<<"*";
        }

        //space wala full pyramid
        for(int col=0;col<2*row+1;col++){
            cout << " ";
        }

        //half pyramid
        for(int col=0;col<n-row;col++){
            cout << "*";
        }
        cout<<endl;
    }

    // Lower Half
    for(int row=0;row<n;row++){
        //Half Pyramid
        for(int col=0;col<row+1;col++){
            cout <<"*";
        }

        //space wala full pyramid
        for(int col=0;col<2*n-2*row-1;col++){
            cout << " ";
        }

        //half pyramid
        for(int col=0;col<row+1; col++){
            cout << "*";
        }
        cout << endl;
    }
    
    return 0;
}