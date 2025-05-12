#include "class_record_deep_cpy.hpp"

int main(int argc, char**argv)
{
    // Create an instance of ClassRecord
    int *scores = new int[5]{100, 90, 80, 70, 60};
    
    ClassRecord record1(scores, 5);

    // Create a deep copy of record1
    ClassRecord* classRecordCpy = new ClassRecord(record1);

    print(cout, record1);

    delete classRecordCpy;

    print(cout, record1);


    return 0;
}