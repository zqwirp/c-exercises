#include <stdio.h>
#include "terminal.h"

int main() {
    printf("Hello, world!\n");
    clear_terminal(5);
    printf("Cleared the terminal and added 5 newlines.\n");
    return 0;
}

