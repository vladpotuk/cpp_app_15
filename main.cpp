#include <iostream>
#include <Windows.h>

int main() {
    system("chcp 1251");
    system("cls");
    double number1, number2;

    
    std::cout << "Введіть перше число: ";
    std::cin >> number1;

    
    std::cout << "Введіть друге число: ";
    std::cin >> number2;

    if (number1 == number2) {
        std::cout << "Ці числа рівні." << std::endl;
    }
    else {
        std::cout << "Ці числа не рівні." << std::endl;
       
        
        if (number1 < number2) {
            std::cout << "Числа у порядку зростання: " << number1 << ", " << number2 << std::endl;
        }
        else {
            std::cout << "Числа у порядку зростання: " << number2 << ", " << number1 << std::endl;
        }
    }

    return 0;
}
