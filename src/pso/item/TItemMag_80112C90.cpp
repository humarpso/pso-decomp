#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 apply_feed_stats__8TItemMagFPvPv(u8 *arg0, u8 *arg1);
u8 TItemMagSub__sub_8011455C(void *);
M2C_UNK TItemMag__sub_80100D94(void *, void *);
M2C_UNK TItemMag__sub_801124C4(void *);
M2C_UNK TItemMag__sub_801140F4(void *, int);
M2C_UNK TItemMag__sub_80114198(void *, int);
M2C_UNK TItemMag__sub_8011423C(void *, int);
M2C_UNK TItemMag__sub_801142E0(void *, int);
s32 TObjPlayer__sub_80099EF8(int);
M2C_UNK TObjPlayer__sub_8010069C(void *);
s8 TObjPlayer__sub_80102C30(void *);
M2C_UNK TObjPlayer__sub_801B9EDC(int, int);
M2C_UNK add_clamped_stat__8TItemMagFPvi(void *, int);
M2C_UNK add_stat_clamped__8TItemMagFPvi(void *, int);
s32 get_item_field_6__10TObjPlayerFPv(int);
s32 get_item_info__10TObjPlayerFiiPv(int, int, int);
s32 obj_isState2_324(int);

s32 apply_feed_stats__8TItemMagFPvPv(u8 *arg0, u8 *arg1) {
    if (arg1 != NULL) {
        TItemMag__sub_801142E0((void *) (arg0 + 0x198), (int) (M2C_FIELD(arg1, s16 *, 4)));
        TItemMag__sub_8011423C((void *) (arg0 + 0x198), (int) (M2C_FIELD(arg1, s16 *, 6)));
        TItemMag__sub_801140F4((void *) (arg0 + 0x198), (int) (M2C_FIELD(arg1, s16 *, 0xA)));
        TItemMag__sub_80114198((void *) (arg0 + 0x198), (int) (M2C_FIELD(arg1, s16 *, 8)));
        add_stat_clamped__8TItemMagFPvi((void *) (arg0 + 0x198), (int) (M2C_FIELD(arg1, s16 *, 0)));
        add_clamped_stat__8TItemMagFPvi((void *) (arg0 + 0x198), (int) (M2C_FIELD(arg1, s16 *, 2)));
        TItemMag__sub_80100D94((void *) (arg0), (void *) (TItemMagSub__sub_8011455C((void *) (arg0 + 0x198))));
        if (TObjPlayer__sub_80102C30((void *) (arg0)) == 2) {
            TObjPlayer__sub_8010069C((void *) (arg0));
            if (obj_isState2_324((int) (M2C_FIELD(arg0, s32 *, 0xF0))) == 0) {
                arg1 = (u8 *) get_item_field_6__10TObjPlayerFPv((int) (M2C_FIELD(arg0, s32 *, 0xF0)));
                if ((arg1 != NULL) && (get_item_info__10TObjPlayerFiiPv((int) (arg1), (int) (M2C_FIELD(arg0, s32 *, 0xF0)), (int) (0)) == 0)) {
                    TObjPlayer__sub_801B9EDC((int) (M2C_FIELD(arg0, s32 *, 0xF0)), (int) (TObjPlayer__sub_80099EF8((int) (arg1))));
                }
            }
        }
        TItemMag__sub_801124C4((void *) (arg0));
        return 1;
    }
    return 0;
}

}
