#include "fibonacci_progression.hpp"

FibonacciProgression::FibonacciProgression(long first, long second)
: Progression(first), second_(second),prev_(second-first)
{
}

void FibonacciProgression::print_progression_name()
{
    cout << "Fibonacci Progression" << endl;
}

long FibonacciProgression::firstValue()
{
    current_ = first_;
    prev_ = second_ - first_;
    return current_;
}

long FibonacciProgression::nextValue()
{
    long temp = prev_;
    prev_ = current_;
    current_ += temp;
    return current_;
}