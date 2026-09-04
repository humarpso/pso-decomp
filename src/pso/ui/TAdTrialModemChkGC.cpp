#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

int TAdTrialModemChkGC__vt4(void);
void TAdTrialModemChkGC__vt5(void);

int TAdSinglePlyChrSelectGC__sub_80132F2C(void*, void*);
int TKeyBoardControl__sub_8000F9CC(void*);

void TAdTrialModemChkGC__vt5(void) { TAdSinglePlyChrSelectGC__sub_80132F2C((void*)35, (void*)0); }
int TAdTrialModemChkGC__vt4(void) { return TKeyBoardControl__sub_8000F9CC((void*)(0)); }

}
#else
#if PSO_CLASS_PACKAGE == 0x803354A4
#include "types.h"

extern "C" {

void TAdTrialModemChkGC__sub_803354A4(void);
void check_modem_result__18TAdTrialModemChkGCFv(void);
int TAdTrialModemChkGC__sub_803354E8(void* p);
s32 TAdTrialModemChkGC__sub_8007FA24(s32);
s32 TLobby__sub_80145A94();
s32 TLobby__sub_8014797C();
int TLobby__sub_8022743C(void*);

void TAdTrialModemChkGC__sub_803354A4(void) {  }
void check_modem_result__18TAdTrialModemChkGCFv(void) {
    if (TLobby__sub_80145A94() != 0) {
        TLobby__sub_8014797C();
        TAdTrialModemChkGC__sub_8007FA24(0);
        return;
    }
    TAdTrialModemChkGC__sub_8007FA24(1);
}
int TAdTrialModemChkGC__sub_803354E8(void* p) { return TLobby__sub_8022743C(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80335508
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
struct Base_80335508 { char pad[0x18]; };
struct VObj_80335508 : Base_80335508 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
};

extern "C" {

void render__18TAdTrialModemChkGCFv(void *arg0);

void render__18TAdTrialModemChkGCFv(void *arg0) {
    struct VObj_80335508 *o = (struct VObj_80335508 *)arg0;
    o->m7();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80335580
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
struct Base_80335580 { char pad[0x18]; };
struct VObj_80335580 : Base_80335580 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
};

extern "C" {

void *__dt__18TAdTrialModemChkGCFv(void *arg0, s16 arg1);
void run_task__18TAdTrialModemChkGCFv(void *arg0);
void TAdWarningBaseGC__vt0(void *, int);
void __dl__7TObjectFPv(void *);

void run_task__18TAdTrialModemChkGCFv(void *arg0) {
    struct VObj_80335580 *o = (struct VObj_80335580 *)arg0;
    o->m6();
}

extern M2C_UNK __vt__18TAdTrialModemChkGC[];

void *__dt__18TAdTrialModemChkGCFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__18TAdTrialModemChkGC;
        TAdWarningBaseGC__vt0(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80335604
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TAdTrialModemChkGC__ct(void *arg0);
void TAdWarningBaseGC__ct(void *);

extern M2C_UNK __vt__18TAdTrialModemChkGC[];
extern void *lbl_805D4240;

void *TAdTrialModemChkGC__ct(void *arg0) {
    TAdWarningBaseGC__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__18TAdTrialModemChkGC;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D4240;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8042F080
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TAdTrialModemChkGC__sub_8042F080(s16 arg0);

extern u8 *lbl_805D7CC0;
extern u8 *lbl_805D7CC4;

s32 TAdTrialModemChkGC__sub_8042F080(s16 arg0) {
    M2C_FIELD(lbl_805D7CC4, s16 *, 0x1C2) = arg0;
    M2C_FIELD(lbl_805D7CC0, s32 *, 4) = (s32) (M2C_FIELD(lbl_805D7CC0, s32 *, 4) | 0x800);
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8042F0D4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TAdTrialModemChkGC__sub_8042F0D4(s8 arg0);

extern s32 lbl_805D7CA8;
extern u8 *lbl_805D7CC0;
extern u8 *lbl_805D7CC4;

s32 TAdTrialModemChkGC__sub_8042F0D4(s8 arg0) {
    if ((s32) lbl_805D7CA8 == 0) {
        return -1;
    }
    M2C_FIELD(lbl_805D7CC4, s8 *, 0x13D) = arg0;
    M2C_FIELD(lbl_805D7CC0, s32 *, 4) = (s32) (M2C_FIELD(lbl_805D7CC0, s32 *, 4) | 0x800);
    return 0;
}

}
#endif
#endif
