#ifndef GEOMETRIC_PROGRESSION_HPP
#define GEOMETRIC_PROGRESSION_HPP

#include "progression.hpp"

class GeometricProgression : public Progression
{
    public:

        GeometricProgression(long base = 2);

        void static print_progression_name();

    protected:

        long nextValue() override;

        long base_;
};

#endif // GEOMETRIC_PROGRESSION_HPP