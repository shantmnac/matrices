#include <stdio.h>

class DenominatorIsZeroERROR{
public:
    DenominatorIsZeroERROR(){printf("The denominator is zero - ERROR CODE 001\n");};
};

class ExceptionCatcher{
public:
    ExceptionCatcher(int size){printf("Не удалось выделить %i байт памяти!\n", size);};
};