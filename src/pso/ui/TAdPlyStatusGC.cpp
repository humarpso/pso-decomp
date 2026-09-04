#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void close_window__14TAdPlyStatusGCFPv(void *arg0);
void render__14TAdPlyStatusGCFv(void* p);
M2C_UNK TWindow__close(void *);
int abs__4cXyzCFv(void*, void*);
M2C_UNK disallow_rendering__7TObjectFv();
u32 get_player_index__14TAdPlyStatusGCFv();
int get_state_flag__9TMainTaskFv(void*);

void render__14TAdPlyStatusGCFv(void* p) { if (get_state_flag__9TMainTaskFv(p) != 1) { abs__4cXyzCFv((void*)0, (void*)8); abs__4cXyzCFv((void*)1, (void*)10); abs__4cXyzCFv((void*)0, (void*)8); abs__4cXyzCFv((void*)1, (void*)6); } }

void close_window__14TAdPlyStatusGCFPv(void *arg0) {
    void *temp_r3 = M2C_FIELD(arg0, void **, 0x6C);
    if ((u32) temp_r3 != 0U) {
        TWindow__close(temp_r3);
        M2C_FIELD(arg0, u32 *, 0x6C) = 0U;
    }
    if (get_player_index__14TAdPlyStatusGCFv() != 0U) {
        disallow_rendering__7TObjectFv();
    }
}

}
