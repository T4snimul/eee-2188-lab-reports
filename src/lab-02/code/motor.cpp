#include <iostream>
using namespace std;

class Motor {
private:
    double voltage;
    double current;

public:
    // Constructor
    Motor(double v, double c) {
        voltage = v;
        current = c;
        cout << "Motor object created.\n";
    }

    double power() {
        return voltage * current;
    }

    double resistance() {
        if (current == 0) {
            cout << "Resistance cannot be calculated (Current = 0)." << endl;
            return 0;
        }
        return voltage / current;
    }

    double energy(double hours) {
        return power() * hours;
    }

    // Destructor
    ~Motor() {
        cout << "Motor object destroyed." << endl;
    }
};

int main() {
    Motor m1(24, 2.5);

    cout << "Power      : " << m1.power() << " W" << endl;
    cout << "Resistance : " << m1.resistance() << " Ohm" << endl;
    cout << "Energy (5h): " << m1.energy(5) << " Wh" << endl;

    return 0;
}
