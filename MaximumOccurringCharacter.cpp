// Maximum Occurring Character

#include <iostream>
using namespace std;

char maxOcc(string s){
    
    int arr[26] = {0};
    
    for(int i =0; i < s.length(); i++){
        char ch = s[i];
        int num ;
        if(ch >= 'a' && ch <= 'z'){
            num = ch - 'a';
        }
        else{
            num = ch - 'A';
        }
        arr[num]++;
    }
    int maxi = -1, ans;
    for(int i = 0; i < 26; i++){
        if(arr[i] > maxi){
            maxi = arr[i];
            ans = i;
        }
    }
    char finalAns = ans + 'a';
    return finalAns;
}

int main() {
    // Write C++ code here
    cout << "Word: ";
    string word;
    cin >> word;
    cout << "Max occ char is: "<< maxOcc(word);

    return 0;
}
