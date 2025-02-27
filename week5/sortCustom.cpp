#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;


bool cmp(char first,char second){
    return first > second;
}

bool compare(int a, int b){
    cout << "First number is: "<< a << endl;
    cout << "Second number is: "<< b << endl<<endl;

    return a > b;
}
int main(){    
    string s = "babbar"; 
    sort(s.begin(),s.end(),cmp);

    vector<int> v{5,3,1,2,4};
    sort(v.begin(),v.end(),compare);
    for(auto i:v){
        cout<<i<<" ";
    }
    cout << endl;

    cout << s << endl;
    return 0;
}