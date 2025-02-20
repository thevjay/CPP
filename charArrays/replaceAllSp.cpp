#include <iostream>
#include <cstring>
using namespace std;

void replaceSpaces(char sentence[]){
    int i = 0;
    int n = strlen(sentence);  //o(n)

    for(int i=0;i<n;i++){  //o(n)  => o(2n)
        if(sentence[i] == ' '){
            sentence[i]='@';
        }
    }
}

int main(){
    // Replace all Spaces :

    char sentence[100];
    
    cin.getline(sentence,100);

    replaceSpaces(sentence);

    cout<<"Printing Sentence "<<endl<<sentence<<endl;

    return 0;
}