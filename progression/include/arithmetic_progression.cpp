#include "arithmetic_progression.hpp"

ArithmeticProgression::ArithmeticProgression(long increment)
: Progression(0), increment_(increment)
{
}

void ArithmeticProgression::print_progression_name()
{
    cout << "Arithmetic Progression" << endl;
}

long ArithmeticProgression::nextValue()
{
    current_ += increment_;
    return current_;
}