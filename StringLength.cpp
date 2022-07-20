
#include <iostream>
using namespace std;

int getLength(char name[]){
    int count = 0;
    for(int i = 0; name[i] != '\0'; i++){
        count++;
    }
    return count;
}

int main() {
    // Write C++ code here
    char name[30];
    cout << "Enter name: ";
    cin >> name;
    cout << "You're "<< name << endl;
    cout << getLength(name) << endl;
    

    return 0;
}
