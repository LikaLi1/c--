#include <iostream>

void task_1() {
    std::cout << "Enter first number: ";
    int a;
    std::cin >> a;
    std::cout << "Enter second number: ";
    int b;
    std::cin >> b;

    std::string result = (a > 0 && a / b) ? "Divide" : "NOT";
    std::cout << result << ": " << a / b << std::endl;
}

void task_2() {
    std::cout << "Enter first number: ";
    int a;
    std::cin >> a;

    std::string result = (a >= 100 && a < 1000) ? "This is a three-digit number" :
        (a % 2 == 0) ? "Even" : "Not even";
    std::cout << result << std::endl;
}

void task_3() {
    std::cout << "Enter the month number to find out how many days it has: ";
    int num;
    std::cin >> num;

    switch (num)
    {
    case 1:
        std::cout << "This month has 31 days" << std::endl;
        break;

    case 2:
        std::cout << "This month has 28 days" << std::endl;
        break;

    case 3:
        std::cout << "This month has 31 days" << std::endl;
        break;

    case 4:
        std::cout << "This month has 30 days" << std::endl;
        break;

    case 5:
        std::cout << "This month has 31 days" << std::endl;
        break;

    case 6:
        std::cout << "This month has 30 days" << std::endl;
        break;

    case 7:
        std::cout << "This month has 31 days" << std::endl;
        break;

    case 8:
        std::cout << "This month has 31 days" << std::endl;
        break;

    case 9:
        std::cout << "This month has 30 days" << std::endl;
        break;

    case 10:
        std::cout << "This month has 31 days" << std::endl;
        break;

    case 11:
        std::cout << "This month has 30 days" << std::endl;
        break;

    case 12:
        std::cout << "This month has 31 days" << std::endl;
        break;

    default:
        std::cout << "Erorr" << std::endl;
        break;
    }

    std::string mount = (num % 2 == 0) ? "This month has 30 days" : "This month has 31 days";
    std::cout << mount << std::endl;
}

void task_4() {
    std::cout << "Enter first number: ";
    int a;
    std::cin >> a;
    std::cout << "Enter second number: ";
    int b;
    std::cin >> b;

    std::cout << "Enter symbol: ";
    char sym;
    std::cin >> sym;

    switch (sym)
    {
    case '+':
        std::cout << "a + b = " << a + b << std::endl;
        break;

    case '-':
        std::cout << "a - b = " << a - b << std::endl;
        break;

    case '/':
        std::cout << "a / b = " << a / b << std::endl;
        if (a == 0) {
            std::cout << "Error" << std::endl;
        }
        break;

    case '*':
        std::cout << "a * b = " << a * b << std::endl;
        break;

    default:
        std::cout << "Error" << std::endl;
        break;
    }
}

void task_5() {
    std::cout << "Enter year: ";
    int a;
    std::cin >> a;

    std::string year = (a % 4 == 0) ? "This year leap year" : "The year is not a leap year";
    std::cout << year << std::endl;
}

void task_6() {
    int doorInput;
    std::cout << "Is the door open? (1 - yes, 0 - no): ";
    std::cin >> doorInput;

    bool isDoorOpen = (doorInput == 1);

    int time;
    std::cout << "Enter time (0-23): ";
    std::cin >> time;

    if (!isDoorOpen) {
        std::cout << "Alarm disabled" << std::endl;
    }
    else {
        if (time >= 22 || time < 6) {
            std::cout << "Alarm ON" << std::endl;
        }
        else {
            std::cout << "Welcome!" << std::endl;
        }
    }
}

void task_7() {
    srand(time(0));

    std::string options[] = { "Stone", "Scissors", "Paper" };

    int computerChoice = rand() % 3;

    int userChoice;

    std::cout << "Select:\n";
    std::cout << "0 - Stone\n";
    std::cout << "1 - Scissors\n";
    std::cout << "2 - Paper\n";
    std::cout << "Your choice (number): ";
    std::cin >> userChoice;

    std::cout << "The computer has chosen: " << options[computerChoice] << std::endl;
    std::cout << "You have chosen: " << options[userChoice] << std::endl;

    if (userChoice == computerChoice) {
        std::cout << "Draw!" << std::endl;
    }
    else if (
        (userChoice == 0 && computerChoice == 1) ||
        (userChoice == 1 && computerChoice == 2) ||
        (userChoice == 2 && computerChoice == 0)
        ) {
        std::cout << "You have won!" << std::endl;
    }
    else {
        std::cout << "Losing!" << std::endl;
    }
}

int main() {

    task_1();
    task_2();
    task_3();
    task_4();
    task_5();
    task_6();
    task_7();

    return 0;
}
