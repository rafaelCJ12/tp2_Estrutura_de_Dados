#ifndef EXAME_H
#define EXAME_H

typedef struct exame Exame;

Exame *cria_exame(unsigned long int i, unsigned long int inst_t, char *cond);

void imprime_exame(Exame *e);

#endif