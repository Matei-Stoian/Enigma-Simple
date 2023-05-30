#include "rotor.h"
#include "string.h"

void initRotor(Rotor* r,char *wiring){
    strcpy(r->wire,wiring);
    r->pos = 0;
}
void rotateRotor(Rotor* r)
{
    r->pos = (r->pos + 1)%RLENGHT;
}