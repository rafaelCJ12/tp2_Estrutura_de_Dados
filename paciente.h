#ifndef PACIENTE_H
#define PACIENTE_H

typedef struct paciente Paciente;

Paciente *cria_paciente(const char *n, const char *c, unsigned long int identificador, unsigned int i);

void imprime_paciente_info(Paciente *p);

#endif

