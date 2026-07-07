#include <iostream>
#include <string>
using namespace std;

class Student {
    string name;
    int roll;
    float cgpa;
    string department;
    int semester;

public:
    // Constructor
    Student(string n, int r, float c, string d, int s)
    {
        name = n;
        roll = r;
        cgpa = c;
        department = d;
        semester = s;
    }

    // Display function
    void display()
    {
        cout << "Name       : " << name << endl;
        cout << "Roll       : " << roll << endl;
        cout << "CGPA       : " << cgpa << endl;
        cout << "Department : " << department << endl;
        cout << "Semester   : " << semester << endl;
        cout << "---------------------------" << endl;
    }
};

int main()
{
    // Multiple objects
    Student s1("Hasan", 2408020, 3.16, "MTE", 3);
    Student s2("Abdullah", 2403002, 3.65, "CSE", 3);
    Student s3("Umar", 2401018, 3.95, "EEE", 6);

    // Print information
    s1.display();
    s2.display();
    s3.display();

    return 0;
}
