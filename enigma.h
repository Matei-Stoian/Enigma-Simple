#ifndef ENIGMA_H
#define ENIGMA_H
#include "rotor.h"
typedef struct{
    Rotor rotor[3];
    char plugboard[RLENGHT];
} Enigma;

char getNextChar(Enigma *e,char c);
void setRotorPositions(Enigma *e,int p1,int p2,int p3);
#endif 