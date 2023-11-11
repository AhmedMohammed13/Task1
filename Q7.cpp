#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string str) {
    int n = str.length();
    for (int i = 0; i < n / 2; i++) {
        if (str[i] != str[n - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    string str = "race";
    if (isPalindrome(str)) {
        cout  << str << "\" is a palindrome." ;
    } else {
        cout  << str << "\" is not a palindrome." ;
    }
    return 0;
}
