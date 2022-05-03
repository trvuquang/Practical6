# ifndef BITFLIP_H
# define BITFLIP_H

# include <iostream>
# include <string>
# include "Mutator.h"

using namespace std;

class BitFlip : public Mutator {
    public:
        Individual mutate (Individual parentIndi, int k);
};


# endif