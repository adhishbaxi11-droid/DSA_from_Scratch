// Sum of Digits of a Number Function
#include <iostream>
using namespace std;

int sumofDigits(int x){
    int digSum=0;
    int lastDig;
    while(x>0){
        lastDig = x%10;
        x = x/10;
        digSum += lastDig;
    }
    return digSum;
}

int main(){
    int x;
    cout << "Enter a number: ";
    cin >> x;
    cout << "The sum of the digits of " << x << " is: " << sumofDigits(x) << endl;
    return 0;
}
