#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

void update_state3__10TBoss4ZakoFPv(void* p);
int set_state3__10TBoss4ZakoFPv(void*);

void update_state3__10TBoss4ZakoFPv(void* p) { if (*(int*)((char*)p + 0x374) != 3) { set_state3__10TBoss4ZakoFPv(p); } }

}
#else
#if PSO_CLASS_PACKAGE == 0x8005C450
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void TBoss4Zako__vt4(void *arg0);
void TBoss4Zako__sub_8005C218(void *);
void TBoss4Zako__sub_8005C368(void *);
void TBoss4Zako__sub_803D8910(void *, void *);
void VecCopy__FP3VecPC3Vec(void *, void *);

struct VOff_8005C450_arg0 { char pad_0[0x38]; char f_38[1]; };

void TBoss4Zako__vt4(void *arg0) {
    struct VOff_8005C450_arg0 *self = (struct VOff_8005C450_arg0 *)arg0;
    TBoss4Zako__sub_8005C368(arg0);
    TBoss4Zako__sub_8005C218(arg0);
    VecCopy__FP3VecPC3Vec((void *)((char *)arg0 + 68), self->f_38);
    TBoss4Zako__sub_803D8910(self->f_38, (void *)((char *)arg0 + 908));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8005CAE0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_state3__10TBoss4ZakoFPv(void *arg0);
M2C_UNK TBoss4Uro__sub_8005D6D4(s32);

void set_state3__10TBoss4ZakoFPv(void *arg0) {
    TBoss4Uro__sub_8005D6D4(M2C_FIELD(arg0, s32 *, 0x378));
    M2C_FIELD(arg0, s32 *, 0x3A8) = 0;
    M2C_FIELD(arg0, s32 *, 0x374) = 3;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8005CEAC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss4Zako__vt0(u8 *arg0);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);

extern const f32 lbl_805D8CC8;
extern const f32 TBoss4Zako__data_805D8D24;

void TBoss4Zako__vt0(u8 *arg0) {
    f32 temp_f0;
    f32 temp_f2;

    VecCopy__FP3VecPC3Vec(arg0 + 0x44, arg0 + 0x38);
    temp_f2 = M2C_FIELD(arg0, f32 *, 0x3C);
    if (temp_f2 < lbl_805D8CC8) {
        temp_f0 = temp_f2 + TBoss4Zako__data_805D8D24;
        M2C_FIELD(arg0, f32 *, 0x3C) = temp_f0;
        if (temp_f0 > lbl_805D8CC8) {
            M2C_FIELD(arg0, f32 *, 0x3C) = (f32) lbl_805D8CC8;
            M2C_FIELD(arg0, s32 *, 0x374) = 1;
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8005D2E0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__dt__10TBoss4ZakoFPvs(void *arg0, s16 arg1);
M2C_UNK request_destroy__11TBoss4Type2FUi(void *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__9TObjEnemyFv(void *, M2C_UNK);
M2C_UNK TObjEneGibbles__sub_80156720(void *);

extern M2C_UNK lbl_804876F8[];

void *__dt__10TBoss4ZakoFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804876F8;
        TObjEneGibbles__sub_80156720(arg0);
        M2C_FIELD(arg0, s32 *, 0x384) = 0;
        if ((u32) M2C_FIELD(arg0, u32 *, 0x3B4) != 0U) {
            request_destroy__11TBoss4Type2FUi(M2C_FIELD(arg0, void **, 0x3B4));
            M2C_FIELD(arg0, u32 *, 0x3B4) = 0U;
        }
        __dt__9TObjEnemyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8005D630
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 create__10TBoss4ZakoFi(s32 arg0);
s32 TBoss4Zako__ct(s32, s32, s32);
s32 TObjControl__ct(s32, s32);
s32 __nw__7TObjectFUl(M2C_UNK);

extern s32 tl_04;

s32 create__10TBoss4ZakoFi(s32 arg0) {
    s32 var_r31;
    s32 var_r4;

    var_r31 = __nw__7TObjectFUl(0x3C4);
    if (var_r31 != 0) {
        var_r4 = __nw__7TObjectFUl(0x20);
        if (var_r4 != 0) {
            var_r4 = TObjControl__ct(var_r4, tl_04);
        }
        var_r31 = TBoss4Zako__ct(var_r31, var_r4, arg0);
    }
    return var_r31;
}

}
#endif
#endif
