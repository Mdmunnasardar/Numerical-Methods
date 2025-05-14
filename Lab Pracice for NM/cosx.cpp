#include <bits/stdc++.h>
#include <cmath>
using namespace std;

#define ep 0.001  // Accuracy up to 3 decimal places

// Function: f(x) = 2x - ln(x) - 7
double func(double x) {
    return cos(x) - x;  // log(x) = ln(x)
}

void bisection(double a, double b) {
    if (func(a) * func(b) >= 0) {
        cout << "You have not assumed valid a and b (no sign change in interval)." << endl;
        return;
    }

    double c = a;
    while ((b - a) >= ep) {
        c = (a + b) / 2;

        if (func(c) == 0.0)
            break;
        else if (func(c) * func(a) < 0)
            b = c;
        else
            a = c;
    }


    cout << "The root is: " << c << endl;
}

int main() {
    double a = 0, b = 1;
    bisection(a, b);
    return 0;
}
