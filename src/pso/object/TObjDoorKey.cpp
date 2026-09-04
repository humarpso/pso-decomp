#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
struct Base_8018FF74 { char pad[0x18]; };
struct VObj_8018FF74 : Base_8018FF74 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17();
    virtual void m18();
    virtual void m19();
    virtual void m20();
    virtual void m21();
    virtual void m22();
};
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__dt__11TObjDoorKeyFv(void *arg0, s16 arg1);
void run_task__11TObjDoorKeyFv(void *arg0);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__5TOKeyFv(void *, M2C_UNK);
M2C_UNK TObjPlayer__sub_80154A00(void *);
M2C_UNK TObjEneGibbles__sub_80156720(void *);
M2C_UNK queue_destruction__7TObjectFv(void *);

void run_task__11TObjDoorKeyFv(void *arg0) {
    struct VObj_8018FF74 *o = (struct VObj_8018FF74 *)arg0;
    o->m22();
}

extern M2C_UNK __vt__11TObjDoorKey[];

void *__dt__11TObjDoorKeyFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__11TObjDoorKey;
        TObjPlayer__sub_80154A00(arg0);
        TObjEneGibbles__sub_80156720(arg0);
        if ((u32) M2C_FIELD(arg0, u32 *, 0xF8) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0xF8));
            M2C_FIELD(arg0, u32 *, 0xF8) = 0U;
        }
        __dt__5TOKeyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x8018FAEC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjDoorKey__sub_8018FAEC(void);
void *fn_8018FA6C();

void TObjDoorKey__sub_8018FAEC(void) {
    void *temp_r3;

    temp_r3 = fn_8018FA6C();
    if (temp_r3 != NULL) {
        M2C_FIELD(temp_r3, s32 *, 0xE8) = 1;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8018FB1C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct TObjDoorKeyBase { char pad[0x18]; };
struct TObjDoorKeyVObj : TObjDoorKeyBase {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual s32 m8(f32, f32);
};

extern "C" {

void render__11TObjDoorKeyFv(void *arg0);
M2C_UNK TObjDoorKey__sub_8018FBB8(void *);
M2C_UNK TObjDoorKey__sub_8018FCD8(void *);
M2C_UNK clear_active_flag__13TParticleCtrlFPv(void *);
M2C_UNK enable__13TParticleCtrlFPv(void *);

extern const f32 lbl_805DBE00;
extern const f32 lbl_805DBE04;

void render__11TObjDoorKeyFv(void *arg0) {
    s32 temp_r0;

    if (((TObjDoorKeyVObj*)arg0)->m8(lbl_805DBE00, lbl_805DBE04) == 0) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0xF8) != 0U) {
            enable__13TParticleCtrlFPv(M2C_FIELD(arg0, void **, 0xF8));
        }
    } else {
        if ((u32) M2C_FIELD(arg0, u32 *, 0xF8) != 0U) {
            clear_active_flag__13TParticleCtrlFPv(M2C_FIELD(arg0, void **, 0xF8));
        }
        temp_r0 = M2C_FIELD(arg0, s32 *, 0xD4);
        switch (temp_r0) {
        case 0:
            TObjDoorKey__sub_8018FCD8(arg0);
            return;
        case 1:
            TObjDoorKey__sub_8018FBB8(arg0);
            return;
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8018FE40
#include "types.h"

extern "C" {

void TObjDoorKey__vt17(void);
int TObjDoorKey__vt15(void* p);
int TObjDoorKey__vt22(void* p);
int TOKey__sub_8016A960(void*);
int TObjPlayer__sub_801B4A18(void*, int);

void TObjDoorKey__vt17(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8018FF30
#include "types.h"

extern "C" {

void TObjDoorKey__vt17(void);
int TObjDoorKey__vt15(void* p);
int TObjDoorKey__vt22(void* p);
int TOKey__sub_8016A960(void*);
int TObjPlayer__sub_801B4A18(void*, int);

int TObjDoorKey__vt15(void* p) { return TObjPlayer__sub_801B4A18(p, -1); }
int TObjDoorKey__vt22(void* p) { return TOKey__sub_8016A960(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80190130
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjDoorKey__create(void *arg0);
void *TObjDoorKey__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *TObjDoorKey__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xFC);
    if (o != NULL) {
        o = TObjDoorKey__ct(o, tl_05, arg0);
    }
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8019017C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_key__11TObjDoorKeyFv(void);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK free_if_valid__10TObjPlayerFi(s32);

extern u32 lbl_805D5BF8;
extern s32 TObjDoorKey__data_805D5BFC;
extern s32 TObjDoorKey__data_805D5C04;

void free_key__11TObjDoorKeyFv(void) {
    if ((u32) lbl_805D5BF8 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D5BF8, 1);
        lbl_805D5BF8 = 0U;
    }
    free_if_valid__10TObjPlayerFi(TObjDoorKey__data_805D5BFC);
    TObjDoorKey__data_805D5BFC = 0;
    TObjDoorKey__data_805D5C04 = 0;
}

}
#endif
#endif
