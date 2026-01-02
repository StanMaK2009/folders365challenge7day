#include <iostream>
#include <locale.h>
#include <ctime>   
#include <cstdlib>

void showhero(int stats[]) {
    std::cout << "\n=== Герой: Здоровье [" << stats[0] << "] | Золото [" << stats[1] << "] ===" << std::endl;
} 
 
int main() {
    setlocale(LC_ALL, "Ru");
    srand(time(0)); // запуск рандома

    int stats[2] = {100, 30}; // 0 - HP, 1 - Gold
    bool active = true;
    int action; 

    std::cout << "Добро пожаловать, самурай!" << std::endl;

    while(active) {
        showhero(stats); 

        std::cout << "1 - Идти в бой\n0 - Выйти из игры\nВаш выбор: ";
        std::cin >> action;

        if (action == 1) {
            int damage = rand() % 40; // Урон от 0 до 39
            int rewards = rand() % 30; // Золото от 0 до 29

            stats[0] -= damage; // Отнимаем урон
            stats[1] += rewards; // Добавляем награду
            std::cout << ">>> Ты получил " << damage << " урона и добыл " << rewards << " золота!" << std::endl;
        } 
        else if (action == 2) {
            if (stats[1] >= 15) {
                stats[1] -= 15;
                stats[0] += 40;
                std::cout << ">>> Лекарь обработал твои раны! +40 HP" << std::endl;
            } else {
                std::cout << ">>> У тебя нет денег на лекаря, самурай!" << std::endl;
            }
        }
        else if (action == 0) {
            active = false; // Выход
            std::cout << "Самурай ушел на покой." << std::endl;
        }

        if (stats[0] <= 0) {
            std::cout << "Ты пал в бою... Гейм овер." << std::endl;
            active = false;
        }
    }

    return 0;
}