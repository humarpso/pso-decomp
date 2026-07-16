#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void run_task__14TBoss7CrawfishFv(u8 *arg0);
M2C_UNK TBoss1Dragon__sub_80143504(void *);
M2C_UNK TBoss7Crawfish__sub_80308BEC(void *);
M2C_UNK update_motion_and_release__14TBoss7CrawfishFPv(void *);
M2C_UNK TBoss7Crawfish__sub_80308D1C(void *);
M2C_UNK TBoss7Crawfish__sub_80308F8C(void *, int);
M2C_UNK TObjPlayer__sub_80154E3C(void *);
M2C_UNK TObjPlayer__sub_801B4A18(void *, int);
M2C_UNK TRaderMapCore__sub_801F99EC(void *, int, int, int, f32);
M2C_UNK check_band_and_destroy__14TBoss7CrawfishFi(void *);
s32 obj_testFlags30(void *, int);
M2C_UNK update__14TBoss7CrawfishFi(void *);
M2C_UNK update_attack_state__14TBoss7CrawfishFPv(void *);

extern const f32 lbl_805DF0FC;

void run_task__14TBoss7CrawfishFv(u8 *arg0) {
    s16 temp_r0;

    if (((s16) M2C_FIELD(arg0, s16 *, 0x326) != 5) && (obj_testFlags30((void *) (arg0), (int) (0x800)) != 0)) {
        TBoss7Crawfish__sub_80308F8C((void *) (arg0), (int) (4));
    }
    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    switch (temp_r0) {
    case 0:
        update_attack_state__14TBoss7CrawfishFPv((void *) (arg0));
        break;
    case 1:
        TBoss7Crawfish__sub_80308D1C((void *) (arg0));
        break;
    case 2:
        update_motion_and_release__14TBoss7CrawfishFPv((void *) (arg0));
        break;
    case 3:
        update__14TBoss7CrawfishFi((void *) (arg0));
        break;
    case 4:
        TBoss7Crawfish__sub_80308BEC((void *) (arg0));
        break;
    case 5:
        check_band_and_destroy__14TBoss7CrawfishFi((void *) (arg0));
        break;
    }
    TObjPlayer__sub_80154E3C((void *) (arg0));
    if (!(M2C_FIELD(M2C_FIELD(arg0, void **, 0xA4), s32 *, 0x18) & 0x02000000)) {
        TObjPlayer__sub_801B4A18((void *) (arg0), (int) (-1));
    }
    TRaderMapCore__sub_801F99EC((void *) (arg0 + 0x38), (int) (-0x5DB4), (int) (1), (int) (1), (f32) (lbl_805DF0FC));
    TBoss1Dragon__sub_80143504((void *) (arg0));
}

}
