#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 alloc_load_data__6TLobbyFPviii(void *arg0, s32 arg1, s32 arg2, s32 arg3);
void free_chr_select_data__6TLobbyFv(void);
void free_if_not_owner__6TLobbyFPvPv(void* p, void* a1);
void set_flag_and_notify__6TLobbyFPv(void *arg0);
M2C_UNK TItemDrop__sub_800FE2D8();
M2C_UNK TLobby__sub_801E38A0(s32, s32, s32, s32, u32 *);
s32 TLobby__sub_803DE328(s32, s32, s32);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(s32);
int xfree__FPv(void*);

void free_if_not_owner__6TLobbyFPvPv(void* p, void* a1) { if (*(unsigned int*)((char*)p + 0x424) == 0) { xfree__FPv((void*)(a1)); } }

s32 alloc_load_data__6TLobbyFPviii(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    u32 sp8;
    s32 temp_r31;
    u32 temp_r4;
    u32 temp_r7;

    temp_r7 = M2C_FIELD(arg0, u32 *, 0x424);
    if (temp_r7 != 0U) {
        temp_r31 = temp_r7 + M2C_FIELD(arg0, s32 *, 0x428);
        TLobby__sub_801E38A0(arg1, arg2, arg3, temp_r31, &sp8);
        temp_r4 = ((sp8 >> 5U) + 1) << 5;
        sp8 = temp_r4;
        M2C_FIELD(arg0, s32 *, 0x428) = (s32) (M2C_FIELD(arg0, s32 *, 0x428) + temp_r4);
        return temp_r31;
    }
    return TLobby__sub_803DE328(arg1, arg2, arg3);
}

void set_flag_and_notify__6TLobbyFPv(void *arg0) {
    M2C_UNK (*temp_r12)(s32);

    M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) | 0x400);
    temp_r12 = M2C_FIELD(arg0, M2C_UNK (**)(s32), 0x41C);
    if (temp_r12 != NULL) {
        temp_r12(M2C_FIELD(arg0, s32 *, 0x420));
    }
}

extern s32 lbl_805D4ACC;
extern u32 lbl_805D4AD8;

void free_chr_select_data__6TLobbyFv(void) {
    if ((u32) lbl_805D4AD8 != 0U) {
        xfree__FPv((void*)((void*)lbl_805D4AD8));
        lbl_805D4AD8 = 0U;
    }
    TItemDrop__sub_800FE2D8();
    safe_free__23TAdSinglePlyChrSelectGCFUi(lbl_805D4ACC);
    lbl_805D4ACC = 0;
}

}
