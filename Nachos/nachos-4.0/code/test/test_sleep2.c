#include "syscall.h"

int main() {
    int i;
    for (i = 0; i <= 8; i += 2) {
        Sleep(301);
        PrintInt(i);
    }
}
