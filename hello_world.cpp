#include <iostream>

//приветсвие пользователя;
int main() {
    std::string name;
    std::cout << "Введите имя: ";
    std::cin >> name;
    std::cout << "Hello world from " << name << std::endl;
    return 0;
}
