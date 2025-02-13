#include <iostream>
using namespace std;

int main(){
    //Outer loop - row observe
    for (int row = 0; row < 3; row=row+1)
    {   
        //Inner loop - col observe
        for (int col = 0; col < 5; col=col+1)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}