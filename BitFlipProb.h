# ifndef BITFLIPPROB_H
# define BITFLIPPROB_H

# include <iostream>
# include <string>
# include "Mutator.h"

using namespace std;

class BitFlipProb : public Mutator {
    public:
        BitFlipProb (double prob);
        Individual mutate (Individual parentIndi, int k);
    private:
        double p;
};


# endif