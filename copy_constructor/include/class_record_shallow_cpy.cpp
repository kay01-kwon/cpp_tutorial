#include "class_record_shallow_cpy.hpp"

ClassRecord::ClassRecord(const int *scores, int count)
:count_(count)
{
    scores_ = new int[count_];
    memcpy(scores_, scores, count_ * sizeof(int));
}

// Shallow copy constructor
ClassRecord::ClassRecord(const ClassRecord &record)
:count_(record.count_), scores_(record.scores_)
{

}
ClassRecord::~ClassRecord()
{
    delete [] scores_;
    scores_ = nullptr;
}

ostream &print(ostream &os, const ClassRecord &record)
{
    os << "ClassRecord: ";
    for (int i = 0; i < record.count_; ++i)
        os << record.scores_[i] << " ";
    os << endl;
    return os;
}
