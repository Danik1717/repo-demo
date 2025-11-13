#include <iostream>
#include <locale>
using namespace std;


void compareNumbers(double a, double b);

int main() {
    
    setlocale(LC_ALL, "Russian");

    double a, b;
    cout << "¬ведите первое число (a): ";
    cin >> a;
    cout << "¬ведите второе число (b): ";
    cin >> b;

    
    compareNumbers(a, b);

    return 0;
}


void compareNumbers(double a, double b) {
    if (a > b) {
        cout << a << " > " << b << endl;
    }
    else if (a < b) {
        cout << a << " < " << b << endl;
    }
    else {
        cout << a << " == " << b << endl;
    }
}
