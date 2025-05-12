#ifndef STUDENT_HPP
#define STUDENT_HPP

#include "person.hpp"

class Student : public Person{
    
    public:

        // Default constructor
        Student() = delete;

        // Parameterized constructor
        Student(const string& name, int age, const string &student_id,
                const string &major, int gradYear);

        // Shallow Copy constructor
        Student(const Student& other);

        void print() const override;

        void changeMajor(const string & major);

        Student &operator =(const Student &other);

    private:
        string student_id_;
        string major_;
        int gradYear_;
};


#endif // STUDENT_HPP