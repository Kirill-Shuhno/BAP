#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "");
    char c;
    cout << "Введите одну из букв (L, O, V, N, M, S): ";
    cin >> c;

    switch (c) {
    case 'L': cout << "Lukomlka"; break;
    case 'O': cout << "Osipovka"; break;
    case 'V': cout << "Vilia"; break;
    case 'N': cout << "Neman"; break;
    case 'M': cout << "Mukhavets"; break;
    case 'S': cout << "Sozh"; break;
    default:  cout << "Ошибка: такой буквы нет в списке.";
    }

    return 0;
}
