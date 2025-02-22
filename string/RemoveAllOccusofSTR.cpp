#include <iostream>
#include <string>
using namespace std;

string removeOccurrence(string s,string part){
    int pos = s.find(part);
    while(pos != string::npos){
        s.erase(pos,part.length());
        pos = s.find(part);
    }
    return s;;
}

int main(){
    string s = "daabcbaabcbc";
    string part = "abc";

    string result = removeOccurrence(s,part); // Store the result

    cout << "String: " << result << endl; // Print the result correctly

    return 0;
}

//HM -> Find() method implement