#include <iostream>
using namespace std;


void print_b(int b){
    cout<<b;
}

void print_a(int a){
    cout<<a;
    int b=3;
    print_b(b);
}
 
int main(){

    int a = 5;
    print_a(a);
    return 0;
}