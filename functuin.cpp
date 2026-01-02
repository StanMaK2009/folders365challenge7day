#include <iostream>
#include <locale.h>
 
   void buyFood(int res[]) {
    res[1] -= 20; // Тратим 20 золота
    res[0] += 10; // Получаем 10 еды
    std::cout << ">>> Вы купили еду! (-20 золота, +10 еды)" << std::endl;
}
   void showstatus(int res[]) {
    std::cout << "-- Текушие ресурсы --" << std::endl;
    std::cout << "Еда" << res[0] << "Золота" << res[1] << std::endl;
    std::cout << "-----------------------" << std::endl;
   }
int main() {
   setlocale(LC_ALL, "Ru");
   int resources[2] = {64, 128};
   showstatus(resources);
   if(resources[0] <= 64 && resources[1] == 128) {
   std::cout << "У вас достаточно ресурсов можете потратить" << std::endl;
   } 
   else{
   std::cout << "У вас не достаточно ресурсов купите ресурсы" << std::endl;
   }
   std::cout << "Еда: " << resources[0] << std::endl;
   std::cout << "Золота: " << resources[0] << std::endl;
   int guest;
   std::cin >> guest;
   resources[0] = resources[0] -20;
   std::cout << "Еда: " << resources[0] << std::endl;
   resources[1] = resources[1] +20;
   std::cout << "Золото: " << resources[1] << std::endl;
   showstatus(resources);
   buyFood(resources);
   return 0;
}
