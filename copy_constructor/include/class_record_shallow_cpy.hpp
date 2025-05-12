#ifndef CLASS_RECORD_SHALLOW_CPY_HPP
#define CLASS_RECORD_SHALLOW_CPY_HPP

#include <iostream>
#include <string.h>

using std::ostream;
using std::cout;
using std::endl;

class ClassRecord
{
    public:

        friend ostream &print(ostream &os, const ClassRecord &record);

        ClassRecord(const int* scores, int count);

        ClassRecord(const ClassRecord &record);
        
        ~ClassRecord();

    private:

    int count_;
    int* scores_;

};

#endif // CLASS_RECORD_SHALLOW_CPY_HPP