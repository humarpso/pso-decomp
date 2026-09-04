#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

int apply_player_54a00__9TObjEnemyFPv(void* p);
void clear_shadow_flag__10TObjPlayerFPv(void* p);
void set_shadow_flag__10TObjPlayerFPv(void* p);

int TObjPlayer__sub_80154A00(void*);

int apply_player_54a00__9TObjEnemyFPv(void* p) { return TObjPlayer__sub_80154A00(p); }
void clear_shadow_flag__10TObjPlayerFPv(void* p) { *(u16*)((char*)p + 0x4) &= 0xfffffbff; }
void set_shadow_flag__10TObjPlayerFPv(void* p) { *(u16*)((char*)p + 0x4) |= 0x400; }

}
#else
#if PSO_CLASS_PACKAGE == 0x800F7778
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__dt__9TObjEnemyFv(void *arg0, s16 arg1);
M2C_UNK apply_player_54a00__9TObjEnemyFPv(void *);
M2C_UNK mask_sub_flags__9TObjEnemyFPvi(void *, M2C_UNK);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK destroy_motion_object__10TObjPlayerFPvs(void *, M2C_UNK);

extern M2C_UNK __vt__9TObjEnemy[];

void *__dt__9TObjEnemyFv(void *arg0, s16 arg1) {
    u16 temp_r0;

    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__9TObjEnemy;
        apply_player_54a00__9TObjEnemyFPv(arg0);
        if ((u32) M2C_FIELD(arg0, u32 *, 0x80) != 0U) {
            temp_r0 = M2C_FIELD(arg0, u16 *, 0x1C);
            if ((temp_r0 >= 0x1000U) && (temp_r0 < 0x4000U)) {
                mask_sub_flags__9TObjEnemyFPvi(arg0, -3);
                M2C_FIELD(arg0, u32 *, 0x80) = 0U;
            }
        }
        destroy_motion_object__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800F78C8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 apply_by_index__9TObjEnemyFs(s16 arg0);
M2C_UNK copy_header__6TLobbyFPvPv(s32);

extern s32 TLobby__data_805D6144;

s32 apply_by_index__9TObjEnemyFs(s16 arg0) {
    if (arg0 > 0xB4F) {
        return 0;
    }
    copy_header__6TLobbyFPvPv(TLobby__data_805D6144 + (arg0 * 0xC));
    return 1;
}

}
#endif
#endif
