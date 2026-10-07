// C++ program to print butterfly pattern.

#include <iostream>
using namespace std;

int main(){
    int n = 4;
    //top half
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout<<"*";
        }
        for(int j=0; j<(2*(n-i)-2); j++){
            cout<<" ";
        }
        for(int j=0; j<i+1; j++){
                cout<<"*";
            }
        cout<<endl;
    }
    //bottom half
    for(int i=n-1; i>=0; i--){
        for(int j=0; j<i+1; j++){
            cout<<"*";
        }
        for(int j=0; j<(2*(n-i)-2); j++){
            cout<<" ";
        }
        for(int j=0; j<i+1; j++){
                cout<<"*";
            }
    cout<<endl;
    }
}