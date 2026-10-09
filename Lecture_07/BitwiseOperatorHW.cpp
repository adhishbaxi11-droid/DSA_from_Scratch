// C++ program to demonstrate and verify bitwise operators.
#include <iostream>
using namespace std;

int main(){
    //Perform bitwise and on these. And the answer should be 2.(calculated on paper)
    int a=6, b=10;
    int bw_and = a & b;
    cout << "1. " << bw_and << endl;
    
    //Perform bitwise or on these. And the answer should be 14.(calculated on paper)
    int bw_or = a | b;
    cout << "2. " << bw_or << endl;

    //Perform bitwise xor on these. And the answer should be 12.(calculated on paper)
    int bw_xor = a ^ b;
    cout << "3. " << bw_xor << endl;

    //Perform bitwise left shift on 10 by 2. And the answer should be 40.(calculated on paper)
    int bw_left_shift = 10 << 2;
    cout << "4. " << bw_left_shift << endl;

    //Perform bitwise right shift on 10 by 1. And the answer should be 5.(calculated on paper)
    int bw_right_shift = 10 >> 1;
    cout << "5. " << bw_right_shift << endl;

    return 0;
}