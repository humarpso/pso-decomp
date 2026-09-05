#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
u8 TWindowSnapShot__sub_802A605C(u8 *arg0);
}

extern "C" {

void *TWindowSnapShot__sub_802A5EDC(void *arg0, s16 arg1);
void fn_802A6070(void* p, s32 v);
void fn_802A6078(void* p, s32 v);
s32 get_buffer_size__15TWindowSnapShotFPv(void* p);
int get_width__15TWindowSnapShotFv(void);
void set_mode__15TWindowSnapShotFPvi(void* p, s32 v);
s32 start_capture__15TWindowSnapShotFPvi(void *arg0, s32 arg1);
void update_both__15TWindowSnapShotFPv(void* p);
int TObjChip__vt8(void*, void*);
int TWindowSnapShot__sub_802A5D28(void*);
M2C_UNK __dl__FPv(void *);
s32 alloc_buffer__15TWindowSnapShotFPv(void *);
s32 fn_802A5C7C(void *);
s32 fn_802A5CB8(void *);
s32 fn_802A5CC4(void *, s32);
int get_max_players__6TLobbyFv(void);
s32 init__15TWindowSnapShotFPvi();
s32 open_stream__15TWindowSnapShotFPvi(void *, s32);
int reset__15TWindowSnapShotFPv(void*);

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

void update_both__15TWindowSnapShotFPv(void* p) { TWindowSnapShot__sub_802A5D28(p); reset__15TWindowSnapShotFPv(p); }
s32 start_capture__15TWindowSnapShotFPvi(void *arg0, s32 arg1) {
    if (arg1 == 0) {
        set_mode__15TWindowSnapShotFPvi((void*)((void*)(arg0)), (s32)(3));
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

u8 TWindowSnapShot__sub_802A605C(u8 *arg0) {
    return (u8) (M2C_FIELD(arg0, s32 *, 0xC) != 0);
}

void fn_802A6070(void* p, s32 v) { *(s32*)((char*)p + 0x4) = v; }
void fn_802A6078(void* p, s32 v) { *(s32*)((char*)p + 0x0) = v; }

}
