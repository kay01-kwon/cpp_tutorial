#ifndef PERSON_HPP_
#define PERSON_HPP_

#include <iostream>
#include <string>

using std::cout;
using std::endl;

class Person
{
    public:

        Person() = delete;

        Person(const std::string& name, int age);

        Person(const Person& other);

        ~Person();

        Person& operator=(const Person& other);

        void print() const;

        // setters
        void setName(const std::string& name);

        void setAge(int age);

        // getters
        std::string getName() const;

        int getAge() const;


    private:

        std::string name_;
        int age_;

};


#endif