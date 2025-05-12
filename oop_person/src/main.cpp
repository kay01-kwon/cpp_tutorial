#include "person.hpp"
#include "student.hpp"

int main(int argc, char **argv)
{
    Person *person_ptr[2];
    person_ptr[0] = new Person("Kay", 35);
    person_ptr[1] = new Student("Kay", 35, "2011145183", "ME", 2018);

    Person::print_line();
    person_ptr[0]->print();

    Person::print_line();
    person_ptr[1]->print();

    // pp[1]->changeMajor("CS");

    Student *student_ptr = static_cast<Student*>(person_ptr[1]);
    
    Person::print_line();
    student_ptr->changeMajor("CS");

    Person::print_line();
    student_ptr->print();

    delete person_ptr[0];
    delete student_ptr;
    return 0;
}