#include <iostream>
#include <Windows.h>

int main() {
    system("chcp 1251");
    system("cls");
    double number1, number2;

    
    std::cout << "������ ����� �����: ";
    std::cin >> number1;

    
    std::cout << "������ ����� �����: ";
    std::cin >> number2;

    if (number1 == number2) {
        std::cout << "ֳ ����� ���." << std::endl;
    }
    else {
        std::cout << "ֳ ����� �� ���." << std::endl;
       
        
        if (number1 < number2) {
            std::cout << "����� � ������� ���������: " << number1 << ", " << number2 << std::endl;
        }
        else {
            std::cout << "����� � ������� ���������: " << number2 << ", " << number1 << std::endl;
        }
    }

    return 0;
}
