#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_803518E0_lbl_8050E208 {
    M2C_UNK value;
    u8 remaining[0x1AC];
};

struct P_80351974 { u16 a; s16 b; s32 c; s32 d; s32 e; u8 sub[1]; };

extern "C" {
s32 try_ground_action__10TObjPlayerFPvi(void *arg0, s32 arg1);
s32 check_action_usable__10TObjPlayerFPvi(void *arg0, s32 arg1);
int __dl__FPv();
s32 dt__10TObjPlayerFis(s32 arg0, s16 arg1);
int get_flag_1__10TObjPlayerFPv(void* p);
s32 TObjPlayer__sub_803519D8(u8 *arg0, s32 arg1);
s32 TObjPlayer__sub_803519D8(u8 *arg0, s32 arg1);
int is_grounded__10TObjPlayerFPv(void* p);
s32 TObjPlayer__sub_803519D8(u8 *arg0, s32 arg1);
s32 fn_803519FC(s32 *arg0, s32 arg1);
s32 TObjPlayer__sub_803519D8(u8 *arg0, s32 arg1);
s32 fn_803519FC(s32 *arg0, s32 arg1);
int fn_80351A14(u8 *arg0, s32 arg1);
s32 reset_state_block__10TObjPlayerFPv(void *);
extern RecoveredGlobal_803518E0_lbl_8050E208 controller_input_state;
void init_pad_binding(u8 *arg0, s16 arg1, s16 arg2);
s32 reset_state_block__10TObjPlayerFPv(void *);
P_80351974 *TObjPlayer__sub_80351974(P_80351974 *arg0);
}

extern "C" {

f32 get_attached_float_24__10TObjPlayerFPv(void *arg0);
s32 get_target_field_1c__10TObjPlayerFPv(void *arg0);

s32 get_target_field_1c__10TObjPlayerFPv(void *arg0) {
    if ((void *) M2C_FIELD(arg0, void **, 0xC) == NULL) {
        return 0;
    }
    if (get_flag_1__10TObjPlayerFPv((void*)(arg0)) != 0) {
        return M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s32 *, 0x1C);
    }
    return 0;
}

extern f32 lbl_805DFEC8;

f32 get_attached_float_24__10TObjPlayerFPv(void *arg0) {
    if ((void *) M2C_FIELD(arg0, void **, 0xC) == NULL) {
        return lbl_805DFEC8;
    }
    if (get_flag_1__10TObjPlayerFPv((void*)(arg0)) != 0) {
        return M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), f32 *, 0x24);
    }
    return lbl_805DFEC8;
}
s32 try_ground_action__10TObjPlayerFPvi(void *arg0, s32 arg1) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0xC) == 0U) {
        return 0;
    }
    if ((is_grounded__10TObjPlayerFPv((void*)(arg0)) == 0) || (TObjPlayer__sub_803519D8((u8 *)(arg0), (s32)(arg1)) == 0)) {
        return 0;
    }
    return fn_803519FC((s32 *)(M2C_FIELD(arg0, u32 *, 0xC)), (s32)(arg1));
}
s32 check_action_usable__10TObjPlayerFPvi(void *arg0, s32 arg1) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0xC) == 0U) {
        return 0;
    }
    if ((is_grounded__10TObjPlayerFPv((void*)(arg0)) == 0) || (TObjPlayer__sub_803519D8((u8 *)(arg0), (s32)(arg1)) == 0)) {
        return 0;
    }
    return fn_80351A14((u8 *)(M2C_FIELD(arg0, u32 *, 0xC)), (s32)(arg1));
}

typedef char RecoveredGlobal_803518E0_lbl_8050E208_size[sizeof(RecoveredGlobal_803518E0_lbl_8050E208) == 0x1B0 ? 1 : -1];
void init_pad_binding(u8 *arg0, s16 arg1, s16 arg2) {
    M2C_FIELD(arg0, s16 *, 0) = arg1;
    M2C_FIELD(arg0, s16 *, 2) = arg2;
    M2C_FIELD(arg0, s32 *, 4) = -1;
    M2C_FIELD(arg0, s32 *, 8) = -1;
    M2C_FIELD(arg0, u8 **, 0xC) = (unsigned char *) ((void *) ((u8 *)&controller_input_state.value + (M2C_FIELD(arg0, s16 *, 2) * 0x50) + 0x20));
    reset_state_block__10TObjPlayerFPv((void *) (arg0 + 0x10));
}

s32 dt__10TObjPlayerFis(s32 arg0, s16 arg1) {
    if ((arg0 != 0) && (arg1 > 0)) {
        __dl__FPv();
    }
    return arg0;
}

P_80351974 *TObjPlayer__sub_80351974(P_80351974 *arg0) {
    arg0->a = 0xFFFF;
    arg0->b = 0;
    arg0->c = -1;
    arg0->d = -1;
    arg0->e = 0;
    reset_state_block__10TObjPlayerFPv(arg0->sub);
    return arg0;
}

int get_flag_1__10TObjPlayerFPv(void* p) { return (*(u32*)((char*)p + 0x4) >> 1) & 0x1; }
s32 TObjPlayer__sub_803519D8(u8 *arg0, s32 arg1) {
    return (u8) ((M2C_FIELD(arg0, s32 *, 8) & arg1) != 0);
}
int is_grounded__10TObjPlayerFPv(void* p) { return *(u32*)((char*)p + 0x4) & 0x1; }
s32 fn_803519FC(s32 *arg0, s32 arg1) {
    return (u8) ((*arg0 & arg1) != 0);
}
int fn_80351A14(u8 *arg0, s32 arg1) {
    return (u8) ((M2C_FIELD(arg0, s32 *, 0x8) & arg1) != 0);
}

}
