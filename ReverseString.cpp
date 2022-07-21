// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void reverse(char name[], int n){
    int s = 0, e = n-1;
    while(s < e){
        swap(name[s++], name[e--]);
    }
}

int getLength(char name[]){
    int count = 0;
    for(int i = 0; name[i] != '\0'; i++){
        count++;
    }
    return count;
}

int main() {
    // Write C++ code here
    char name[20];
    cout << "Enter name: ";
    cin >> name;
    int len = getLength(name);
    cout << "You're " << name << endl;
    reverse(name, len);
    cout << "Reverse:" << name; 

    return 0;
}
