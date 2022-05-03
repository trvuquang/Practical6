# include "Rearrange.h"

Individual Rearrange::mutate (Individual parentIndi, int k){
    Individual newIndi (parentIndi.getLength());
    for (int i = 0; i < parentIndi.getLength(); i++){
        newIndi.setBit(i, parentIndi.getBit((i + k - 1) % parentIndi.getLength()));
    } 
    return newIndi;
}