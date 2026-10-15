#include "types.h"

extern "C" {

void set_field4__6TSceneFv(void);

extern void *TScene__data_805D5FCC;

void set_field4__6TSceneFv(void) {
    if ((void *) TScene__data_805D5FCC != NULL) {
        *(s32 *)((s8 *)TScene__data_805D5FCC + 4) = 0x8F;
    }
}

}
