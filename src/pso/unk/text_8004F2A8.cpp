#include "types.h"

typedef struct Rec_8004F2A8 {
    s32 a;
    s32 b;
    s32 c;
} Rec_8004F2A8;

typedef struct Obj_8004F2A8 {
    u8 pad0[0xAC];
    Rec_8004F2A8 recs[2];
    u8 padc4[0xE8 - 0xC4];
    f32 fe8[3];
    s32 ff4;
    s32 ff8;
} Obj_8004F2A8;

extern "C" {
void sync_player_globals__10TObjPlayerFv();
void TObjPlayer__sub_80052390(f32);
void TObjPlayer__sub_803D9214(s32, s32);
void TObjPlayer__sub_803D9B2C();
void TObjPlayer__sub_803D9B78();
void TOHangerMachine01__sub_803D9C00(void *);
void set_global_param__8TObjFishFi(s32);
void TObjEneSlimeOne__sub_803E4AF4(s32, s32, f32);
void set_global_flag__10TObjPlayerFv();
void clear_global_state__10TObjPlayerFv();
extern const f32 lbl_805D89F0;
extern const f32 lbl_805D89F4;
extern const f32 lbl_805D89F8;
void TObjPlayer__sub_8004F2A8(Obj_8004F2A8 *arg0);
}

extern "C" {

void TObjPlayer__sub_8004F3A0(void* p);
int fn_8004F1FC(void*);

void TObjPlayer__sub_8004F2A8(Obj_8004F2A8 *arg0) {
    f32 alpha;
    s32 i;
    alpha = lbl_805D89F0;
    if (arg0->ff8 > 0x4C) {
        return;
    }
    if (arg0->ff8 > 0x44) {
        alpha = (f32)(0x4C - arg0->ff8) * lbl_805D89F4;
    }
    if (alpha < 1.0f) {
        TObjPlayer__sub_80052390(alpha);
    }
    TObjPlayer__sub_803D9B2C();
    set_global_flag__10TObjPlayerFv();
    TOHangerMachine01__sub_803D9C00(arg0->fe8);
    TObjPlayer__sub_803D9214(0, arg0->ff4);
    for (i = 0; i < 2; i++) {
        set_global_param__8TObjFishFi(arg0->recs[i].b);
        TObjEneSlimeOne__sub_803E4AF4(arg0->recs[i].a, arg0->recs[i].c, lbl_805D89F8);
    }
    clear_global_state__10TObjPlayerFv();
    TObjPlayer__sub_803D9B78();
    if (alpha < 1.0f) {
        sync_player_globals__10TObjPlayerFv();
    }
}

void TObjPlayer__sub_8004F3A0(void* p) { TObjPlayer__sub_8004F2A8((Obj_8004F2A8 *)(p)); fn_8004F1FC(p); }

}
