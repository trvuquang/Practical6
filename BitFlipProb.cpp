# include "BitFlipProb.h"

BitFlipProb::BitFlipProb (double prob) {
    p = prob;
}

Individual BitFlipProb::mutate (Individual parentIndi, int k){
    Individual newIndi (parentIndi.getString());
    for (int i = 0; i < newIndi.getLength(); i++){
        if ((rand() % 100) < p*100)
            newIndi.flipBit(i);
    }
    return newIndi;
}
