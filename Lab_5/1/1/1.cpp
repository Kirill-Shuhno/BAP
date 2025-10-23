#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "");
    char c;
    cout << "Введите символ (*, <, !, >, %, ?, =, +): ";
    cin >> c;

    switch (c) {
    case '*': cout << "звёздочка"; break;
    case '<': cout << "знак меньше"; break;
    case '!': cout << "восклицательный знак"; break;
    case '>': cout << "знак больше"; break;
    case '%': cout << "процент"; break;
    case '?': cout << "вопросительный знак"; break;
    case '=': cout << "знак равенства"; break;
    case '+': cout << "плюс"; break;
    default:  cout << "Ошибка: символ не из предложенного набора.";
    }

    return 0;
}
