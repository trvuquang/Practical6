# ifndef REARRANGE_h
# define REARRANGE_h

# include <iostream>
# include <string>
# include "Mutator.h"

using namespace std;

class Rearrange : public Mutator {
    public:
        Individual mutate (Individual parentIndi, int k);
};


# endif