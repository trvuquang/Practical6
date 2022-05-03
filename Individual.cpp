# include "Individual.h"

// constructors

Individual::Individual(int length){
    string temp = "";
    for (int i = 0; i < length; i++){
        temp.push_back('0');
    }
    setString (temp);
}

Individual::Individual(string binString){
    setString (binString);
}

// functions

void Individual::setString(string bString){
    binaryString = bString;
}

string Individual::getString (){
    return binaryString;
}

int Individual::getBit (int pos){
    // char to int conversion
    try {
        return int(binaryString.at(pos)) - 48;
    }
    catch (const out_of_range& err){
        return -1;
    }
        
}

void Individual::setBit(int pos, int bit){
    string temp = to_string(bit);
    binaryString.replace(pos, 1, temp);
}

void Individual::flipBit(int pos){
    string rep = to_string(!getBit(pos));
    binaryString.replace(pos, 1, rep);
}

int Individual::getMaxOnes(){
    unsigned int counter = 0;
    unsigned int maxCount = 0;
    for (int i = 0; i < getLength(); i++){
        if (binaryString.at(i) == '1'){
            counter++;
            if (maxCount < counter){
                maxCount = counter;  
            }  
        }         
        else
            counter = 0;
    }
    return maxCount;
}

int Individual::getLength(){
    return binaryString.length();
}
