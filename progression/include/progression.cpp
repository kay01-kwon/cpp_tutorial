#include "progression.hpp"

// Progression::Progression()
// :first_(0), current_(0)
// {
// }

Progression::Progression(long first)
:first_(first), current_(first)
{
}

Progression::~Progression()
{
}

void Progression::print_progression_name()
{
    cout << "Normal Progression" << endl;
}

void Progression::printProgression(int n)
{
    cout << firstValue();
    for (size_t i = 0 ; i < n ; i++)
        cout << " " << nextValue();
    cout << endl;
}

long Progression::firstValue()
{
    current_ = first_;
    return current_;
}

long Progression::nextValue()
{
    return ++current_;
}
