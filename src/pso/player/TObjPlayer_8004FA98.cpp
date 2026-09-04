#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void release_subobjects__10TObjPlayerFPv(u8 *arg0);
void update_both__10TObjPlayerFPv(void* p);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjEneSlimeOne__sub_803E4AF4(s32, s32, f32);
M2C_UNK TObjFish__sub_800E3074(s32);
int TObjPlayer__sub_8004FB24(void*);
M2C_UNK TObjPlayer__sub_80052390(f32);
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK clear_global_state__10TObjPlayerFv();
M2C_UNK clear_render_callback__8TObjFishFv(s32);
M2C_UNK set_global_flag__10TObjPlayerFv();
M2C_UNK set_global_param__8TObjFishFi(s32);
M2C_UNK sync_player_globals__10TObjPlayerFv();

extern const f32 lbl_805D8A08;

void release_subobjects__10TObjPlayerFPv(u8 *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0xE4) >= 0xB4) {
        TObjPlayer__sub_80052390(lbl_805D8A08);
        TObjPlayer__sub_803D9B2C();
        set_global_flag__10TObjPlayerFv();
        TOHangerMachine01__sub_803D9C00(arg0 + 0xD4);
        TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0xE0));
        set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0xCC));
        TObjFish__sub_800E3074(M2C_FIELD(arg0, s32 *, 0x108));
        TObjEneSlimeOne__sub_803E4AF4(M2C_FIELD(arg0, s32 *, 0xC8), M2C_FIELD(arg0, s32 *, 0xD0), M2C_FIELD(arg0, f32 *, 0xE8));
        clear_render_callback__8TObjFishFv(M2C_FIELD(arg0, s32 *, 0x108));
        clear_global_state__10TObjPlayerFv();
        TObjPlayer__sub_803D9B78();
        sync_player_globals__10TObjPlayerFv();
    }
}

void update_both__10TObjPlayerFPv(void* p) { TObjPlayer__sub_8004FB24(p); release_subobjects__10TObjPlayerFPv((u8 *)(p)); }

}
