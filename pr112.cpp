#include <iostream>
using namespace std;

int main() {
    int User, Operator;
    int CallTime;

    float minOutKS = 2.0;
    float minOutV = 4.0;
    float minOutLC = 2.5;

    cout << "Enter call time: ";
    cin >> CallTime;
    if (CallTime <= 0) {
        cout << "No" << endl;
        return 1;
    }

    cout << "Select operator:\n";
    cout << "1. MTC\n2. T2\n3. Beeline\n: ";
    cin >> User;

    cout << "Select your operator:\n";
    cout << "1. MTC\n2. T2\n3. Beeline\n: ";
    cin >> Operator;

    if (User < 1 || User > 3 || Operator < 1 || Operator > 3) {
        cout << "Error" << endl;
        return 1;
    }

    if (User == Operator) {
        cout << "Call cost: 0" << endl;
    }
    else {
        float costPerMinute;
        if (User == 1)
            costPerMinute = minOutKS;
        else if (User == 2)
            costPerMinute = minOutV;
        else
            costPerMinute = minOutLC;

        float totalCost = costPerMinute * CallTime;

        cout << "Call cost: " << totalCost << endl;
    }

    return 0;
}
