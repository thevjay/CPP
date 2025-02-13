#include <iostream>
using namespace std;

int main(){
    //Hollow Rectangle

    int rowCount , colCount;
    cin>> rowCount;
    cin>> colCount;
    for (int row = 0; row < rowCount; row += 1)
    {   
        //First row or last row -> print 5 *
        if (row == 0 || row == rowCount-1)
        {
            for (int col = 0; col < colCount; col += 1)
            {
                cout << "* ";
            }
        }
        else{
            //remaining middle rows
            //first start
            cout << "* ";
            //spaces
            for (int i = 0; i < colCount-2; i++)
            {
                cout<< "  ";
            }
            //last star
            cout << "* ";
        }
        cout << endl;
    }
    
    return 0;
}