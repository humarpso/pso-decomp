#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

extern void *tl_00;
extern unsigned char reset_random_enemies_mode[];
void *__nw__7TObjectFUl(int);
void *init__22THunterGuildSeqOfflineFPvPvPv(void *, void *, void *);

void handle_6x73_exit_quest(void) {
    void *o;
    o = __nw__7TObjectFUl(0x28);
    if (o != NULL) {
        init__22THunterGuildSeqOfflineFPvPvPv(o, tl_00, reset_random_enemies_mode);
    }
}

}
