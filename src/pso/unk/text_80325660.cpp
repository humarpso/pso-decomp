#include "types.h"
struct Ent_80325660 { u8 b[0x20]; };

struct Obj_80325660 { u8 pad[0x20]; u32 count; u8 pad2[4]; Ent_80325660 ents[12]; u32 col[4]; };

extern "C" {
void set_global_param__8TObjFishFi(s32);
void TWindowSubStatusDisp__sub_803DEE6C(int);
void get_player__20TWindowSubStatusDispFv();
void TWindowSubComCard__sub_803DEECC(void *, f32);
void TWindowSubStatusDisp__sub_803DF160(int, u32);
extern s32 lbl_805D6C58;
extern const f32 lbl_805DF600;
void fn_80325660(Obj_80325660 *arg0);
}

extern "C" {

void fn_80325660(Obj_80325660 *arg0) {
    u32 i;
    for (i = 0; i < arg0->count; i++) {
        TWindowSubStatusDisp__sub_803DEE6C(1);
        set_global_param__8TObjFishFi(lbl_805D6C58);
        TWindowSubStatusDisp__sub_803DF160(0, (arg0->col[i] << 24) | 0xFFFFFF);
        TWindowSubComCard__sub_803DEECC(&arg0->ents[i], lbl_805DF600);
        get_player__20TWindowSubStatusDispFv();
    }
}

}
