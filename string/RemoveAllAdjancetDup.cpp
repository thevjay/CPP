#include <iostream>
#include <string>
using namespace std;

string duplicate(string s){
    string ans="";
    int i = 0;

    while(i<s.length()){
        if(ans.length() > 0  && ans[ans.length()-1] == s[i]){
            ans.pop_back();
        }
        else{
            ans.push_back(s[i]);
        }
        i++;
    }
    return ans;
}

int main(){
    string s = "abbaca";

    string result = duplicate(s); // Store the result

    cout << "String: " << result << endl; // Print the result correctly

    return 0;
}

//