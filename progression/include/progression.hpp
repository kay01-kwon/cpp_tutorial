#ifndef PROGRESSION_HPP
#define PROGRESSION_HPP
#include <iostream>

using std::cout;
using std::endl;

class Progression{

    public:

        // Progression();

        Progression(long first = 0);

        static void print_progression_name();

        virtual ~Progression();

        void printProgression(int n);

    protected:

        virtual long firstValue();
        virtual long nextValue();

        long first_;
    
        long current_;

};


#endif // PROGRESSION_HPP