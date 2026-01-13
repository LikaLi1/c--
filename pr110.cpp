#include <iostream>

bool isPalindrome(const char* str) {
    int len = 0;
    while (str[len] != '\0') {
        ++len;
    }

    int left = 0;
    int right = len - 1;
    while (left < right) {
        if (str[left] != str[right]) {
            return false;
        }
        ++left;
        --right;
    }
    return true;
}

int main() {
    const char* test1 = "radar";
    const char* test2 = "hello";

    std::cout << test1 << " - " << (isPalindrome(test1) ? "palindrome" : "not palindrome") << std::endl;
    std::cout << test2 << " - " << (isPalindrome(test2) ? "palindrome" : "not palindrome") << std::endl;

    return 0;
}
