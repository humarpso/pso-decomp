#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void create__10TItemEffPGFPvPvPv(void *arg0, void *arg1, void *arg2);
void *initialize__10TItemEffPGFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3);
void TItemEffPG__ct(void *);
void *__nw__7TObjectFUl(int);

extern M2C_UNK lbl_804F0C08[];

void *initialize__10TItemEffPGFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3) {
    TItemEffPG__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804F0C08;
    M2C_FIELD(arg0, void **, 0xD4) = arg3;
    return arg0;
}

void create__10TItemEffPGFPvPvPv(void *arg0, void *arg1, void *arg2) {
    void *o;
    o = __nw__7TObjectFUl(0xD8);
    if (o != NULL) {
        initialize__10TItemEffPGFPvPvPvPv((void *)(o), (void *)(arg0), (void *)(arg1), (void *)(arg2));
    }
}

}
