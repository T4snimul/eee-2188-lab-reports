#include <iostream>
#include <string>

using namespace std;

// Abstract class (Abstraction)
class Sensor {
protected:
    string name;

public:
    Sensor(string n) {
        name = n;
    }

    // Pure virtual function
    virtual void display() = 0;

    virtual ~Sensor() {}
};

// Inheritance + Encapsulation
class TemperatureSensor : public Sensor {
private:
    double temperature; // Encapsulated data

public:
    TemperatureSensor(string n) : Sensor(n) {
        temperature = 0;
    }

    // Function overloading
    void setValue(int t) {
        temperature = t;
    }

    void setValue(double t) {
        temperature = t;
    }

    double getValue() {
        return temperature;
    }

    // Polymorphism
    void display() override {
        cout << name << " Temperature: "
             << temperature << " degree C" << endl;
    }
};

class DistanceSensor : public Sensor {
private:
    double distance;

public:
    DistanceSensor(string n) : Sensor(n) {
        distance = 0;
    }

    // Function overloading
    void setValue(int d) {
        distance = d;
    }

    void setValue(double d) {
        distance = d;
    }

    double getValue() {
        return distance;
    }

    void display() override {
        cout << name << " Distance: "
             << distance << " cm" << endl;
    }
};

int main() {

    TemperatureSensor temp("LM35");
    DistanceSensor dist("Ultrasonic");

    temp.setValue(36.5);   // double version
    dist.setValue(125);    // int version

    // Array of pointers (Pointer + Array)
    Sensor* sensors[2];

    sensors[0] = &temp;
    sensors[1] = &dist;

    cout << "=== Sensor Readings ===\n\n";

    // Polymorphism in action
    for (int i = 0; i < 2; i++) {
        sensors[i]->display();
    }

    return 0;

    // Report e prottekta property explain korte hobe
}
