#include <iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    for(int row=0;row<n;row++){
        int cond = row<=n/2 ? 2*row :0;
        for(int col=0;col<cond;col++){
            cout<<col+1;
        }
        cout<<endl;
    }
    return 0;
}