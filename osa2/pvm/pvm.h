#ifndef PVM_H
#define PVM_H

enum LongMonths
{
    TAMMI = 1,
    MAALIS = 3,
    TOUKO = 5,
    HEINA = 7,
    ELO = 8,
    LOKA = 10,
    JOULU = 12
};

typedef enum LongMonths LongMonths;

struct Pvm
{
    int pv;
    int kk;
    int vuosi;

    char vk_pv[3];
};

typedef struct Pvm Pvm;

Pvm *kasvataPvm(Pvm *pvm);
unsigned int pvmEro(const Pvm *a, const Pvm *b);
void tulostaPvm(Pvm *pvm);

#endif
