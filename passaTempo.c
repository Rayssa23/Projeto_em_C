#include <time.h>
#include "passaTempo.h"
void delay(int segundos) {
    int tempo = 500000 * segundos;
    clock_t inicio = clock();
    while (clock() < inicio + tempo) {
        // não faz nada, apenas gasta tempo
  }
}