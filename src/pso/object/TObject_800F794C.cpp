#include "types.h"

extern "C" {

void clear_flag_3__7TObjectFv(void *arg0);

void clear_flag_3__7TObjectFv(void *arg0) {
    *(u16 *)((s8 *)arg0 + 4) = (u16) (*(u16 *)((s8 *)arg0 + 4) & 0xFFFFFFF7);
}

}
