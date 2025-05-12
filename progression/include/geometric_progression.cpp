#include "geometric_progression.hpp"

GeometricProgression::GeometricProgression(long base)
: Progression(1), base_(base)
{    
}

void GeometricProgression::print_progression_name()
{
    cout << "Geometric Progression" << endl;
}

long GeometricProgression::nextValue()
{
    current_ *= base_;
    return current_;
}