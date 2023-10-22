#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int rollNumber;
    string className;
    string division;
    string dateOfBirth;
    string telephoneNumber;

public:
    // Default constructor
    Student()
    {
        name = "";
        rollNumber = 0;
        className = "";
        division = "";
        dateOfBirth = "";
        telephoneNumber = "";
    }

    // Parameterized constructor
    Student(string n, int rn, string cn, string div, string dob, string tn)
    {
        name = n;
        rollNumber = rn;
        className = cn;
        division = div;
        dateOfBirth = dob;
        telephoneNumber = tn;
    }

    // Copy constructor
    Student(const Student &other)
    {
        name = other.name;
        rollNumber = other.rollNumber;
        className = other.className;
        division = other.division;
        dateOfBirth = other.dateOfBirth;
        telephoneNumber = other.telephoneNumber;
    }

    // Destructor
    ~Student()
    {
        cout << "Destructor called for student " << rollNumber << ": " << name << endl;
    }

    void readData()
    {
        cout << "Enter student details:\n";
        cout << "Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Roll number: ";
        cin >> rollNumber;
        cout << "Class: ";
        cin.ignore();
        getline(cin, className);
        cout << "Division: ";
        getline(cin, division);
        cout << "Date of Birth: ";
        getline(cin, dateOfBirth);
        cout << "Telephone number: ";
        getline(cin, telephoneNumber);
    }

    void displayData()
    {
        cout << "Name: " << name << endl;
        cout << "Roll number: " << rollNumber << endl;
        cout << "Class: " << className << endl;
        cout << "Division: " << division << endl;
        cout << "Date of Birth: " << dateOfBirth << endl;
        cout << "Telephone number: " << telephoneNumber << endl;
        cout << "-------------------------------------" << endl;
    }
};

int main()
{
    const int MAX_STUDENTS = 3;
    Student students[MAX_STUDENTS];

    // Read data for each student
    for (int i = 0; i < MAX_STUDENTS; i++)
    {
        cout << "Enter details for student " << i + 1 << endl;
        students[i].readData();
    }

    // Display data for each student
    cout << "\nStudent Details:\n";
    for (int i = 0; i < MAX_STUDENTS; i++)
    {
        cout << "Student " << i + 1 << ":\n";
        students[i].displayData();
    }

    // Count the number of students
    int studentCount = MAX_STUDENTS;
    cout << "Number of students: " << studentCount << endl;

    return 0;
}
