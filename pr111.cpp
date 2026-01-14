#include <iostream>
using namespace std;

int main()
{
    cout << "Enter symbol or letter: ";
    char sym;
    cin >> sym;

    if (sym >= 'A' && sym <= 'Z') {
        cout << "Capital letter" << endl;
    }
    else if (sym >= 'a' && sym <= 'z') {
        cout << "Small letter" << endl;
    }
    else if (sym >= '0' && sym <= '9') {
        cout << "Number" << endl;
    }
    else if (sym >= '!' && sym <= '/') {
        cout << "Symbol" << endl;
    }
    else {
        cout << "Error" << endl;
    }

    return 0;
}
