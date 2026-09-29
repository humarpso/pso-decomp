#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Obj_800E4554 { u8 pad0[0x1C]; u16 f1C; u8 pad1E[0xE]; s16 f2C; u8 pad2E[0x42C - 0x2E]; u16 slots[8]; };

extern "C" {
void spawn_mirages__21TObjEneMe3ShinowaRealFPv(void* p);
M2C_UNK TObjEneMe3Shinowa__sub_800E7250();
void TObjEneMe3ShinowaReal__sub_800E45D4(u8 *arg0);
void TObjEneDD__sub_800BBA18(void *, s16);
void TObjEneMe3ShinowaReal__sub_800E45D4(u8 *arg0);
void TObjEneMe3ShinowaReal__vt105(u8 *arg0);
s32 create__23TObjEneMe3ShinowaMirageFPvPvPv(void *, s32, s32, s32);
s32 TPhotonMylla__sub_80154CB4(s32);
u16 obj_getField1c();
s32 TObjEneMe3ShinowaReal__sub_800E4554(Obj_800E4554 *arg0, s32 arg1);
}

extern "C" {

u16 TObjEneMe3ShinowaReal__sub_800E45CC(void* p);
void TObjEneMe3ShinowaReal__vt109(void* p);
void TObjEneMe3ShinowaReal__vt60(void* p);
void TObjEneMe3ShinowaReal__vt61(void* p);
void *__dt__21TObjEneMe3ShinowaRealFv(void *arg0, s16 arg1);
void *create__21TObjEneMe3ShinowaRealFPv(void *arg0);
void spawn_mirages__21TObjEneMe3ShinowaRealFPv(void* p);
void *TObjEneMe3ShinowaReal__ct(void *, void *, void *);
int TObjEneMe3Shinowa__vt60(void*);
int TObjEneMe3Shinowa__vt61(void*);
void __dl__7TObjectFPv(void *);
void __dt__17TObjEneMe3ShinowaFv(void *, int);
void *__nw__7TObjectFUl(int);
int init_mirage__23TObjEneMe3ShinowaMirageFPv(void);

void spawn_mirages__21TObjEneMe3ShinowaRealFPv(void* p) { { int i; for (i = 0; i < 4; i++) { TObjEneMe3ShinowaReal__sub_800E4554((Obj_800E4554 *)((void*)(p)), (s32)((void*)((void*)i))); init_mirage__23TObjEneMe3ShinowaMirageFPv(); } } }
void TObjEneMe3ShinowaReal__vt109(void* p) { TObjEneMe3ShinowaReal__sub_800E45D4((u8 *)((void*)(p))); }

void TObjEneMe3ShinowaReal__vt105(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x3D8) = (s32) (M2C_FIELD(arg0, s32 *, 0x3D8) + 1);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x3D8) >= 2) {
        TObjEneMe3ShinowaReal__sub_800E45D4((u8 *)(arg0));
        TObjEneDD__sub_800BBA18(arg0, 7);
        return;
    }
    TObjEneDD__sub_800BBA18(arg0, 4);
}

s32 TObjEneMe3ShinowaReal__sub_800E4554(Obj_800E4554 *arg0, s32 arg1) {
    s32 r;
    if (arg0->slots[arg1] == 0xFFFF) {
        u16 t = arg0->f1C;
        s32 n = arg1 + 1;
        r = create__23TObjEneMe3ShinowaMirageFPvPvPv(arg0, (u16)(t + n), arg0->f2C + n, t);
        if (r != 0) {
            arg0->slots[arg1] = obj_getField1c();
        }
    } else {
        r = TPhotonMylla__sub_80154CB4(arg0->slots[arg1]);
    }
    return r;
}

u16 TObjEneMe3ShinowaReal__sub_800E45CC(void* p) { return *(u16*)((char*)p + 0x38c); }

void TObjEneMe3ShinowaReal__sub_800E45D4(u8 *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x3C4) & 0x10) {
        TObjEneMe3Shinowa__sub_800E7250();
        spawn_mirages__21TObjEneMe3ShinowaRealFPv((void*)((void *) (arg0)));
    }
}

void TObjEneMe3ShinowaReal__vt60(void* p) { TObjEneMe3ShinowaReal__sub_800E45D4((u8 *)((void*)(p))); TObjEneMe3Shinowa__vt60(p); }
void TObjEneMe3ShinowaReal__vt61(void* p) { TObjEneMe3ShinowaReal__sub_800E45D4((u8 *)((void*)(p))); TObjEneMe3Shinowa__vt61(p); }

extern M2C_UNK __vt__21TObjEneMe3ShinowaReal[];

void *__dt__21TObjEneMe3ShinowaRealFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__21TObjEneMe3ShinowaReal;
        __dt__17TObjEneMe3ShinowaFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern void *tl_04;

void *create__21TObjEneMe3ShinowaRealFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x434);
    if (o != NULL) {
        o = TObjEneMe3ShinowaReal__ct(o, tl_04, arg0);
    }
    return o;
}

}
