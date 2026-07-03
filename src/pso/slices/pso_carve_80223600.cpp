#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 obj_getField1c(u32);
s32 TObjPlayer__sub_801B12CC();
s32 TObjPlayer__sub_801B71AC(u32);
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
s32 TWindowCtrl__sub_8024AEF0(u16);
s32 TRaderMapCore__sub_8030A808();
s32 TObjPlayer__sub_801B130C();
s32 TObjPlayer__sub_801B71DC(void *);
s32 TWindowCtrl__sub_8024AEAC(u16);
s32 is_split_screen();
s32 fn_801D5DAC();
s32 fn_801FF5E4(s32);
void fn_80223674(void* p);
void fn_802236A0(void* p);
void fn_802236CC(void* p);
void fn_802236F8(void* p);
int fn_80222848(void*);
int fn_80222898(void*);
int fn_80222910(void*);
int fn_8022297C(void*);

int fn_80223600(void) { return 0; }
void fn_80223674(void* p) { void* m = *(void**)((char*)p + 0x28); if (m) fn_80222898(m); }
void fn_802236A0(void* p) { void* m = *(void**)((char*)p + 0x28); if (m) fn_80222848(m); }
void fn_802236CC(void* p) { void* m = *(void**)((char*)p + 0x28); if (m) fn_80222910(m); }
void fn_802236F8(void* p) { void* m = *(void**)((char*)p + 0x28); if (m) fn_8022297C(m); }
void fn_80223724(void) {
    if ((fn_801D5DAC() != 0) && (is_split_screen() == 0)) {
        fn_801FF5E4(0);
    }
}
void fn_80223760(void *arg0) {
    s32 var_r31;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x24) != 0U) {
        TWindowCtrl__sub_8024AEF0(obj_getField1c(M2C_FIELD(arg0, u32 *, 0x24)));
        if (TRaderMapCore__sub_8030A808() != 1) {
            var_r31 = 0;
            do {
                if (TPlayerBattleCtrl4P__sub_801BA74C(var_r31) != 0U) {
                    TObjPlayer__sub_801B12CC();
                }
                var_r31 += 1;
            } while (var_r31 < 4);
        }
        TObjPlayer__sub_801B71AC(M2C_FIELD(arg0, u32 *, 0x24));
    }
}
void fn_802237D8(void *arg0) {
    s32 var_r31;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x24) != 0U) {
        TObjPlayer__sub_801B71DC(M2C_FIELD(arg0, void **, 0x24));
        if (TRaderMapCore__sub_8030A808() != 1) {
            var_r31 = 0;
            do {
                if (TPlayerBattleCtrl4P__sub_801BA74C(var_r31) != 0U) {
                    TObjPlayer__sub_801B130C();
                }
                var_r31 += 1;
            } while (var_r31 < 4);
        }
        TWindowCtrl__sub_8024AEAC(obj_getField1c(M2C_FIELD(arg0, u32 *, 0x24)));
    }
}

}
