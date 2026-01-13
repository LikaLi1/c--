#include <iostream>
using namespace std;

const int MAX_LENGTH = 100;

bool isDigit(char ch) {
    return ch >= '0' && ch <= '9';
}

void getNumber(char numStr[]) {
    bool valid;
    do {
        cout << "Enter number: ";
        cin >> numStr;

        valid = true;
        int startIdx = 0;
        if (numStr[0] == '-') {
            startIdx = 1;
        }

        for (int i = startIdx; numStr[i] != '\0'; ++i) {
            if (!isDigit(numStr[i])) {
                valid = false;
                cout << "Wrong" << endl;
                break;
            }
        }
    } while (!valid);
}

void analyzeNumber(const char numStr[]) {
    int countDigits = 0;
    int sumDigits = 0;
    int zeroCount = 0;

    for (int i = 0; numStr[i] != '\0'; ++i) {
        if (isDigit(numStr[i])) {
            int digit = numStr[i] - '0';
            countDigits++;
            sumDigits += digit;
            if (digit == 0)
                zeroCount++;
        }
    }

    double average = (countDigits > 0) ? (double)sumDigits / countDigits : 0;

    cout << "\nResult:\n";
    cout << "Number of digits: " << countDigits << "\n";
    cout << "Sum: " << sumDigits << "\n";
    cout << "Arithmetic mean of digits: " << average << "\n";
    cout << "0: " << zeroCount << "\n";
}

int main() {
    int choice;
    char number[MAX_LENGTH];

    do {
        cout << "\nMenu:\n";
        cout << "1. Enter number\n";
        cout << "2. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            getNumber(number);
            analyzeNumber(number);
            break;
        case 2:
            cout << "Enter choice" << endl;
            break;
        default:
            cout << "Wrong" << endl;
        }
    } while (choice != 2);

    return 0;
}
