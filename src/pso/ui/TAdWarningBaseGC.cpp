#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TAdWarningBaseGC__vt0(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void queue_destruction__7TObjectFv(void *);

extern M2C_UNK __vt__16TAdWarningBaseGC[];

void *TAdWarningBaseGC__vt0(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TAdWarningBaseGC;
        if (M2C_FIELD(arg0, void **, 0x2C) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x2C)); M2C_FIELD(arg0, M2C_UNK *, 0x2C) = 0; }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x8032CE1C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TAdWarningBaseGC__sub_8032CE1C(void *arg0);

extern s32 lbl_805D6CE8;
extern s32 lbl_805D6CF4;

void TAdWarningBaseGC__sub_8032CE1C(void *arg0) {
    if ((s32) lbl_805D6CF4 == 0) {
        M2C_FIELD(arg0, s32 *, 0x1C) = 3;
        lbl_805D6CE8 = 1;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8032CEA8
#include "types.h"

extern "C" {

void TAdWarningBaseGC__sub_8032CEA8(void* p);

void TAdWarningBaseGC__sub_8032CEA8(void* p) { *(s32*)((char*)p + 0x1c) = 1; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8032D0B8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TAdWarningBaseGC__sub_8032D0B8(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

extern M2C_UNK lbl_804EDBD0[];

void *TAdWarningBaseGC__sub_8032D0B8(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804EDBD0;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8032D110
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *init_vtable__16TAdWarningBaseGCFPv(void *arg0);
void __ct__7TObjectFP7TObject(void *);

extern M2C_UNK lbl_804EDBD0[];

void *init_vtable__16TAdWarningBaseGCFPv(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804EDBD0;
    M2C_FIELD(arg0, u32 *, 0x1C) = 0;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8032D154
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void create__16TAdWarningBaseGCFv(void);
void* init_vtable__16TAdWarningBaseGCFPv(void*, s32);
void* __nw__7TObjectFUl(u32);

extern s32 tl_00;

void create__16TAdWarningBaseGCFv(void) {
    void* obj = __nw__7TObjectFUl(0x20);
    if (obj != 0) {
        init_vtable__16TAdWarningBaseGCFPv(obj, tl_00);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8032D188
#include "types.h"

extern "C" {

void TAdWarningBaseGC__sub_8032D188(void);

    extern int lbl_805D6CE0;
    extern int lbl_805D6CE4;
    extern int lbl_805D6CE8;
    extern int lbl_805D6CEC;
    extern int lbl_805D6CF0;
void TAdWarningBaseGC__sub_8032D188(void) { lbl_805D6CE4 = 0; lbl_805D6CE0 = 0; lbl_805D6CEC = 0; lbl_805D6CE8 = 0; lbl_805D6CF0 = 0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8032D1A4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_heap__16TAdWarningBaseGCFv(void);
s32 TLobby__sub_8037F1C8(M2C_UNK);

extern s32 lbl_805D6CE0;
extern s32 lbl_805D6CE4;
extern s32 lbl_805D6CE8;
extern s32 lbl_805D6CEC;
extern s32 lbl_805D6CF0;

void init_heap__16TAdWarningBaseGCFv(void) {
    lbl_805D6CE4 = 0x80000;
    lbl_805D6CE0 = TLobby__sub_8037F1C8(0x80000);
    lbl_805D6CEC = 0;
    lbl_805D6CE8 = 0;
    lbl_805D6CF0 = 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8032D1E4
#include "types.h"

extern "C" {

void TAdWarningBaseGC__sub_8032D1E4(void);

    extern int lbl_805D6CF4;
void TAdWarningBaseGC__sub_8032D1E4(void) { lbl_805D6CF4 = 0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8032D48C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TAdWarningBaseGC__ct(void *arg0);
void *__ct__12TAdBackTxtGCFv(void *, void *);
void __ct__7TObjectFP7TObject(void *);
void *__ct__9TAdBackGCFv(void *, void *);
void *__nw__7TObjectFUl(int);

extern M2C_UNK __vt__16TAdWarningBaseGC[];
extern void *lbl_805D4208;

void *TAdWarningBaseGC__ct(void *arg0) {
    void *o;
    void *o2;
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TAdWarningBaseGC;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D4208;
    M2C_FIELD(arg0, u32 *, 0x28) = 0;
    M2C_FIELD(arg0, u32 *, 0x1C) = 0;
    M2C_FIELD(arg0, u32 *, 0x24) = 0;
    M2C_FIELD(arg0, u32 *, 0x2C) = 0;
    o = __nw__7TObjectFUl(0x24);
    if (o != NULL) {
        __ct__9TAdBackGCFv(o, arg0);
    }
    o2 = __nw__7TObjectFUl(0x28);
    if (o2 != NULL) {
        __ct__12TAdBackTxtGCFv(o2, arg0);
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8032D550
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render__16TAdWarningBaseGCFi(s32 arg0);
M2C_UNK set_global_param__8TObjFishFi(u32);
M2C_UNK TWindowSubComCard__sub_803DEECC(s32, f32);
M2C_UNK TWindowSubStatusDisp__sub_803DEE6C(M2C_UNK);
M2C_UNK get_player__20TWindowSubStatusDispFv();
M2C_UNK TWindowSubStatusDisp__sub_803DF160(M2C_UNK, M2C_UNK);

extern u32 lbl_805D6D00;
extern f32 lbl_805DF7C0;

void render__16TAdWarningBaseGCFi(s32 arg0) {
    if ((u32) lbl_805D6D00 != 0U) {
        set_global_param__8TObjFishFi(lbl_805D6D00);
        TWindowSubStatusDisp__sub_803DEE6C(1);
        TWindowSubStatusDisp__sub_803DF160(0, -1);
        TWindowSubComCard__sub_803DEECC(arg0 + 0x1C, lbl_805DF7C0);
        get_player__20TWindowSubStatusDispFv();
    }
}

}
#endif
#endif
