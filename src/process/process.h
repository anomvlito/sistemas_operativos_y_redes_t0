typedef enum { EJECUTANDO, LISTO, ESPERANDO, TERMINADO } status_t;

struct process {
  int pid;
  char nombre[256];
  status_t estado;
  struct process *padre;
  struct process *primer_hijo;
  struct process *hermano;
};

typedef struct process Process;

void crear_proceso(Process *p, char *nombre_proceso, status_t estado, int pid,
                   int ppid, int prioridad, Process *padre,
                   Process *primer_hijo, Process *hermano);