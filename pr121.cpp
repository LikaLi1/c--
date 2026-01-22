#include <iostream>
#include <cmath> 

using namespace std;

int main() {
    int num, originalNum, resultNum = 0, factor = 1;

    cout << "Enter number: ";
    cin >> num;

    originalNum = num;
    num = abs(num);

    while (num > 0) {
        int digit = num % 10;

        if (digit != 3 && digit != 6) {
            resultNum += digit * factor;
            factor *= 10;
        }

        num /= 10;
    }

    if (originalNum < 0) {
        resultNum = -resultNum;
    }

    if (resultNum == 0 && originalNum != 0) {
        cout << "Result: 0" << endl;
    }
    else {
        cout << "Result: " << resultNum << endl;
    }

    return 0;
}
