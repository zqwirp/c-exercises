#ifndef TERMINAL_H
#define TERMINAL_H

#include <stdlib.h>

void clear_terminal(int num_lines) {
    system("clear");
    for (int i = 0; i < num_lines; i++) {
        printf("\n");
    }
}

#endif /* TERMINAL_H */

