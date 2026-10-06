#include <iostream>
#include <iomanip>
using namespace std;

double squareRoot(int n, int precision) {

    double s = 0;
    double e = n;
    double ans = 0;

    // Integer part
    while (s <= e) {

        double mid = s + (e - s) / 2;

        if (mid * mid <= n) {
            ans = mid;
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }
    }

    // Decimal part
    double step = 0.1;

    for (int i = 0; i < precision; i++) {

        while (ans * ans <= n) {
            ans += step;
        }

        ans -= step;
        step /= 10;
    }

    return ans;
}

int main() {

    int n, precision;

    cout << "Enter number: ";
    cin >> n;

    cout << "Enter precision: ";
    cin >> precision;

    cout << fixed << setprecision(precision);
    cout << "Square Root = " << squareRoot(n, precision);

    return 0;
}