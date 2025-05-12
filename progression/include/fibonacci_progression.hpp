#ifndef FIBONACCI_PROGRESSION_HPP
#define FIBONACCI_PROGRESSION_HPP

#include "progression.hpp"

class FibonacciProgression : public Progression
{
    public:

        FibonacciProgression(long first = 0, long second = 1);

        static void print_progression_name();


    protected:
        
        long firstValue() override;
        long nextValue() override;

        long second_;
        long prev_;


};


#endif // FIBONACCI_PROGRESSION_HPP