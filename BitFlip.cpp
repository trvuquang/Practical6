# include "BitFlip.h"

Individual BitFlip::mutate (Individual parentIndi, int k){
    Individual newIndi(parentIndi.getString());
    newIndi.flipBit((k - 1) % parentIndi.getLength());
    return newIndi;
}