# include "Individual.h"
# include "Mutator.h"
# include "BitFlip.h"
# include "BitFlipProb.h"
# include "Rearrange.h"
# include <sstream>
# include <iostream>

using namespace std;

Individual * execute(Individual * indPtr, Mutator * mPtr, int k){
    Individual indi = Individual(*indPtr);
    Individual * newIndi = new Individual(mPtr->mutate(indi, k).getString());
    return newIndi;
}

int main (){

    // binarystr1 k1 binarystr2 k2
    string S, T[4], temp; 
    getline(cin, S);
    stringstream X(S);
    int index = 0;
    while (getline(X, temp, ' ')) {
        T[index] = temp;
        index++;
    }

    Individual * ind1 = new Individual(T[0]);
    Individual * ind2 = new Individual(T[2]);
    int k1 = stoi (T[1]);
    int k2 = stoi (T[3]);

    BitFlip * Bflip = new BitFlip();
    // BitFlipProb * BPflip = new BitFlipProb(0.5);
    Rearrange * Rflip = new Rearrange();
    
 
    cout << execute (ind1, Bflip, k1)->getString();
    cout << " ";
    cout << execute (ind2, Rflip, k2)->getString();
    cout << " ";
    cout << execute (ind2, Rflip, k2)->getMaxOnes() << endl;

}

// g++ -o main.out -std=c++11 -O2 -Wall *.cpp



