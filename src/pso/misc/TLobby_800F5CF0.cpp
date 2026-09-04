#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *alloc_tables__6TLobbyFPvii(void *arg0, s32 arg1, s32 arg2);
int fn_800F5D80(void);
s32 alloc_buffer__11TOBoss4RockFPv(s32);
M2C_UNK fn_800F58A4(void *, s32, s32, s32);
M2C_UNK fn_800F5A50();
s32 get_target_id__13TWindowLockOnFPv(void* p);
int initialize_enemy_photon_effect(void* p);
int reset_photon_effect__12TBoss3VoloptFPv(void*);
void set_param__12TObjEneLappyFPvi(void* p, s32 v);

extern s32 lbl_805D5318;
extern s32 lbl_805D531C;
extern s32 lbl_805D5320;

void *alloc_tables__6TLobbyFPvii(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_r6;

    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    lbl_805D5320 = 0;
    fn_800F5A50();
    M2C_FIELD(arg0, s32 *, 8) = alloc_buffer__11TOBoss4RockFPv(M2C_FIELD(arg0, s32 *, 4) * 8);
    M2C_FIELD(arg0, s32 *, 0xC) = alloc_buffer__11TOBoss4RockFPv(M2C_FIELD(arg0, s32 *, 0) * 4);
    lbl_805D5318 = M2C_FIELD(arg0, s32 *, 8);
    temp_r6 = M2C_FIELD(arg0, s32 *, 0xC);
    lbl_805D531C = temp_r6;
    lbl_805D5320 = 0;
    fn_800F58A4(arg0, arg1, arg2, temp_r6);
    return arg0;
}

int fn_800F5D80(void) { return 0; }

}
