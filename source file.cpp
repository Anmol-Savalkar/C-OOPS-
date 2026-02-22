#include <iostream>
using namespace std;

class Student {
private:
    int fees;
    string id;

public:

    string name;
    int roll;

    // 1. Default Constructor
    Student() {
        
        name = "Anmol Savalkar" ;
        roll = 10010;
        cout << "Default Constructor Called" << endl;
    }

    // 2. Parameterized Constructor
    Student(int r, string n) {
        roll = r;
        name = n;
        cout << "Parameterized Constructor Called" << endl;
    }

    // 3. Copy Constructor
    Student(const Student &s) {
        roll = s.roll;
        name = s.name;
        cout << "Copy Constructor Called" << endl;
    }

    // Function to display data
    void display() 
    {
        cout << "Name: " << name << endl;
        cout<< "Reg. NO. = 25MIP10010" <<endl;

        cout << "Roll No: " << roll << endl;
        
    }
};

int main() {

    // Calling Default Constructor
    Student s1;
    s1.display();
    cout << endl;

    // Calling Parameterized Constructor
    Student s2(10010, "Anmol");
    s2.display();
    cout << endl;

    // Calling Copy Constructor
    Student s3 = s2;
    s3.display();

    return 0;
}

