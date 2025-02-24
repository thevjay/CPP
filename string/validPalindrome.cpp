#include <iostream>
#include <string>
using namespace std;


bool checkPalindrome(string s,int i,int j){
    while(i<=j){
        if( s[i] != s[j]){
            return false;
        }else{
            i++;
            j--;
        }
    }
    return true;
}
bool check(string s){
    int i = 0;
    int j = s.length()-1;

    while(i<=j){
        if(s[i] != s[j]){
            return checkPalindrome(s,i+1,j) || checkPalindrome(s,i,j-1);
        }
        else{
            i++;
            j--;
        }
    }
    return true;
}

int main(){
    string s = "abca";

    bool result = check(s);
    cout<<"String: "<<result<<endl;

    return 0;
}
