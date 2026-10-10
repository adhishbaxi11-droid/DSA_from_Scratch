// C++ program to perform linear search.
#include <iostream>
using namespace std;

void linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            cout << "Element found at index: " << i << endl;
            return;
        }
    }
    cout << "Element not found" << endl;
}

int main(){
    int arr[] = {5, 3, 8, 6, 2};
    int size = 5;
    int target;

    cout << "Enter the element to search: ";
    cin >> target;

    linearSearch(arr, size, target);

    return 0;
}