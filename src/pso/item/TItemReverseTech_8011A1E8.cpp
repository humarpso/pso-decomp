#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void create__16TItemReverseTechFv(void);
void free__16TItemReverseTechFv(void);
M2C_UNK TItemReverseTech__ct(void *, s32);
int __dl__FPv(void*);
void * __nw__7TObjectFUl(M2C_UNK);
int fn_8023E700(void*);
int free__11TOBoss4RockFUi(void*);

extern s32 tl_01;

void create__16TItemReverseTechFv(void) {
    void *obj = __nw__7TObjectFUl(0x28);
    if (obj != 0) {
        TItemReverseTech__ct(obj, tl_01);
    }
}

    extern int TItemReverseTech__data_805D54D0;
    extern int lbl_805D54D4;
    extern int lbl_805D54D8;
void free__16TItemReverseTechFv(void) { fn_8023E700((void*)(TItemReverseTech__data_805D54D0)); free__11TOBoss4RockFUi((void*)(lbl_805D54D8)); lbl_805D54D8 = 0; free__11TOBoss4RockFUi((void*)(lbl_805D54D4)); lbl_805D54D4 = 0; __dl__FPv((void*)(TItemReverseTech__data_805D54D0)); TItemReverseTech__data_805D54D0 = 0; }

}
