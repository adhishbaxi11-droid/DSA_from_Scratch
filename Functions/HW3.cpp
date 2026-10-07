//Function to print Fibonacci series up to n terms.
#include <iostream>
using namespace std;

int fibonacci(int n){
    int num1 = 0, num2=1, next;
    
    for(int i=0; i<=n; i++){
        if(i<=1){
            next = i;
        }
        else{
            next = num1 + num2;
            num1 = num2;
            num2 = next;
        }
        cout << next << " ";
    }
    return 0;
}

int main(){
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;
    fibonacci(n);
    return 0;
}