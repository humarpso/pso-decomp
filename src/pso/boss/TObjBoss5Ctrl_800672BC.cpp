#include "types.h"
#pragma fp_contract on
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TObjBoss5Ctrl__ct(void *arg0);
s32 rand__11TOBoss4RockFv();
M2C_UNK __ct__7TObjectFP7TObject(void *);
s32 TObjPlayer__sub_800196EC(f32, f32, f32);
s32 TLobby__sub_8020C1F0(M2C_UNK, s32);
u32 create__19TObjBoss5FloorStoneFv();
u32 create__19TObjBoss5FloorGrassFv();
u32 TObjBoss5PillarDemo__sub_8028AC8C();
u32 TObjBoss5PillarCtrl__sub_8028B324(void *);

s32 is_split_screen();
extern const f64 lbl_80438138;
extern void *__vt__13TObjBoss5Ctrl[];
extern s32 lbl_805D2828;
extern const f32 lbl_805D8F10;
extern const f32 lbl_805D8F14;
extern const f32 lbl_805D8F18;

void *TObjBoss5Ctrl__ct(void *arg0) {
    s32 temp_r3;
    f32 temp_f2;
    f32 temp_f3;

    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, void **, 0x18) = __vt__13TObjBoss5Ctrl;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D2828;
    M2C_FIELD(arg0, u32 *, 0x1C) = 0U;
    M2C_FIELD(arg0, u32 *, 0x20) = 0U;
    M2C_FIELD(arg0, u32 *, 0x24) = 0U;
    M2C_FIELD(arg0, u32 *, 0x28) = 0U;
    temp_f3 = (f32) rand__11TOBoss4RockFv();
    temp_f2 = lbl_805D8F18 * temp_f3;
    M2C_FIELD(arg0, s16 *, 0x2C) = (s16) (lbl_805D8F14 * temp_f2 + lbl_805D8F10);
    temp_r3 = TObjPlayer__sub_800196EC(lbl_805D8F14, temp_f2, temp_f3);
    if (TLobby__sub_8020C1F0(temp_r3, 1) == 0) {
        if (is_split_screen() == 0) {
            if ((u32) M2C_FIELD(arg0, u32 *, 0x1C) == 0U) {
                M2C_FIELD(arg0, u32 *, 0x1C) = create__19TObjBoss5FloorGrassFv();
            }
            if ((u32) M2C_FIELD(arg0, u32 *, 0x20) == 0U) {
                M2C_FIELD(arg0, u32 *, 0x20) = create__19TObjBoss5FloorStoneFv();
            }
            if ((u32) M2C_FIELD(arg0, u32 *, 0x24) == 0U) {
                M2C_FIELD(arg0, u32 *, 0x24) = TObjBoss5PillarCtrl__sub_8028B324(arg0);
            }
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x28) == 0U) {
            M2C_FIELD(arg0, u32 *, 0x28) = TObjBoss5PillarDemo__sub_8028AC8C();
        }
    }
    return arg0;
}

}
