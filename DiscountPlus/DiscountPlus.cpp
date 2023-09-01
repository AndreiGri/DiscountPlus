#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    // Изменение кодировки консоли:
    system("chcp 1251 > nul");
    string fridge = "Холодильник";
    string set = "Телевизор";
    string curler = "Плойка";
    int cost1;
    int cost2;
    int cost3;
    int totalCost = 0;
    int discount = 0;

    cout << "Введите стоимость " << fridge << ": ";
    cin >> cost1;
    totalCost += cost1;

    cout << "Введите стоимость " << set << ": ";
    cin >> cost2;
    totalCost += cost2;

    cout << "Введите стоимость " << curler << ": ";
    cin >> cost3;
    totalCost += cost3;

    if (totalCost > 10000) {
        discount = 10;
    }

    cout << "--------------------------------------" << endl;
    cout << fridge << ": " << cost1 << " рублей" << endl;
    cout << set << ": " << cost2 << " рублей" << endl;
    cout << curler << ": " << cost3 << " рублей" << endl;
    cout << "--------------------------------------" << endl;
    cout << "Скидка составляет: " << totalCost / 100 * discount << " рублей" << endl;
    cout << "======================================" << endl;
    cout << "Итого: " << totalCost - totalCost / 100 * discount << " рублей" << endl;
    
    // Задержка консольного окна:
    system("pause > nul");
    return 0;
}