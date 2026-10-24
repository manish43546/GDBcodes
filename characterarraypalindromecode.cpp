
#include <iostream>
#include <cstring>
using namespace std;

bool checkPalindrome(char arr[], int n) {
    int len = strlen(arr);

    int i = 0;
    int j = len - 1;

    while (i <= j) {
        if (arr[i] == arr[j]) {
            i++;
            j--;
        }
        else {
            return false;
        }
    }

    return true;
}

int main() {
    char arr[1000];

    cout << "Enter a string: ";
    cin >> arr;

    if (checkPalindrome(arr, 1000)) {
        cout << "Palindrome hai" << endl;
    }
    else {
        cout << "Palindrome nahi hai" << endl;
    }

    return 0;
}
