#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
M2C_UNK set_flag_4__9TObjLukerFPv(void *);
extern const f32 lbl_805DA900;
extern const f32 lbl_805DA904;
void TLobby__sub_800F87B4(u8 *arg0);
}

extern "C" {

void *TLobby__sub_800F86FC(void *arg0, s16 arg1);
void *init_fade__6TLobbyFPvPvPv(void *arg0, void *arg1, void *arg2);
void destroy_task_object__12TBoss3VoloptFPvs(void *, int);
void init_object__12TBoss3VoloptFPvPv(void *, void *);
void __dl__7TObjectFPv(void *);

extern M2C_UNK lbl_804999B8[];

void *TLobby__sub_800F86FC(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804999B8;
        destroy_task_object__12TBoss3VoloptFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern void *tl_fade;
extern const f32 lbl_805DA904;
extern M2C_UNK lbl_804999B8[];

void *init_fade__6TLobbyFPvPvPv(void *arg0, void *arg1, void *arg2) {
    init_object__12TBoss3VoloptFPvPv(arg0, tl_fade);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804999B8;
    M2C_FIELD(arg0, void **, 0x24) = arg2;
    M2C_FIELD(arg0, f32 *, 0x1C) = lbl_805DA904;
    M2C_FIELD(arg0, u8 *, 0x20) = 0;
    M2C_FIELD(arg0, u8 *, 0x21) = 0;
    M2C_FIELD(arg0, u8 *, 0x22) = 0;
    return arg0;
}
#pragma push
#pragma opt_common_subs off
void TLobby__sub_800F87B4(u8 *arg0) {
    M2C_UNK (*temp_r12)();
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) (M2C_FIELD(arg0, f32 *, 0x1C) + lbl_805DA900);
    if (M2C_FIELD(arg0, f32 *, 0x1C) >= lbl_805DA904) {
        M2C_FIELD(arg0, f32 *, 0x1C) = (f32) lbl_805DA904;
        temp_r12 = M2C_FIELD(arg0, M2C_UNK (**)(), 0x24);
        if (temp_r12 != NULL) {
            temp_r12();
        }
        set_flag_4__9TObjLukerFPv((void *) (arg0));
    }
}
#pragma pop

}
