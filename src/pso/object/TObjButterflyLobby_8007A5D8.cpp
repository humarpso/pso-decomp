#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Hit_8007A5D8 { u8 pad[0x40]; };

extern "C" {
int alloc_buffer__11TOBoss4RockFPv(void*);
extern u32 lbl_805D4E6C;
void alloc_scene_buffer__18TObjButterflyLobbyFv(void);
void TObjPlayer__sub_80079118(const char *);
void TObjPlayer__sub_8007911C(void *, void *, u32);
s32 TObjPlayer__sub_8007970C(void *, void *, u32, void *);
u32 query_collision_segment_groups(void *, void *, u32);
extern char lbl_804389FC[];
extern u8 lbl_804FFD40[];
extern Hit_8007A5D8 lbl_80500140;
Hit_8007A5D8 *csnVector(void *from, void *to, u32 mask);
}

extern "C" {

void free_singleton_805D4E6C__18TObjButterflyLobbyFv(void);
void free__11TOBoss4RockFUi(void*);

extern u32 lbl_805D4E6C;

Hit_8007A5D8 *csnVector(void *from, void *to, u32 mask) {
    Hit_8007A5D8 *hit;
    TObjPlayer__sub_8007911C(from, to, mask);
    hit = &lbl_80500140;
    if (query_collision_segment_groups(from, to, mask) == 0) {
        hit = 0;
    } else if (TObjPlayer__sub_8007970C(from, to, mask, lbl_804FFD40) == 0) {
        hit = 0;
    }
    TObjPlayer__sub_80079118(lbl_804389FC);
    return hit;
}

void free_singleton_805D4E6C__18TObjButterflyLobbyFv(void) {
    if ((u32) lbl_805D4E6C != 0U) {
        free__11TOBoss4RockFUi((void*)lbl_805D4E6C);
        lbl_805D4E6C = 0U;
    }
}
void alloc_scene_buffer__18TObjButterflyLobbyFv(void) { (*(int *)&lbl_805D4E6C) = alloc_buffer__11TOBoss4RockFPv((void*)20480); }

}
