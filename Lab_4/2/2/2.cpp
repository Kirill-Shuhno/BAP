#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x, y;
    cin >> x >> y;

    double r2 = x * x + y * y;
    bool ring = (r2 >= 1 && r2 <= 4);
    bool greey = ((x >= 0 && y >= 0) || (x <= 0 && y <= 0));

    if (ring && greey)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
