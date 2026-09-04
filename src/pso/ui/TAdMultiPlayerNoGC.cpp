#include "pso/TAdMultiPlayerNoGC.h"

TAdMultiPlayerNoGC::~TAdMultiPlayerNoGC() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render__18TAdMultiPlayerNoGCFv(void* p);
void render_status__18TAdMultiPlayerNoGCFi(s32 arg0);
void run_task__18TAdMultiPlayerNoGCFv(void);
M2C_UNK TWindowSubComCard__sub_803DEECC(s32, f32);
M2C_UNK TWindowSubStatusDisp__sub_803DEE6C(M2C_UNK);
M2C_UNK TWindowSubStatusDisp__sub_803DF160(M2C_UNK, M2C_UNK);
int abs__4cXyzCFv(void*, void*);
M2C_UNK get_player__20TWindowSubStatusDispFv();
int get_state_flag__9TMainTaskFv(void*);
M2C_UNK set_global_param__8TObjFishFi(s32);

extern s32 lbl_805D6D78;
extern f32 lbl_805DFA10;

void render_status__18TAdMultiPlayerNoGCFi(s32 arg0) {
    TWindowSubStatusDisp__sub_803DEE6C(1);
    set_global_param__8TObjFishFi(lbl_805D6D78);
    TWindowSubStatusDisp__sub_803DF160(0, -1);
    TWindowSubComCard__sub_803DEECC(arg0 + 0x20, lbl_805DFA10);
    get_player__20TWindowSubStatusDispFv();
}

void render__18TAdMultiPlayerNoGCFv(void* p) { if (get_state_flag__9TMainTaskFv(p) != 1) { abs__4cXyzCFv((void*)0, (void*)8); abs__4cXyzCFv((void*)1, (void*)10); render_status__18TAdMultiPlayerNoGCFi((s32)(p)); abs__4cXyzCFv((void*)0, (void*)8); abs__4cXyzCFv((void*)1, (void*)6); } }
void run_task__18TAdMultiPlayerNoGCFv(void) {  }

}
