#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void try_enter_state_3__11TBoss4BishiFPv(void* p);
void *__dt_deleting__11TBoss4BishiFPvs(void *arg0, s16 arg1);
int enter_state_3__11TBoss4BishiFPv(void*);
void __dt__10TBoss4ZakoFPvs(void *, int);
void __dl__7TObjectFPv(void *);
int fn_800F6B68(void*);

void try_enter_state_3__11TBoss4BishiFPv(void* p) { if (*(int*)((char*)p + 0x374) != 3) { fn_800F6B68(p); enter_state_3__11TBoss4BishiFPv(p); } }

extern M2C_UNK lbl_80487460[];

void *__dt_deleting__11TBoss4BishiFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80487460;
        __dt__10TBoss4ZakoFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
