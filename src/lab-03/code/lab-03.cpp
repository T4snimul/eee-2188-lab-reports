#include <iostream>

class Student {
    int id;

public:
    // Default Constructor
    Student() {
        id = 0;
        std::cout << "Default Constructor Called" << std::endl;
    }

    // Parameterized Constructor
    Student(int x) {
        id = x;
        std::cout << "Parameterized Constructor Called" << std::endl;
    }

    // Copy Constructor
    Student(const Student &obj) {
        id = obj.id + 1;
        std::cout << "Copy Constructor Called" << std::endl;
    }

    // Destructor
    ~Student() {
        std::cout << "Destructor Called for ID = " << id << std::endl;
    }
};


int main() {
    Student s1;        // Default Constructor

    Student s2(2408020); // Parameterized Constructor

    Student s3 = s2;   // Copy Constructor

    Student s4(s3); // Copy Constructor

    return 0;
}
