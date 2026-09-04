#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void play_open_sound__15TWindowSnapShotFPv(void *arg0);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);

void play_open_sound__15TWindowSnapShotFPv(void *arg0) {
    TBoss3Volopt__sub_8022675C(0x52F16, 0, 0, 0);
    M2C_FIELD(arg0, u8 *, 0x60) = (u8) (M2C_FIELD(arg0, u8 *, 0x60) | 1);
}

}
#else
#if PSO_CLASS_PACKAGE == 0x802A5D68
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
int TWindowSnapShot__sub_802A5D28(void* a0 = 0);

u32 alloc_buffer__11TOBoss4RockFPv();
s32 set_mode__15TWindowSnapShotFPvi(void *, s32);
s32 get_buffer_size__15TWindowSnapShotFPv();
s32 TGStream__sub_800FDADC(s32, s32);
s32 TWindowSnapShot__sub_802A605C(void *);
s32 TLobby__sub_800FD944(s32);
void fn_802A5CB8(void* p);

s32 alloc_buffer__15TWindowSnapShotFPv(void *arg0) {
    get_buffer_size__15TWindowSnapShotFPv();
    M2C_FIELD(arg0, u32 *, 8) = alloc_buffer__11TOBoss4RockFPv();
    if ((u32) M2C_FIELD(arg0, u32 *, 8) == 0U) {
        set_mode__15TWindowSnapShotFPvi(arg0, 4);
        return 0;
    }
    return 1;
}
s32 open_stream__15TWindowSnapShotFPvi(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xC) = TGStream__sub_800FDADC(arg1, M2C_FIELD(arg0, s32 *, 8));
    if (TWindowSnapShot__sub_802A605C(arg0) == 0) {
        set_mode__15TWindowSnapShotFPvi(arg0, 2);
        TWindowSnapShot__sub_802A5D28((void*)(arg0));
        return 0;
    }
    return 1;
}
s32 init__15TWindowSnapShotFPvi(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xC) = TLobby__sub_800FD944(arg1);
    if (TWindowSnapShot__sub_802A605C(arg0) == 0) {
        set_mode__15TWindowSnapShotFPvi(arg0, 1);
        return 0;
    }
    return 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802A5E84
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void reset__15TWindowSnapShotFPv(u8 *arg0);
s32 TGStream__sub_800FDADC(s32, s32);
s32 TLobby__sub_800FD944(s32);
s32 set_mode__15TWindowSnapShotFPvi(void *, s32);
s32 get_buffer_size__15TWindowSnapShotFPv();
s32 TWindowSnapShot__sub_802A605C(void *);
u32 alloc_buffer__11TOBoss4RockFPv();
void fn_802A5CB8(void* p);
M2C_UNK memset(void *, int, int);

#include "types.h"
extern "C" {

void reset__15TWindowSnapShotFPv(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    memset((void *) (arg0 + 0x1C), (int) (0), (int) (0x20));
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
}

}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802A5EDC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TWindowSnapShot__sub_802A5EDC(void *arg0, s16 arg1);
M2C_UNK __dl__FPv(void *);

extern M2C_UNK lbl_804DD098[];

void *TWindowSnapShot__sub_802A5EDC(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x3C) = lbl_804DD098;
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802A5F60
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_802A5C7C(void *);
s32 fn_802A5CB8(void *);
s32 fn_802A5CC4(void *, s32);
s32 alloc_buffer__15TWindowSnapShotFPv(void *);
s32 open_stream__15TWindowSnapShotFPvi(void *, s32);
s32 init__15TWindowSnapShotFPvi();
int TObjChip__vt8(void*, void*);
int TWindowSnapShot__sub_802A5D28(void*);
int reset__15TWindowSnapShotFPv(void*);
int get_width__15TWindowSnapShotFv(void);
void set_mode__15TWindowSnapShotFPvi(void* p, s32 v);
s32 get_buffer_size__15TWindowSnapShotFPv(void* p);
void fn_802A6070(void* p, s32 v);
void fn_802A6078(void* p, s32 v);
int get_max_players__6TLobbyFv(void);

