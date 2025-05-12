#include "student.hpp"

// Parameterized constructor
Student::Student(const string &name, int age, const string &student_id,
                const string &major, int gradYear)
: Person(name, age),
student_id_(student_id),
major_(major),
gradYear_(gradYear)
{
}

// Shallow copy constructor
Student::Student(const Student & other)
: Person(other.name_, other.age_),
student_id_(other.student_id_),
major_(other.major_),
gradYear_(other.gradYear_)
{    
}

Student::~Student()
{
    cout << "Destructor called for Student: " << endl;
}

// Print function
void Student::print() const
{
    Person::print();
    cout << "Student ID: " << student_id_ << endl;
    cout << "Major: " << major_ << endl;
    cout << "Graduation Year: " << gradYear_ << endl;
}

void Student::changeMajor(const string &major)
{
    major_ = major;
    cout << "Major changed to: " << major_ << endl;
}

Student& Student::operator=(const Student &other)
{
    return *this;
}
