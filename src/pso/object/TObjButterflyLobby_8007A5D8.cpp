#include "types.h"

struct Hit_8007A5D8 { u8 pad[0x40]; };

extern "C" {
int alloc_buffer__11TOBoss4RockFPv(void*);
extern u32 wall_query_scene_buffer;
void alloc_scene_buffer__18TObjButterflyLobbyFv(void);
void TObjPlayer__sub_80079118(const char *);
void TObjPlayer__sub_8007911C(void *, void *, u32);
s32 query_segment_wall_meshes(void *, void *, u32, void *);
u32 query_collision_segment_groups(void *, void *, u32);
extern char lbl_804389FC[];
extern u8 lbl_804FFD40[];
extern Hit_8007A5D8 lbl_80500140;
Hit_8007A5D8 *csnVector(void *from, void *to, u32 mask);
}

extern "C" {

void free_singleton_805D4E6C__18TObjButterflyLobbyFv(void);
void free__11TOBoss4RockFUi(void*);

extern u32 wall_query_scene_buffer;

Hit_8007A5D8 *csnVector(void *from, void *to, u32 mask) {
    Hit_8007A5D8 *hit;
    TObjPlayer__sub_8007911C(from, to, mask);
    hit = &lbl_80500140;
    if (query_collision_segment_groups(from, to, mask) == 0) {
        hit = 0;
    } else if (query_segment_wall_meshes(from, to, mask, lbl_804FFD40) == 0) {
        hit = 0;
    }
    TObjPlayer__sub_80079118(lbl_804389FC);
    return hit;
}

void free_singleton_805D4E6C__18TObjButterflyLobbyFv(void) {
    if ((u32) wall_query_scene_buffer != 0U) {
        free__11TOBoss4RockFUi((void*)wall_query_scene_buffer);
        wall_query_scene_buffer = 0U;
    }
}
void alloc_scene_buffer__18TObjButterflyLobbyFv(void) { (*(int *)&wall_query_scene_buffer) = alloc_buffer__11TOBoss4RockFPv((void*)20480); }

}
