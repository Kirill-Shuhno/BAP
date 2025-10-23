#include <iostream>
using namespace std;

int main() {
    double x, y;
    cin >> x >> y;

    bool greey1 = (x >= -2 && x <= 2 && y >= 0 && y <= 2);
    bool white = (x >= -1 && x <= 1 && y >= 0 && y <= 1);
    bool greey2 = (y <= 0 && y >= -1 + fabs(x)); 

    if ((greey1 && !white) || greey2)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
