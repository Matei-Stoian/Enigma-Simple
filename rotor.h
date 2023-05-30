#ifndef ROTOR_H
#define ROTOR_H
#define RLENGHT 26
typedef struct 
{
    char wire[RLENGHT];
    int pos;
} Rotor;
 char *RW[] = {
    "EKMFLGDQVZNTOWYHXUSPAIBRCJ",
    "AJDKSIRUXBLHWTMCQGZNPYFVOE",
    "BDFHJLCPRTXVZNYEIWGAKMUSQO",
    "ESOVPZJAYQUIRHXLNFTGKDCMWB",
    "VZBRGITYUPSDNHLXAWMJQOFECK"
};
void initRotor(Rotor* r, char* wiring);
void rotateRotor(Rotor* r);
#endif 