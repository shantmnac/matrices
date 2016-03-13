#include "BigIntLib.hpp"
#include "ErrorsCatchers.hpp"
#include <stdlib.h>
#include <cstring>

char convertIntToChar(long int integer){return integer - '0';}

RationalNumber::RationalNumber(){
    sign = 1;
    numerator = (char*)malloc(2 * sizeof(char));
    numerator[0] = '0';
    denominator = (char*)malloc(2 * sizeof(char));
    denominator[0] = '0';
};

RationalNumber::RationalNumber(const long int integer){
    if (!integer) {RationalNumber(); return;}
    
    if (integer > 0) sign = 1;
    else sign = 0;
    
    long int temp = integer;
    int ost = 0;
    int i = 0;
    
    denominator = (char*)malloc(2 * sizeof(char));
    denominator[0] = '1';
    
    while (temp > 0) {
        ost = temp % 10;
        temp /= 10;
        numerator = (char*)realloc(numerator, (i + 1) * sizeof(char));
        numerator[i] = convertIntToChar(ost);
        i++;
    }
};

RationalNumber::RationalNumber(const long int numeratorTmp, const unsigned long int denominatorTmp){
    if (!denominatorTmp) {throw DenominatorIsZeroERROR(); return;}
    
    if (!numeratorTmp) {RationalNumber(); return;}
    
    if (numeratorTmp > 0) sign = 1;
    else sign = 0;
    
    long int tempNum = numeratorTmp;
    int ost = 0;
    int i = 0;
    
    while (tempNum > 0) {
        ost = tempNum % 10;
        tempNum /= 10;
        numerator = (char*)realloc(numerator, (i + 1) * sizeof(char));
        numerator[i] = convertIntToChar(ost);
        i++;
    }
    
    unsigned long int tempDenom = denominatorTmp;
    
    while (tempDenom > 0) {
        ost = tempDenom % 10;
        tempDenom /= 10;
        denominator = (char*)realloc(denominator, (i + 1) * sizeof(char));
        denominator[i] = convertIntToChar(ost);
        i++;
    }
};

RationalNumber::RationalNumber(const float temp){
    if (!temp) {RationalNumber(); return;}
    
    if (temp > 0) sign = 1;
    else sign = 0;
    
    float tempFloat = temp;
    int numeratorTemp = 1;
    int denominatorTemp = 1;
    int i = 1;
    
    while ((tempFloat - (int)tempFloat) != 0) {
        tempFloat *= 10;
        i *= 10;
    }
    
    numeratorTemp = tempFloat;
    denominatorTemp = i;
    
    RationalNumber(numeratorTemp, denominatorTemp);
};

RationalNumber::RationalNumber(const RationalNumber& temp){
    sign = temp.sign;
    numerator = (char*)malloc(strlen(temp.numerator) * sizeof(char));
    strcpy(numerator, temp.numerator);
    denominator = (char*)malloc(strlen(temp.denominator) * sizeof(char));
    strcpy(denominator, temp.denominator);
};