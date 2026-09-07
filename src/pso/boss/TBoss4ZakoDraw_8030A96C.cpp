#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_8030ABF4_TCameraCtrl__data_804FF634 {
    M2C_UNK value;
    u8 remaining[0x44];
};

struct RecoveredGlobal_8030ABF4_lbl_80541E58 {
    M2C_UNK value;
    u8 remaining[0xF04];
};

extern "C" {
s32 is_split_screen();
u8 *TObjFish__sub_8001EDC4(s32, s32);
s32 get_instance_count__9TBoss4UroFv();
s32 TCameraCtrl__sub_801E317C(int, int);
s32 TObjPlayer__sub_8030A9B0();
s32 TObjPlayer__sub_8030AB48();
extern RecoveredGlobal_8030ABF4_TCameraCtrl__data_804FF634 TCameraCtrl__data_804FF634;
extern RecoveredGlobal_8030ABF4_lbl_80541E58 lbl_80541E58;
extern s32 lbl_805D6A70;
extern s32 lbl_805D6A74;
void TCameraCtrl__sub_8030ABF4(void);
}

extern "C" {

void *__ct__14TBoss4ZakoDrawFv(void *arg0);
void __ct__7TObjectFP7TObject(void *);

extern M2C_UNK __vt__14TBoss4ZakoDraw[];
extern void *lbl_805D40D0;

void *__ct__14TBoss4ZakoDrawFv(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__14TBoss4ZakoDraw;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D40D0;
    return arg0;
}
typedef char RecoveredGlobal_8030ABF4_TCameraCtrl__data_804FF634_size[sizeof(RecoveredGlobal_8030ABF4_TCameraCtrl__data_804FF634) == 0x48 ? 1 : -1];
typedef char RecoveredGlobal_8030ABF4_lbl_80541E58_size[sizeof(RecoveredGlobal_8030ABF4_lbl_80541E58) == 0xF08 ? 1 : -1];
void TCameraCtrl__sub_8030ABF4(void) {
    M2C_UNK *var_r3;
    u8 *var_r31;
    u8 *var_r4;
    var_r3 = (M2C_UNK *)(&lbl_80541E58.value);
    var_r3 = (M2C_UNK *)(&lbl_80541E58.value);
    if ((s32) M2C_FIELD(((u8 *)(&lbl_80541E58.value) + (lbl_805D6A70 * 0x784)), s32 *, 0) != 0) {
        var_r3 = (M2C_UNK *)(&TCameraCtrl__data_804FF634.value);
        var_r3 = (M2C_UNK *)(&TCameraCtrl__data_804FF634.value);
        var_r31 = (u8 *)(&TCameraCtrl__data_804FF634.value) + 0x30;
        if (is_split_screen() == 0) {
            var_r4 = (u8 *)(var_r31);
            var_r3 = (M2C_UNK *)((u8 *)((M2C_UNK *)2));
            TCameraCtrl__sub_801E317C((int) (2), (int) (var_r4));
        }
        var_r4 = (u8 *)((void *)8);
        var_r3 = (M2C_UNK *)(M2C_FIELD(TObjFish__sub_8001EDC4(get_instance_count__9TBoss4UroFv(), 8), M2C_UNK **, 0x2C));
        M2C_FIELD(var_r3, s32 *, 0x18) = (s32) (lbl_805D6A74 << 0xC);
        TObjPlayer__sub_8030AB48();
        TObjPlayer__sub_8030A9B0();
    }
}

}
