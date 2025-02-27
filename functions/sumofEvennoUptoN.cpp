#include <iostream>
using namespace std;

int getSum(int n){
    int sum = 0;
    for(int i=1;i<=n;i++){
        sum = sum + i;
    }
    return sum;
}

int getEvenSum(int n){
    int sum = 0;
    for(int i=2; i<=n; i=i+2){
        sum = sum + i;
    }
    return sum;
}

int main(){

    // Sum of Even no. upto N
    int n;
    cout << "Enter the value of n "<<endl;
    cin>>n;

    int ans = getSum(n);
    cout << "Sum Upto " << n << "is "<<ans<<endl;

    int ansEven = getEvenSum(n);
    cout << "Sum Upto " << n << "is "<<ansEven<<endl;

    return 0;
}