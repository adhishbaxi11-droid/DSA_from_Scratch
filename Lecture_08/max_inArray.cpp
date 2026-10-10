// C++ program to find the largest element in an array.
#include <iostream>
using namespace std;

int main(){
    int arr[] = {-10, -2, 13, 24, 15};
    int size = 5;

    //Finding the largest element in the array using loop and if condition.
    int largest = arr[0];
    for(int i =0; i < size; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }

    //Finding the largest element in the array using max() function.
    int largest2 = arr[0];
    for(int i = 0; i < size; i++){
        largest2 = max(arr[i], largest2);
    }

    cout << "Largest element: " << largest << endl;
    cout << "Largest element using max() function: " << largest2 << endl;
}