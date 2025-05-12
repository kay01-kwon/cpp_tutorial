#ifndef ARITHMETIC_PROGRESSION_HPP
#define ARITHMETIC_PROGRESSION_HPP

#include "progression.hpp"

class ArithmeticProgression : public Progression
{

    public:

        ArithmeticProgression(long increment = 1);

        static void print_progression_name();

    protected:
        long nextValue() override;

        long increment_;
};


#endif // ARITHMETIC_PROGRESSION_HPP