#include <iostream>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Ru");
    int resurces[3] = {20, 40,300};
    std::cout << "1: " << resurces[0] << std::endl;
    std::cout << "2: " << resurces[1] << std::endl;
    std::cout << "3: " << resurces[2] << std::endl;
    std::cout << "Выведите новое значение для 1: " << resurces[0] << std::endl;
    std::cin >> resurces[0];
    std::cout << "Выведите новое значение для 2: " << resurces[1] << std::endl;
    std::cin >> resurces[1];
    std::cout << "Выведите новое значение для 3: " << resurces[2] << std::endl;
    std::cin >> resurces[2];

    if(resurces[1] == 10 || resurces[1] < 10 +1) {
    std::cout << "lets go" << std::endl;
    }
    std::cout << "gold: " << resurces[1] << std::endl;
    std::cout << "Money profiles" << std::endl;
    int profile;
    std::cin >> profile;
    resurces[1] = resurces[1] - profile;
    std::cout << "Gold" << resurces[1] << std::endl;

    return 0;
}