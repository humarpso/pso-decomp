#include "pso/TAdGameStartBackGC.h"

TAdGameStartBackGC::~TAdGameStartBackGC() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void clear_equip_flags__10TObjPlayerFPvUi(void *, u32);
void TObjPlayer__sub_803075EC(u8 *arg0);
}

extern "C" {

void render__18TAdGameStartBackGCFv(void* p);
void render_background_status__18TAdGameStartBackGCFPv(u8 *arg0);
M2C_UNK TWindowSubComCard__sub_803DEECC(void *, f32);
M2C_UNK TWindowSubStatusDisp__sub_803DEE6C(int);
M2C_UNK TWindowSubStatusDisp__sub_803DF160(int, int);
M2C_UNK get_player__20TWindowSubStatusDispFv();
int get_state_flag__9TMainTaskFv(void*);
int init_xyz_limits__10TObjPlayerFv(void);
int reset_transform_state__10TObjPlayerFv(void);
M2C_UNK set_global_param__8TObjFishFi(void *);

extern s32 lbl_805D6A50;
extern const f32 lbl_805DF078;

void render_background_status__18TAdGameStartBackGCFPv(u8 *arg0) {
    TWindowSubStatusDisp__sub_803DEE6C((int) (1));
    set_global_param__8TObjFishFi((void *) (lbl_805D6A50));
    TWindowSubStatusDisp__sub_803DF160((int) (0), (int) ((M2C_FIELD(arg0, s32 *, 0x78) << 0x18) | 0xFF0000 | 0xFFFF));
    TWindowSubComCard__sub_803DEECC((void *) (arg0 + 0x3C), (f32) (lbl_805DF078));
    get_player__20TWindowSubStatusDispFv();
}

void render__18TAdGameStartBackGCFv(void* p) { if (get_state_flag__9TMainTaskFv(p) != 1) { init_xyz_limits__10TObjPlayerFv(); render_background_status__18TAdGameStartBackGCFPv((u8 *)(p)); reset_transform_state__10TObjPlayerFv(); } }
void TObjPlayer__sub_803075EC(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x1F8) = 5;
    clear_equip_flags__10TObjPlayerFPvUi(arg0, 0x800U);
}

}
