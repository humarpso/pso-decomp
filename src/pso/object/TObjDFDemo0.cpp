#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef struct Rec_8004E2C8 {
    s32 a;
    s32 b;
    s32 c;
} Rec_8004E2C8;

typedef struct Obj_8004E2C8 {
    u8 pad0[0xA0];
    Rec_8004E2C8 recs[6];
    u8 pade8[0x100 - 0xE8];
    f32 f100[3];
    s32 f10c;
    s32 f110;
    f32 f114;
} Obj_8004E2C8;

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
extern const f32 lbl_805D8988;
extern const f32 lbl_805D898C;
extern const f32 lbl_805D89A0;
void TObjPlayer__sub_8004E2C8(Obj_8004E2C8 *arg0);
}

extern "C" {

void TObjPlayer__sub_8004E3F4(void* p);
void *create__11TObjDFDemo0FPv(void *arg0);
void *TObjDFDemo0__ct(void *, void *);
int TObjPlayer__sub_8004E068(void*);
void *__nw__7TObjectFUl(int);

void *create__11TObjDFDemo0FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x110);
    if (o != NULL) {
        o = TObjDFDemo0__ct(o, arg0);
    }
    return o;
}

void TObjPlayer__sub_8004E2C8(Obj_8004E2C8 *arg0) {
    f32 max;
    f32 alpha;
    f32 f;
    s32 i;
    alpha = lbl_805D8988;
    if (arg0->f110 >= 0x88) {
        return;
    }
    if (arg0->f110 > 0x7C) {
        alpha = (f32)(0x88 - arg0->f110) / lbl_805D898C;
    }
    if (alpha < 1.0f) {
        TObjPlayer__sub_80052390(alpha);
    }
    TObjPlayer__sub_803D9B2C();
    set_global_flag__10TObjPlayerFv();
    TOHangerMachine01__sub_803D9C00(arg0->f100);
    TObjPlayer__sub_803D9214(0, arg0->f10c);
    max = lbl_805D89A0;
    for (i = 0; i < 6; i++) {
        set_global_param__8TObjFishFi(arg0->recs[i].b);
        f = arg0->f114;
        switch (i) {
        case 0:
        case 1:
            if (f > max) {
                f = max;
            }
            break;
        }
        TObjEneSlimeOne__sub_803E4AF4(arg0->recs[i].a, arg0->recs[i].c, f);
    }
    clear_global_state__10TObjPlayerFv();
    TObjPlayer__sub_803D9B78();
    if (alpha < 1.0f) {
        sync_player_globals__10TObjPlayerFv();
    }
}

void TObjPlayer__sub_8004E3F4(void* p) { TObjPlayer__sub_8004E2C8((Obj_8004E2C8 *)(p)); TObjPlayer__sub_8004E068(p); }

}
