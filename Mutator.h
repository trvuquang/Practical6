# ifndef MUTATOR_H
# define MUTATOR_H

# include <iostream>
# include <string>
# include "Individual.h"

using namespace std;

class Mutator {
    public:
        virtual Individual mutate (Individual parentIndi, int k) = 0;
    private:
        
};


# endif