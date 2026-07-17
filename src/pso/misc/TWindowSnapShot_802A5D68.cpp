#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
int TWindowSnapShot__sub_802A5D28(void* a0 = 0);

u32 alloc_buffer__11TOBoss4RockFPv();
s32 set_mode__15TWindowSnapShotFPvi(void *, s32);
s32 TWindowSnapShot__sub_802A6054();
s32 TGStream__sub_800FDADC(s32, s32);
s32 TWindowSnapShot__sub_802A605C(void *);
s32 TLobby__sub_800FD944(s32);
void fn_802A5CB8(void* p);

s32 alloc_buffer__15TWindowSnapShotFPv(void *arg0) {
    TWindowSnapShot__sub_802A6054();
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
