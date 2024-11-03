#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "ukr");
    double x, y, R;
    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;
    cout << "R = "; cin >> R;

    bool A = (x >= 0 && y >= 0 && pow(x, 2) + pow(y, 2) <= pow(R, 2));

    bool B = (x >= 0 && y <= 0 && y >= -2 * x + R);

    if (A || B) {
        cout << "Так" << endl;
    }
    else {
        cout << "Нi" << endl;
    }

    return 0;
}