void update_both__15TWindowSnapShotFPv(void* p) { TWindowSnapShot__sub_802A5D28(p); reset__15TWindowSnapShotFPv(p); }
s32 start_capture__15TWindowSnapShotFPvi(void *arg0, s32 arg1) {
    if (arg1 == 0) {
        set_mode__15TWindowSnapShotFPvi((void*)(arg0), 3);
        return 0;
    }
    if (init__15TWindowSnapShotFPvi() == 0) {
        return 0;
    }
    if (alloc_buffer__15TWindowSnapShotFPv(arg0) == 0) {
        return 0;
    }
    if (open_stream__15TWindowSnapShotFPvi(arg0, arg1) == 0) {
        return 0;
    }
    fn_802A5CB8(arg0);
    fn_802A5C7C(arg0);
    fn_802A5CC4(arg0, arg1);
    M2C_FIELD(arg0, s32 *, 0x14) = 1;
    return 1;
}
int get_width__15TWindowSnapShotFv(void) { return 32; }
void set_mode__15TWindowSnapShotFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x18) = v; }
s32 get_buffer_size__15TWindowSnapShotFPv(void* p) { return *(s32*)((char*)p + 0xc); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802A7D68
#include "types.h"

extern "C" {

void init_default__15TWindowSnapShotFv(void);
int TLobby__sub_8001D600(void*, void*, void*, void*);
int get_field_8__15TWindowSnapShotFPv(void*);

    extern int lbl_805D6690;
    extern int lbl_805D669C;
    extern int lbl_805D66A0;
void init_default__15TWindowSnapShotFv(void) { TLobby__sub_8001D600((void*)1, (void*)get_field_8__15TWindowSnapShotFPv((void*)(lbl_805D6690)), (void*)(lbl_805D669C), (void*)(lbl_805D66A0)); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802A7DA0
#include "types.h"

extern "C" {

void TWindowSnapShot__sub_802A7DA0(void);

void TWindowSnapShot__sub_802A7DA0(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802A7DA4
#include "types.h"

extern "C" {

void alloc_buffer__15TWindowSnapShotFv(void);
int TLobby__sub_800FD944(void);
int TLobby__sub_8037F1C8(void);
int TWindowSnapShot__sub_802A7EAC(void);

    extern int lbl_805D669C;
    extern int lbl_805D66A0;
void alloc_buffer__15TWindowSnapShotFv(void) { TWindowSnapShot__sub_802A7EAC(); lbl_805D66A0 = ((TLobby__sub_800FD944() + 0x1f) & 0xffffffe0); lbl_805D669C = TLobby__sub_8037F1C8(); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802A7DDC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_802A7DDC { char pad[0x3C]; };
struct VObj_802A7DDC : Base_802A7DDC {
    virtual void m0(int);
};

extern "C" {

void free_shared_instance__15TWindowSnapShotFv(void);
M2C_UNK update_both__15TWindowSnapShotFPv(void *);

extern void *lbl_805D6690;

void free_shared_instance__15TWindowSnapShotFv(void) {
    struct VObj_802A7DDC *o;
    update_both__15TWindowSnapShotFPv(lbl_805D6690);
    o = (struct VObj_802A7DDC *)lbl_805D6690;
    if (o != NULL) {
        o->m0(1);
    }
    lbl_805D6690 = NULL;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802A7E94
#include "types.h"

extern "C" {

s32 get_size__15TWindowSnapShotFPv(void* p);
s32 get_field_8__15TWindowSnapShotFPv(void* p);
int get_height__15TWindowSnapShotFv(void);
int TWindowSnapShot__sub_802A7EAC(void);

s32 get_size__15TWindowSnapShotFPv(void* p) { return *(s32*)((char*)p + 0x0); }
s32 get_field_8__15TWindowSnapShotFPv(void* p) { return *(s32*)((char*)p + 0x8); }
int get_height__15TWindowSnapShotFv(void) { return 600; }

    extern int lbl_805D3E10;
int TWindowSnapShot__sub_802A7EAC(void) {  return lbl_805D3E10; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802A8048
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__15TWindowSnapShotFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void destroy_window_base__9TWindowDDFPvs(void *, int);

extern M2C_UNK __vt__15TWindowSnapShot[];

void *__dt__15TWindowSnapShotFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__15TWindowSnapShot;
        destroy_window_base__9TWindowDDFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#endif
