#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TWindowSnapShot__sub_802A5D28(void* a0 = 0);
s32 alloc_buffer__15TWindowSnapShotFPv(void *arg0);
int fn_802A5B2C(void);
int fn_802A5B50(void);
int fn_802A5B74(void);
int fn_802A5BB4(void* a0 = 0);
int fn_802A5BD8(void);
int fn_802A5BFC(void);
int fn_802A5C3C(void);
void fn_802A5C7C(void *arg0);
void fn_802A5CB8(void* p);
int fn_802A5CC4(void);
s32 init__15TWindowSnapShotFPvi(void *arg0, s32 arg1);
s32 open_stream__15TWindowSnapShotFPvi(void *arg0, s32 arg1);
void reset__15TWindowSnapShotFPv(u8 *arg0);
s32 TGStream__sub_800FDADC(s32, s32);
s32 TLobby__sub_800FD944(s32);
s32 TWindowSnapShot__sub_802A605C(void *);
u32 alloc_buffer__11TOBoss4RockFPv();
s32 get_buffer_size__15TWindowSnapShotFPv();
M2C_UNK memset(void *, int, int);
s32 set_mode__15TWindowSnapShotFPvi(void *, s32);

int fn_802A5B2C(void) { return 0; }
int fn_802A5B50(void) { return 0; }
int fn_802A5B74(void) { return 0; }
int fn_802A5BB4(void* a0) { return 0; }
int fn_802A5BD8(void) { return 0; }
int fn_802A5BFC(void) { return 0; }
int fn_802A5C3C(void) { return 0; }
void fn_802A5C7C(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 8) + fn_802A5BB4((void*)((void*)(M2C_FIELD(arg0, s32 *, 0)))));
}
void fn_802A5CB8(void* p) { *(u32*)((char*)p + 0x0) = *(u32*)((char*)p + 0x8); }
int fn_802A5CC4(void) { return 0; }
int TWindowSnapShot__sub_802A5D28(void* a0) { return 0; }

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
        TWindowSnapShot__sub_802A5D28((void*)((void*)(arg0)));
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
