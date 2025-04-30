#include "person.hpp"

int main()
{
    // Error: Cannot call default constructor
    // Person person1;

    Person person1("John Doe", 30);

    Person person2("None", 0);

    cout << "Person 1" << endl;
    cout << "Name : " << person1.getName()
        << endl;

    cout << "Age : " << person1.getAge()\
        << endl;


    cout << " Person 2" << endl;
    person2.print();

    person2 = person1;

    cout << "Person 2 after assignment operator" << endl;
    person2.print();

    return 0;
}