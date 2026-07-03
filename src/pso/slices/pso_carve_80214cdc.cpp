#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

extern void *tl_00;
extern unsigned char fn_80213E0C[];
void *__nw__7TObjectFUl(int);
void *THunterGuildSeqOffline__sub_800F8878(void *, void *, void *);

void handle_6x73_exit_quest(void) {
    void *o;
    o = __nw__7TObjectFUl(0x28);
    if (o != NULL) {
        THunterGuildSeqOffline__sub_800F8878(o, tl_00, fn_80213E0C);
    }
}

}
