#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void reset_parts__13TBoss2DeRolLeFv(void);
void *create__13TBoss2DeRolLeFPv(void *arg0);
void *TBoss2DeRolLe__ct(void *, void *, void *);
M2C_UNK TBoss2Mine__sub_80038D84();
void *__nw__7TObjectFUl(int);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK TObjPlayer__sub_8002E784();
M2C_UNK TObjPlayer__sub_8002EB88();
M2C_UNK TBoss2Fin__sub_800367C0();
M2C_UNK TBoss2Tentacle__sub_8003A0A8();

extern u32 lbl_805D4BA4;

void reset_parts__13TBoss2DeRolLeFv(void) {
    TObjPlayer__sub_8002E784();
    TObjPlayer__sub_8002EB88();
    TBoss2Fin__sub_800367C0();
    TBoss2Mine__sub_80038D84();
    TBoss2Tentacle__sub_8003A0A8();
    if ((u32) lbl_805D4BA4 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D4BA4, 1);
        lbl_805D4BA4 = 0U;
    }
}

extern void *tl_04;

void *create__13TBoss2DeRolLeFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x75C);
    if (o != NULL) {
        o = TBoss2DeRolLe__ct(o, tl_04, arg0);
    }
    return o;
}

}
