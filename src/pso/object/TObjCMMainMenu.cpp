#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

void TObjCMMainMenu__vt7(void);

void TObjCMMainMenu__vt7(void) {  }

}
#else
#if PSO_CLASS_PACKAGE == 0x8028DA4C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void select_char_menu__14TObjCMMainMenuFv(void);
M2C_UNK TObjCMMainMenu__sub_8028DA0C(s32);
s32 get_char_index__23TAdSinglePlyChrSelectGCFUi(M2C_UNK);

void select_char_menu__14TObjCMMainMenuFv(void) {
    TObjCMMainMenu__sub_8028DA0C(get_char_index__23TAdSinglePlyChrSelectGCFUi(0xFFFF) + 0x370);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8028DB88
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *get_char_index__23TAdSinglePlyChrSelectGCFUi(s32);
int fn_8028DBC4(void* a0 = 0);
int TAdSinglePlyChrSelectGC__sub_8028DC1C(void* p);
int TAdSinglePlyChrSelectGC__sub_8028DC14(void);

s32 get_current_char_flag__14TObjCMMainMenuFv(void) {
    s32 x = (s8) M2C_FIELD(get_char_index__23TAdSinglePlyChrSelectGCFUi(0xFFFF), u8 *, 0x3A0);
    return (u32) __cntlzw(-1 - x) >> 5;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8028EC34
#include "types.h"

extern "C" {

void TObjCMMainMenu__sub_8028EC34(void);

    extern int lbl_805D652C;
void TObjCMMainMenu__sub_8028EC34(void) { lbl_805D652C = 0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80291D44
#include "types.h"

extern "C" {

int TObjCMMainMenu__sub_80291D44(void);

    extern int lbl_805D6598;
int TObjCMMainMenu__sub_80291D44(void) {  return lbl_805D6598; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8029427C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void * create_fade__14TObjCMMainMenuFPvPv(void *arg0, void *arg1);
void *__ct__12TChCrEffFadeFv(void *, int, void *, void *);
void *__nw__7TObjectFUl(int);

void * create_fade__14TObjCMMainMenuFPvPv(void *arg0, void *arg1) {
    void *o;
    o = __nw__7TObjectFUl(0x30);
    if (o != NULL) {
        o = __ct__12TChCrEffFadeFv(o, -1, arg0, arg1);
    }
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802942D0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void * create_fade_effect__14TObjCMMainMenuFPvPv(void *arg0, void *arg1);
void *__ct__12TChCrEffFadeFv(void *, int, void *, void *);
void *__nw__7TObjectFUl(int);

void * create_fade_effect__14TObjCMMainMenuFPvPv(void *arg0, void *arg1) {
    void *o;
    o = __nw__7TObjectFUl(0x30);
    if (o != NULL) {
        o = __ct__12TChCrEffFadeFv(o, 1, arg0, arg1);
    }
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80298310
#include "types.h"

extern "C" {

void TObjCMMainMenu__sub_80298310(void);

void TObjCMMainMenu__sub_80298310(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8029862C
#include "types.h"

extern "C" {

void TObjCMMainMenu__vt1(void);

void TObjCMMainMenu__vt1(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80298A88
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_80298AD0 { char pad[0x18]; };
struct VObj_80298AD0 : Base_80298AD0 { virtual void m0(int); };

extern "C" {

void *create__14TObjCMMainMenuFPv(void *arg0);
void *destroy__14TObjCMMainMenuFPvs(void *arg0, s16 arg1);
void *TObjCMMainMenu__ct(void *, void *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__7TObjectFv(void *, M2C_UNK);
void *__nw__7TObjectFUl(int);

void *create__14TObjCMMainMenuFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x58);
    if (o != NULL) {
        o = TObjCMMainMenu__ct(o, arg0);
    }
    return o;
}

extern M2C_UNK lbl_804DBDA8[];

void *destroy__14TObjCMMainMenuFPvs(void *arg0, s16 arg1) {
    void *temp_r3;
    void *temp_r5;

    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804DBDA8;
        temp_r3 = M2C_FIELD(arg0, void **, 0x50);
        if (temp_r3 != NULL) {
            if (temp_r3 != NULL) {
                ((VObj_80298AD0 *)temp_r3)->m0(1);
            }
            M2C_FIELD(arg0, void **, 0x50) = NULL;
        }
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), s32 *, 0x18) = -1;
        temp_r5 = M2C_FIELD(arg0, void **, 0x1C);
        M2C_FIELD(temp_r5, s8 *, 0x33) = 2;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#endif
