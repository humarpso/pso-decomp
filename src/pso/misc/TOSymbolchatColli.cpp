#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_state__17TOSymbolchatColliFPv(void *arg0);

u8 TODoorAncient08__sub_80229220(u16);

s32 get_state__17TOSymbolchatColliFPv(void *arg0) {
    if (TODoorAncient08__sub_80229220(M2C_FIELD(arg0, u16 *, 0x37C)) == 1) {
        return 3;
    }
    if (TODoorAncient08__sub_80229220(M2C_FIELD(arg0, u16 *, 0x37A)) == 1) {
        return 2;
    }
    return (u32) __cntlzw(1 - TODoorAncient08__sub_80229220(M2C_FIELD(arg0, u16 *, 0x378))) >> 5;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x8017895C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create__17TOSymbolchatColliFPv(void *arg0);
void free_rock__17TOSymbolchatColliFv(void);
int free__11TOBoss4RockFUi(void*);
void *TOSymbolchatColli__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *create__17TOSymbolchatColliFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x384);
    if (o != NULL) {
        o = TOSymbolchatColli__ct(o, tl_05, arg0);
    }
    return o;
}

    extern int lbl_805D5AC8;
void free_rock__17TOSymbolchatColliFv(void) { free__11TOBoss4RockFUi((void*)(lbl_805D5AC8)); lbl_805D5AC8 = 0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80178A6C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__dt__17TOSymbolchatColliFv(void *arg0, s16 arg1);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK destroy_motion_object__10TObjPlayerFPvs(void *, M2C_UNK);
M2C_UNK TObjPlayer__sub_80154A00(M2C_UNK *);
M2C_UNK TObjEneGibbles__sub_80156720(void *);

extern M2C_UNK __vt__17TOSymbolchatColli[];

void *__dt__17TOSymbolchatColliFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TOSymbolchatColli;
        TObjPlayer__sub_80154A00((M2C_UNK *)arg0);
        TObjEneGibbles__sub_80156720(arg0);
        destroy_motion_object__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#endif
