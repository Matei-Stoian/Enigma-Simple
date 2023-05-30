#include "enigma.h"

void setRotorposs(Enigma *e, int p1,int p2,int p3)
{
    e->rotor[0].pos = p1;
    e->rotor[1].pos = p2;
    e->rotor[2].pos = p3;
}


char getNextChar(Enigma *e,char c)
{
    if(e->plugboard[c-'A']!='\0')
    {
        c = e->plugboard[c-'A'];
    }

    for (int i = 2; i >= 0; i--) {
        int index = (c - 'A' + e->rotor[i].pos) % RLENGHT;
        c = (e->rotor[i].wire[index] - 'A' - e->rotor[i].pos + RLENGHT) % RLENGHT + 'A';
    }

    
    c = (e->plugboard[c - 'A'] - 'A' + RLENGHT) % RLENGHT + 'A';


    for (int i = 0; i < 3; i++) {
        int index = (c - 'A' + e->rotor[i].pos) % RLENGHT;
        c = (e->rotor[i].wire[index] - 'A' - e->rotor[i].pos + RLENGHT) % RLENGHT + 'A';
    }
    if (e->plugboard[c - 'A'] != '\0') {
        c = e->plugboard[c - 'A'];
    }
    rotateRotor(&e->rotor[2]);
    if(e->rotor[2].pos == 0)
    {
        rotateRotor(&e->rotor[1]);
    }
    return c;
}