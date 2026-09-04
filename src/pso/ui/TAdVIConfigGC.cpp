#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_field48_clear_global__13TAdVIConfigGCFPv(void *arg0);
void enable_progressive_mode__13TAdVIConfigGCFv(void);
int fn_8037BC54(void);
int fn_8037C11C(void*);
int fn_8037C8B8(void);

extern s32 lbl_805D4090;

void set_field48_clear_global__13TAdVIConfigGCFPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x48) = 1;
    lbl_805D4090 = 0;
}

    int OSSetProgressiveMode(void*);
    extern unsigned char lbl_804F4F98[];
    extern int lbl_805D7734;
void enable_progressive_mode__13TAdVIConfigGCFv(void) { OSSetProgressiveMode((void*)1); lbl_805D7734 = (int)lbl_804F4F98; fn_8037C11C(lbl_804F4F98); fn_8037C8B8(); fn_8037BC54(); fn_8037BC54(); }

}
#else
#if PSO_CLASS_PACKAGE == 0x80248B8C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 draw_with_layer__13TAdVIConfigGCFiii(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK TAdVIConfigGC__sub_80267704(M2C_UNK);
s32 TWindowSubStatusDisp__sub_80248BE8(s32, s32, s32);

s32 draw_with_layer__13TAdVIConfigGCFiii(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r31;

    TAdVIConfigGC__sub_80267704(0x23);
    temp_r31 = TWindowSubStatusDisp__sub_80248BE8(arg0, arg1, arg2);
    TAdVIConfigGC__sub_80267704(3);
    return temp_r31;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80307DEC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 allow_rendering__7TObjectFv(u32);
s32 __dl__FPv(void *);
s32 clear_flag4_bit4__22TQuestVmDownLoadServerFPv(void *);
s32 TWindow__close(u32);
s32 get_field_14__13TAdVIConfigGCFPv(void* p);

s32 get_field_14__13TAdVIConfigGCFPv(void* p) { return *(s32*)((char*)p + 0x14); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80307E74
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 allow_rendering__7TObjectFv(u32);
s32 __dl__FPv(void *);
s32 clear_flag4_bit4__22TQuestVmDownLoadServerFPv(void *);
s32 TWindow__close(u32);
s32 get_field_14__13TAdVIConfigGCFPv(void* p);

void *destroy__13TAdVIConfigGCFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x24) != 0U) {
            clear_flag4_bit4__22TQuestVmDownLoadServerFPv(M2C_FIELD(arg0, void **, 0x24));
            allow_rendering__7TObjectFv(M2C_FIELD(arg0, u32 *, 0x24));
            TWindow__close(M2C_FIELD(arg0, u32 *, 0x24));
            M2C_FIELD(arg0, u32 *, 0x24) = 0U;
        }
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80307EE0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 *init__13TAdVIConfigGCFPvf(u8 *arg0, f32 farg0);
M2C_UNK TAdVIConfigGC__sub_80307D00(void *);
s32 get_field_14__13TAdVIConfigGCFPv(void* p);
s32 TLobby__sub_801B0974();
s32 TWindow__close(u32);
M2C_UNK VecCopy__FP3VecPC3Vec(void *);
s32 __dl__FPv(void *);
s32 allow_rendering__7TObjectFv(u32);
s32 clear_flag4_bit4__22TQuestVmDownLoadServerFPv(void *);
M2C_UNK memset(void *, int, int);

#include "types.h"
extern "C" {

u8 *init__13TAdVIConfigGCFPvf(u8 *arg0, f32 farg0) {
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 8));
    M2C_FIELD(arg0, f32 *, 0) = (f32) (farg0 * farg0);
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    memset((void *) (arg0 + 0x28), (int) (0), (int) (0x60));
    M2C_FIELD(arg0, s32 *, 4) = TLobby__sub_801B0974();
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    TAdVIConfigGC__sub_80307D00((void *) (arg0));
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    return arg0;
}

}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80307F6C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
struct Base_80307F6C { char pad[0x18]; };
struct VObj_80307F6C : Base_80307F6C {
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
};

extern "C" {

void render__13TAdVIConfigGCFv(void *arg0);

void render__13TAdVIConfigGCFv(void *arg0) {
    struct VObj_80307F6C *o = (struct VObj_80307F6C *)arg0;
    o->m10();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80307FEC
#include "types.h"

extern "C" {

int TAdSinglePlyChrSelectGC__sub_80132F2C(void*, void*);
int disable_progressive_mode__13TAdVIConfigGCFv(void);
int OSSetProgressiveMode(void*);

int disable_progressive_mode__13TAdVIConfigGCFv(void) { return OSSetProgressiveMode((void*)(0)); }
void TAdVIConfigGC__vt8(void) { TAdSinglePlyChrSelectGC__sub_80132F2C((void*)29, (void*)0); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x803080B0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
struct Base_803080B0 { char pad[0x18]; };
struct VObj_803080B0 : Base_803080B0 {
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
};

extern "C" {

void *__dt__13TAdVIConfigGCFv(void *arg0, s16 arg1);
void run_task__13TAdVIConfigGCFv(void *arg0);
void TAdYesNoBaseGC__vt0(void *, int);
void __dl__7TObjectFPv(void *);

void run_task__13TAdVIConfigGCFv(void *arg0) {
    struct VObj_803080B0 *o = (struct VObj_803080B0 *)arg0;
    o->m9();
}

extern M2C_UNK __vt__13TAdVIConfigGC[];

void *__dt__13TAdVIConfigGCFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TAdVIConfigGC;
        TAdYesNoBaseGC__vt0(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80308134
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TAdVIConfigGC__ct(void *arg0);
void set_field_2c__13TAdVIConfigGCFPvi(void *, int);
void TAdYesNoBaseGC__ct(void *);

extern M2C_UNK __vt__13TAdVIConfigGC[];
extern void *lbl_805D4094;

void *TAdVIConfigGC__ct(void *arg0) {
    TAdYesNoBaseGC__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TAdVIConfigGC;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D4094;
    set_field_2c__13TAdVIConfigGCFPvi(arg0, 0);
    M2C_FIELD(arg0, u32 *, 0x48) = 0;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80308200
#include "types.h"

extern "C" {

s32 fn_80308294(u32 a0 = 0, s32 a1 = 0);
u32 TLobby__sub_80101AB0(void);
void TAdYesNoBaseGC__vt4(void);
void TAdYesNoBaseGC__vt5(void);
void set_field_2c__13TAdVIConfigGCFPvi(void* p, s32 v);

void set_field_2c__13TAdVIConfigGCFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x2c) = v; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80308208
#include "types.h"

extern "C" {

s32 fn_80308294(u32 a0 = 0, s32 a1 = 0);
u32 TLobby__sub_80101AB0(void);
void TAdYesNoBaseGC__vt4(void);
void TAdYesNoBaseGC__vt5(void);
void set_field_2c__13TAdVIConfigGCFPvi(void* p, s32 v);

void apply_config_if_valid__13TAdVIConfigGCFii(s32 arg0, s32 arg1) {
    u32 temp_r3 = TLobby__sub_80101AB0();
    if (temp_r3 != 0U) {
        fn_80308294(temp_r3, arg1);
    }
}

}
#endif
#endif
