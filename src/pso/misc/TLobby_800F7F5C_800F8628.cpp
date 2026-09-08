#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
M2C_UNK set_flag_4__9TObjLukerFPv(void *);
extern const float lbl_805DA8E8;
extern const f32 lbl_805DA900;
void TLobby__sub_800F8690(u8 *arg0);
}

extern "C" {

void* init_entry_fields__6TLobbyFPviii(void* a0, int a1, int a2, int a3);
int init_object__12TBoss3VoloptFPvPv(void);

    extern unsigned char lbl_804999A0[];
    extern const float lbl_805DA8E8;
void* init_entry_fields__6TLobbyFPviii(void* a0, int a1, int a2, int a3) { init_object__12TBoss3VoloptFPvPv(); *(int*)((char*)a0 + 0x18) = (int)lbl_804999A0; *(int*)((char*)a0 + 0x28) = a2; *(float*)((char*)a0 + 0x1c) = lbl_805DA8E8; *(unsigned char*)((char*)a0 + 0x21) = 0; *(unsigned char*)((char*)a0 + 0x22) = 0; *(unsigned char*)((char*)a0 + 0x20) = 255; *(int*)((char*)a0 + 0x24) = a3; return a0; }
#pragma push
#pragma opt_common_subs off
void TLobby__sub_800F8690(u8 *arg0) {
    M2C_UNK (*temp_r12)();
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) (M2C_FIELD(arg0, f32 *, 0x1C) - lbl_805DA900);
    if (M2C_FIELD(arg0, f32 *, 0x1C) <= (*(const f32 *)&lbl_805DA8E8)) {
        M2C_FIELD(arg0, f32 *, 0x1C) = (f32) (*(const f32 *)&lbl_805DA8E8);
        temp_r12 = M2C_FIELD(arg0, M2C_UNK (**)(), 0x24);
        if (temp_r12 != NULL) {
            temp_r12();
        }
        set_flag_4__9TObjLukerFPv((void *) (arg0));
    }
}
#pragma pop

}
