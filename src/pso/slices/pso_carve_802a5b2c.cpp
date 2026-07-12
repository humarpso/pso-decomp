#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u32 alloc_buffer__11TOBoss4RockFPv();
s32 fn_802A604C(void *, s32);
s32 fn_802A6054();
s32 TGStream__sub_800FDADC(s32, s32);
s32 fn_802A605C(void *);
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
int fn_802A5D28(void* a0 = 0) { return 0; }
s32 fn_802A5D68(void *arg0) {
    fn_802A6054();
    M2C_FIELD(arg0, u32 *, 8) = alloc_buffer__11TOBoss4RockFPv();
    if ((u32) M2C_FIELD(arg0, u32 *, 8) == 0U) {
        fn_802A604C(arg0, 4);
        return 0;
    }
    return 1;
}
s32 fn_802A5DC0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xC) = TGStream__sub_800FDADC(arg1, M2C_FIELD(arg0, s32 *, 8));
    if (fn_802A605C(arg0) == 0) {
        fn_802A604C(arg0, 2);
        fn_802A5D28((void*)(arg0));
        return 0;
    }
    return 1;
}
s32 fn_802A5E28(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xC) = TLobby__sub_800FD944(arg1);
    if (fn_802A605C(arg0) == 0) {
        fn_802A604C(arg0, 1);
        return 0;
    }
    return 1;
}
int fn_802A5E84(void) { return 0; }

}
