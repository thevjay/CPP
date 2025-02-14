#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;
    int div = 2;
    while (div<n)
    {
        if(n%div==0){
            cout<<"Not Prime";
            return 0;
        }
        else{
            div=div+1;
        }
    }

    cout << "yes";
    return 0;
}