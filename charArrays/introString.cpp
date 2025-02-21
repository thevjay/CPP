#include <iostream>
#include <string>
using namespace std;

bool compareString(string a,string b){
    if(a.length() != b.length())
        return false;
    else{
        int j =0 ;
        for(int i=0;i<a.length();i++){
            if(a[i] != b[j]){
                return false;
            }
            j++;
        }
    }
    return true;
}

int main(){
    //string create
    // string str;

    // //input
    // //cin>>str;
    // getline(cin,str);
    // //print
    // cout<<str;

    // cout<<"length: "<<str.length()<<endl;
    // cout <<"isEmpty: "<< str.empty()<<endl;

    // str.push_back('A');
    // cout<<str<<endl;
    // str.pop_back();
    // cout<<str<<endl;
    // cout<<str.substr(1,3)<<endl;
    // cout<<str<<endl;

    // string a = "Love";
    // string b = "Lover";

    // if(a.compare(b) == 0){
    //     cout<<"a and b are exactly same strings"<<endl;
    // }
    // else{
    //     cout<<"a and b are not same"<<endl;
    // }


    // string x="bbbb";
    // string y="bbbbbbr";

    // cout<<compareString(x,y)<<endl;

    // string sentence = "Hello Jee kaise ho saare";
    // string target = "Hello";


    // cout<<sentence.find(target);

    // string str="This is my First Message";
    // string word ="babbar";

    // str.replace(0,4,word);
    // cout<<str<<endl;

    string str="ABCDEFGHT";
    str.erase(0,4);
    cout<<str;
    
    return 0;
}