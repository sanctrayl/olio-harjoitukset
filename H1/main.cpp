#include <iostream>
#include <iomanip>

using namespace std;

void calcSum(int num_a, int num_b) {
    int sum = num_a + num_b;
    cout << sum << "\n";
}

void calcDiv(int num_a, int num_b) {
    if (num_b == 0) {
        cout << "jakaja ei saa olla nolla!";
    } else {
        float div = float(num_a) / float(num_b);
        cout << fixed << setprecision(2) << div << "\n";
    }
}

int retSum(int num_a, int num_b) {
    int sum = num_a + num_b;
    return sum;
}

float retDiv(int num_a, int num_b) {
    if (num_b == 0) {
        throw std::runtime_error("jakaja ei saa olla nolla!");
    } else {
    float div = float(num_a) / float(num_b);
    return div;
    }
}

int main()
{
    int a;
    int b;
    cout << "Numero a: ";
    cin >> a;
    cout << "a numero on: " << a;
    cout << "\nNumero b: ";
    cin >> b;
    cout << "b numero on: " << b << "\n";

    calcSum(a, b);
    calcDiv(a, b);

    int resultSum = retSum(a, b);
    cout << "\nretSum: " << resultSum;
    float result;
    try {
        result = retDiv(a,b);
        cout << "\n" << a << " / " <<  b << " = " << result << endl;
    } catch (runtime_error& e) {
        cout<<"Error: "<< e.what()<< endl;
    }
    return 0;
}
