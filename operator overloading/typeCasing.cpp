#include <iostream>
using namespace std;

class Rupee {
    double rupee;

public:
    // Default Constructor
    Rupee() {
        rupee = 0;
    }

    // Parameterized Constructor
    Rupee(double x) {
        rupee = x;
    }

    void print() {
        cout << "Rupee is: " << rupee << endl;
    }
};

class Dollar {
    double dollar;

public:
    // Default Constructor
    Dollar() {
        dollar = 0;
    }

    // Parameterized Constructor
    Dollar(double x) {
        dollar = x;
    }

    void print() {
        cout << "Dollar is: " << dollar << endl;
    }

    // Conversion Operator: Dollar to Rupee
    operator Rupee() {
        return Rupee(dollar * 71.9);
    }
};

int main() {
    Dollar d1(10);
    d1.print();

    Rupee r;
    r = d1;  // Implicit conversion from Dollar to Rupee

    r.print();  // Print the converted rupee value

    return 0;
}
