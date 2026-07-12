#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_state__12TBoss8DragonFi(s32 arg0);
void TBoss8Dragon__sub_802FB484(void);
void update_pos_from_data__12TBoss8DragonFv(void);
M2C_UNK TBoss8Dragon__sub_802FB170(s32, M2C_UNK *);
M2C_UNK TBoss8Dragon__sub_802FB4DC(f32, f32, f32);
M2C_UNK TBoss8Dragon__sub_802FBE3C();
M2C_UNK TBoss8Dragon__sub_802FBF40(s32);

extern M2C_UNK lbl_804744DC[];

void init_state__12TBoss8DragonFi(s32 arg0) {
    TBoss8Dragon__sub_802FBE3C();
    TBoss8Dragon__sub_802FB170(arg0, lbl_804744DC);
    TBoss8Dragon__sub_802FBF40(arg0);
}

extern const f32 TBoss8Dragon__data_805DEDAC;
extern const f32 TBoss8Dragon__data_805DEEA4;
extern const f32 lbl_805DEEBC;

void TBoss8Dragon__sub_802FB484(void) {
    TBoss8Dragon__sub_802FB4DC(TBoss8Dragon__data_805DEEA4, lbl_805DEEBC, TBoss8Dragon__data_805DEDAC);
}

extern const f32 TBoss8Dragon__data_805DEEA4;
extern const f32 lbl_805DEEC0;
extern const f32 lbl_805DEEC4;

void update_pos_from_data__12TBoss8DragonFv(void) {
    TBoss8Dragon__sub_802FB4DC(TBoss8Dragon__data_805DEEA4, lbl_805DEEC0, lbl_805DEEC4);
}

}
