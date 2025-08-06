#include <bits/stdc++.h>
using namespace std;
#define EPSILON 0.001

double func(double x)
{
    return x * x * x - x - 11;
}

void bisection(double a, double b)
{
    if (func(a) * func(b) >= 0) {
        cout << "Incorrect initia. f(a) and f(b) must have opposite signs.\n";
        return;
    }

    double c = a;
    cout << fixed << setprecision(4);

    while ((b - a) >= EPSILON) {
        c = (a + b) / 2;

        if (abs(func(c)) < EPSILON)
            break;

        else if (func(c) * func(a) < 0)
            b = c;
        else
            a = c;
    }

    cout << "The value of the root is: " << c << endl;
}

int main()
{
    double a, b;

    cout << "Enter the value of a: ";
    cin >> a;

    cout << "Enter the value of b: ";
    cin >> b;

    bisection(a, b);
    return 0;
}
