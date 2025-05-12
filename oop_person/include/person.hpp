#ifndef PERSON_HPP
#define PERSON_HPP

#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

class Person {

    public:
        
        // Default constructor
        Person();

        // Parameterized constructor
        Person(const std::string& name, int age);

        // Shallow Copy constructor
        Person(const Person& other);

        virtual void print() const;

        static void print_line();


    protected:
        string name_;
        int age_;

};


#endif // PERSON_HPP