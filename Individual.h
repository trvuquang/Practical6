# ifndef INDIVIDUAL_H
# define INDIVIDUAL_H

# include <iostream>
# include <string>

using namespace std;

class Individual {
    public:
        Individual(int length);
        Individual(string binString);
        void setString(string bString);
        string getString();
        int getBit(int pos);
        void setBit(int pos, int bit);
        void flipBit(int pos);
        int getMaxOnes();
        int getLength();

    private:
        string binaryString;
};

# endif