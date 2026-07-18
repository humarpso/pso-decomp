#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u32 alloc_buffer__11TOBoss4RockFPv();
s32 set_mode__15TWindowSnapShotFPvi(void *, s32);
s32 get_buffer_size__15TWindowSnapShotFPv();
s32 TGStream__sub_800FDADC(s32, s32);
s32 TWindowSnapShot__sub_802A605C(void *);
s32 TLobby__sub_800FD944(s32);
void fn_802A5CB8(void* p);

int fn_802A5B2C(void) { return 0; }
int fn_802A5B50(void) { return 0; }
int fn_802A5B74(void) { return 0; }
int fn_802A5BB4(void* a0 = 0) { return 0; }
int fn_802A5BD8(void) { return 0; }
int fn_802A5BFC(void) { return 0; }
int fn_802A5C3C(void) { return 0; }
void fn_802A5C7C(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 8) + fn_802A5BB4((void*)(M2C_FIELD(arg0, s32 *, 0))));
}
void fn_802A5CB8(void* p) { *(u32*)((char*)p + 0x0) = *(u32*)((char*)p + 0x8); }
int fn_802A5CC4(void) { return 0; }
int TWindowSnapShot__sub_802A5D28(void* a0 = 0) { return 0; }

}
