#include "types.h"

typedef void (*VoidCallback)(void);

extern VoidCallback glob_8003E90C;

void func_8002A0E4(void) {
    glob_8003E90C();
}

extern VoidCallback glob_8003E908;

void func_8002A10C(void) {
    glob_8003E908();
}

void func_8002A134(void) {
    glob_8003E908();
}
