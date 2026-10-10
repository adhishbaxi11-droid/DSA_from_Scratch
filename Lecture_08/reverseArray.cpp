// C++ program to reverse an array.
#include <iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4};
    int size = 4;
    cout << "Array before reversing: " ;

    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    int start = 0;
    int end = size - 1;

    while (start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    cout << "Array after reversing: " ;
    
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    return 0;
}