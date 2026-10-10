// C++ program to find the smallest element in an array.
#include <iostream>
using namespace std;

int main(){
    int arr[]= {3, 12, -15, 30, -20};
    int size = 5;

    //Finding the smallest element in the array using loop and if condition.
    int smallest = arr[0];
    for (int i=0; i<size; i++){
        if(arr[i] < smallest){
            smallest = arr[i];
        }
    }

    //Finding the smallest element in the array using min() function.
    int smallest2 = arr[0];
    for(int i=0; i<size; i++){
        smallest2 = min(arr[i], smallest2);
    }

    cout << "Smallest element: " << smallest << endl;
    cout << "Smallest element (using min function): " << smallest2 << endl;

    return 0;
}