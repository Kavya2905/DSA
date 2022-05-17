// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void Num(int i){
    
    if(i >= 1 && i <= 100){
        cout << i <<endl;
        Num(i + 1);
    }
}

int main() {
    // Write C++ code here
    int i = 1;
    Num(i);

    return 0;
}
