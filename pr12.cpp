#include <iostream>

void task_1(){
    std::cout << "Enter first number: ";
    int a;
    std::cin >> a;
    std::cout << "Enter second number: ";
    int b;
    std::cin >> b;

    std::string result = (a > 0 && a / b) ? "Divide" : "NOT";
    std::cout << result << ": " << a / b << std::endl;
}

void task_2(){
    std::cout << "Enter first number: ";
    int a;
    std::cin >> a;

    std::string result = (a >= 100 && a < 1000) ? "This is a three-digit number" : 
                            (a % 2 == 0) ? "Even" : "Not even";
    std::cout << result << std::endl;
}

void task_3(){
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

void task_4(){
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
        if(a == 0){
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

void task_5(){
    
}

void task_6(){
    
}

void task_7(){
    
}

int main(){

    task_1();
    task_2();
    task_3();
    task1_3();
    task_4();
    task_5();
    task_6();
    task_7();

return 0;

}
