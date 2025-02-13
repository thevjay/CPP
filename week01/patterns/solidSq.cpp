#include <iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter the Number: "; 
    cin >> n;

    //Outer loop - row observe
    for (int row = 0; row < n; row +=1)
    {
        //Inner loop - col observe
        for (int col = 0; col < n; col += 1)
        {
            cout << "* ";
        }
        cout << endl;
    }
    
    return 0;
}