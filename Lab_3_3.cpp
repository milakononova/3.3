
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double R, x, y;

    cout << "Enter R: ";
    cin >> R;

    cout << "Enter x: ";
    cin >> x;

    if (x <= -8 - R) {
        y = R;
    }
    else if (x <= -8 + R) {
        y = R - sqrt(R * R - (x + 8) * (x + 8));
    }
    else if (x <= -4) {
        y = R;
    }
    else if (x <= 2) {
        y = R - (R + 1) * (x + 4) / 6;
    }
    else {
        y = x - 3;
    }

    cout << "y = " << y << endl;

    return 0;
}
