#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_motion_and_release__14TBoss7CrawfishFPv(u8 *arg0);
M2C_UNK TBoss7Crawfish__sub_803086A8(void *, void *, f32, f32);
M2C_UNK TBoss7Crawfish__sub_803087D4(void *, int);
s32 TBoss7Crawfish__sub_80308ED8(void *, void *);
M2C_UNK TBoss7Crawfish__sub_80308F8C(void *, int);
M2C_UNK copy_pos__11TNowLoadingFPvPv(void *, void *);
M2C_UNK free_child__14TBoss7CrawfishFPv(void *);

extern const f32 TBoss7Crawfish__data_805DF0DC;
extern const f32 lbl_805DF0F4;

void update_motion_and_release__14TBoss7CrawfishFPv(u8 *arg0) {
    f32 *temp_r4;

    temp_r4 = M2C_FIELD(arg0, f32 **, 0x3A0);
    M2C_FIELD(arg0, f32 *, 0xC8) = (f32) (lbl_805DF0F4 * (TBoss7Crawfish__data_805DF0DC + *temp_r4));
    TBoss7Crawfish__sub_803086A8((void *) (arg0), (void *) (temp_r4), (f32) (TBoss7Crawfish__data_805DF0DC), (f32) (lbl_805DF0F4));
    {
        void *temp_ptr = (void *) M2C_FIELD(arg0, u32 *, 0x3CC);
        if (temp_ptr != NULL) {
            copy_pos__11TNowLoadingFPvPv(temp_ptr, (void *) (arg0 + 0x38));
        }
    }
    if (TBoss7Crawfish__sub_80308ED8((void *) (arg0), (void *) (arg0 + 0x308)) == 0) {
        free_child__14TBoss7CrawfishFPv((void *) (arg0));
        TBoss7Crawfish__sub_80308F8C((void *) (arg0), (int) (3));
        return;
    }
    TBoss7Crawfish__sub_803087D4((void *) (arg0), (int) (0x3A80C));
}

}
