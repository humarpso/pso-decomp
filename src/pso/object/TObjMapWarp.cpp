#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_8019D4E4 { char pad[0x18]; };
struct VObj_8019D4E4 : Base_8019D4E4 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23();
    virtual void m24(); virtual void m25(); virtual void m26(); virtual void m27();
    virtual void m28(); virtual void m29(); virtual void m30();
    virtual s32 m31();
};

extern "C" {

u8 can_warp__11TObjMapWarpFiUs(s32 arg0, u16 arg1);
void *TPlayerBattleCtrl4P__sub_801BA74C(u32);
s32 check_flag_100__10TObjPlayerFPv();
s32 is_flag_400_set__10TObjPlayerFPv(void *);

extern s32 lbl_805D3458;
extern s32 lbl_805D55C0;

u8 can_warp__11TObjMapWarpFiUs(s32 arg0, u16 arg1) {
    void *var_r31;
    u32 id;

    id = arg1;
    var_r31 = NULL;
    if ((id != 0xFFFF) &&((var_r31 = TPlayerBattleCtrl4P__sub_801BA74C(id), ((var_r31 == NULL) != 0)) || (check_flag_100__10TObjPlayerFPv() != 0))) {
        return 0U;
    }
    if ((s32) lbl_805D3458 == 0) {
        return 0U;
    }
    if ((s32) lbl_805D55C0 != 0) {
        return 0U;
    }
    if ((var_r31 != NULL) && (((VObj_8019D4E4 *)var_r31)->m31() != 0)) {
        return 0U;
    }
    if (var_r31 != NULL) {
        return (u8) (is_flag_400_set__10TObjPlayerFPv(var_r31) == 0);
    }
    return 1U;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x80141C68
#include "types.h"

extern "C" {

s32 TObjMapWarp__sub_80141C68(s32 arg0, s16 arg1);
void TObjMapWarp__sub_80141CA4(void* p);
void TObjMapWarp__sub_80141CB0(void);
void TOTrapAncient02R__sub_80141CF0(void);
void TObjMapWarp__sub_80141CB4(void);
void TObjRoomId__sub_80141CF4(void);
int __dl__FPv();
void TObjMapWarp__sub_80141CB8(void);

s32 TObjMapWarp__sub_80141C68(s32 arg0, s16 arg1) {
    if ((arg0 != 0) && (arg1 > 0)) {
        __dl__FPv();
    }
    return arg0;
}
void TObjMapWarp__sub_80141CA4(void* p) { *(s32*)((char*)p + 0x0) = 0; }
void TObjMapWarp__sub_80141CB0(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80141CB4
#include "types.h"

extern "C" {

s32 TObjMapWarp__sub_80141C68(s32 arg0, s16 arg1);
int __dl__FPv();
void TObjMapWarp__sub_80141CA4(void* p);
void TObjMapWarp__sub_80141CB0(void);
void TObjMapWarp__sub_80141CB4(void);
void TObjMapWarp__sub_80141CB8(void);
void TOTrapAncient02R__sub_80141CF0(void);
void TObjRoomId__sub_80141CF4(void);

void TObjMapWarp__sub_80141CB4(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80141CB8
#include "types.h"

extern "C" {

s32 TObjMapWarp__sub_80141C68(s32 arg0, s16 arg1);
int __dl__FPv();
void TObjMapWarp__sub_80141CA4(void* p);
void TObjMapWarp__sub_80141CB0(void);
void TObjMapWarp__sub_80141CB4(void);
void TObjMapWarp__sub_80141CB8(void);
void TOTrapAncient02R__sub_80141CF0(void);
void TObjRoomId__sub_80141CF4(void);

void TObjMapWarp__sub_80141CB8(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8019D6F8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

struct Base_8019D6F8 { char pad[0x18]; };
struct VObj_8019D6F8 : Base_8019D6F8 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13();
};

void *__dt__11TObjMapWarpFv(void *arg0, s16 arg1);
M2C_UNK TObjWarpBase__vt0(void *, M2C_UNK);
M2C_UNK __dl__7TObjectFPv(void *);

extern M2C_UNK __vt__11TObjMapWarp[];

void *__dt__11TObjMapWarpFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        struct VObj_8019D6F8 *o = (struct VObj_8019D6F8 *)arg0;
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__11TObjMapWarp;
        o->m12();
        TObjWarpBase__vt0(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#endif
