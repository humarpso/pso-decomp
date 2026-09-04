#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjBoss1Floor__sub_8002CB40(void);
void TObjBoss1Floor__sub_8002CB78(void);
void create_instance__14TObjBoss1FloorFv(void);
void render_boss_effect_object(u8 *arg0);
M2C_UNK TBoss8Dragon__sub_8002D4C0(void *);
M2C_UNK TObjBoss1Floor__ct(void*, s32);
M2C_UNK TObjFish__sub_803E46BC(void *);
M2C_UNK TObjPlayer__sub_803D9624(int, f32, f32, f32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
void* __nw__7TObjectFUl(M2C_UNK);
M2C_UNK set_global_pair__10TObjPlayerFii(int, int, void *, void *);
M2C_UNK set_global_param__8TObjFishFi(void *);

void TObjBoss1Floor__sub_8002CB40(void) {  }

extern s32 tl_02;

void create_instance__14TObjBoss1FloorFv(void) {
    void* obj = __nw__7TObjectFUl(0x38);
    if (obj != 0) {
        TObjBoss1Floor__ct(obj, tl_02);
    }
}

void TObjBoss1Floor__sub_8002CB78(void) {  }

extern u8 *lbl_805D4B50;
extern s32 lbl_805D4B54;
extern s32 lbl_805D5660;
extern s32 lbl_805D5664;
extern s32 lbl_805D5668;
extern s32 lbl_805D7780;
extern s32 lbl_805D7784;
extern s32 some_id_805c6f74;

void render_boss_effect_object(u8 *arg0) {
    set_global_param__8TObjFishFi((void *) (lbl_805D4B54));
    TBoss8Dragon__sub_8002D4C0((void *) (arg0 + 0x28));
    TObjPlayer__sub_803D9B2C();
    TObjPlayer__sub_803D9624((int) (0), (f32) (M2C_FIELD(arg0, f32 *, 0x28)), (f32) (M2C_FIELD(arg0, f32 *, 0x34)), (f32) (M2C_FIELD(arg0, f32 *, 0x30)));
    if ((s32) M2C_FIELD(arg0, s32 *, 0x48) != 0) {
        lbl_805D5660 = some_id_805c6f74;
        lbl_805D5664 = lbl_805D7784;
        lbl_805D5668 = lbl_805D7780;
        some_id_805c6f74 |= 0x800;
        set_global_pair__10TObjPlayerFii((int) (0xFF00), (int) (0x100), (void *) (lbl_805D7780), (void *) (lbl_805D7784));
        TObjFish__sub_803E46BC((void *) (M2C_FIELD(M2C_FIELD(lbl_805D4B50, void **, 0x42C), s32 *, 0x38)));
        lbl_805D7784 = lbl_805D5664;
        lbl_805D7780 = lbl_805D5668;
        some_id_805c6f74 = lbl_805D5660;
    } else {
        TObjFish__sub_803E46BC((void *) (M2C_FIELD(M2C_FIELD(lbl_805D4B50, void **, 0x42C), s32 *, 0x38)));
    }
    TObjPlayer__sub_803D9B78();
}

}
