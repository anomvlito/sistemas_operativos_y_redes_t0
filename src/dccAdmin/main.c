
#include "../input_manager/manager.h"
#include "../process/process.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {

  char **input = read_user_input();
  printf("%s\n", input[0]);
  free_user_input(input);
}
