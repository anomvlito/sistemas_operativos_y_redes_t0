#include "process.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void crear_proceso(struct Proceso *p, int pid, char *nombre_proceso,
                   status_t estado, struct Proceso *padre,
                   struct Proceso *primer_hijo, struct Proceso *hermano) {

  p->pid = pid;
  strcpy(p->nombre, nombre_proceso);
  p->estado = estado;
  p->padre = padre;
  p->primer_hijo = primer_hijo;
  p->hermano = hermano;
}