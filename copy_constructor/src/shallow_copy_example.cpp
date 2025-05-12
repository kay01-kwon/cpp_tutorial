#include "class_record_shallow_cpy.hpp"

int main(int argc, char **argv)
{
    int *scores = new int[5];

    for(size_t i = 0; i < 5; ++i)
        scores[i] = 100 - 10*i;
    
    ClassRecord record(scores, 5);
    ClassRecord *ptr;
    ptr = new ClassRecord(record);

    print(cout, record);

    delete ptr;

    print(cout, record);

    return 0;
}