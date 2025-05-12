#include "person.hpp"
#include "student.hpp"

Person::Person()
: name_("No Name"), age_(0)
{

}

Person::Person(const std::string &name, int age)
: name_(name), age_(age)
{
}

Person::Person(const Person &other)
:name_(other.name_), age_(other.age_)
{
}

void Person::print() const
{
    cout << "Name: " << name_ << endl;
    cout << "Age: " << age_ << endl;
}

void Person::print_line()
{
    cout << "----------------------------------------" << endl;
}
