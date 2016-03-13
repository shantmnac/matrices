#include <stdio.h>

class DenominatorIsZeroERROR{
public:
    DenominatorIsZeroERROR(){printf("The denominator is zero - ERROR CODE 1\n");};
};

class MemoryAllocatingERROR{
public:
    MemoryAllocatingERROR(){};
    MemoryAllocatingERROR(int size){printf("Could not allocate %i bytes of memory - ERROR CODE 2\n", size);};
    
    void MemoryCheck(void* pointer, int sizeOfAllocMemory){
        if (pointer == NULL) {
            MemoryAllocatingERROR(sizeOfAllocMemory);
        }
    }
};