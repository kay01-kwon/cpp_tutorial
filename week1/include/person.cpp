#include "person.hpp"

Person::Person(const std::string& name, int age)
:name_(name), age_(age)
{
    cout << "Parameterized constructor called"
    << endl;
}

Person::Person(const Person& other)
{
    cout << "Copy constructor called" << endl;
    name_ = other.name_;
    age_ = other.age_;
}

Person::~Person()
{
    cout << "Destructor called" << endl;
}


Person& Person::operator=(const Person& other)
{
    cout << "Copy assignment operator called"
    << endl;
    if (this != &other)
    {
        name_ = other.name_;
        age_ = other.age_;
    }
    return *this;
}

void Person::print() const
{
    cout << "Name: " << name_ << endl;
    cout << "Age: " << age_ << endl;
}

void Person::setName(const std::string& name)
{
    name_ = name;
}

void Person::setAge(int age)
{
    age_ = age;
}

std::string Person::getName() const
{
    return name_;
}

int Person::getAge() const
{
    return age_;
}
