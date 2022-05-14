// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include <array>

int main() {
    // Write C++ code here
    array <int, 4> a = {1, 2, 3, 4};
    for(int i = 0; i < a.size(); i++){
        cout<<a[i]<<endl; //elements of array
    }
    cout << a.at(2)<<endl; //element at index 2
    cout <<a.front()<<endl; //element at beginning
    cout <<a.back()<<endl; //element at last
    cout<<a.empty() << endl; // empty array or not (bool - 0 or 1)

    return 0;
}
