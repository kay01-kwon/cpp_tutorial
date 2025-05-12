#include "progression.hpp"
#include "arithmetic_progression.hpp"
#include "geometric_progression.hpp"
#include "fibonacci_progression.hpp"

int main(int argc, char **argv)
{

    Progression::print_progression_name();
    Progression *ptr;
    ptr = new Progression();
    ptr->printProgression(10);
    delete ptr;

    ArithmeticProgression::print_progression_name();
    ptr = new ArithmeticProgression(5);
    ptr->printProgression(10);
    delete ptr;

    GeometricProgression::print_progression_name();
    ptr = new GeometricProgression(2);
    ptr->printProgression(10);
    delete ptr;

    FibonacciProgression::print_progression_name();
    ptr = new FibonacciProgression();
    ptr->printProgression(10);
    delete ptr;

    return 0;

}