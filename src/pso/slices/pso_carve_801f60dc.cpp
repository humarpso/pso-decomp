#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TQuestListVM__sub_8007EB00();
M2C_UNK TQuestListVM__sub_8007EB08();
s32 TQuestThread__sub_801F624C(s32, s32, s32, s32);
s32 TQuestThread__sub_801F6418(s32, s32, s32);
s32 TQuestListVM__sub_801F6530();
s32 TQuestListOnline__sub_801F6538();
s32 TQuestListOnline__sub_801F6540();
s32 TQuestThread__sub_801F6548();
s32 __nw__7TObjectFUl(M2C_UNK);
extern s32 evt2_random_enemies_mode;
extern s32 tl_su;

s32 TQuestThread__sub_801F60DC(void) {
    s32 temp_r31;
    s32 temp_r31_2;
    s32 temp_r31_3;
    s32 var_r30;
    s32 var_r30_2;
    s32 var_r30_3;
    s32 var_r30_4;
    s32 var_r31;

    switch ((s32) evt2_random_enemies_mode) {
    case 1:
        var_r31 = __nw__7TObjectFUl(0x1A4);
        if (var_r31 != 0) {
            var_r31 = TQuestThread__sub_801F6418(var_r31, tl_su, TQuestThread__sub_801F6548());
        }
        return var_r31;
    case 2:
        var_r30 = __nw__7TObjectFUl(0x1A4);
        if (var_r30 != 0) {
            temp_r31 = TQuestListOnline__sub_801F6538();
            var_r30 = TQuestThread__sub_801F624C(var_r30, tl_su, TQuestListOnline__sub_801F6540(), temp_r31);
        }
        return var_r30;
    case 3:
        var_r30_2 = __nw__7TObjectFUl(0x1A4);
        if (var_r30_2 != 0) {
            temp_r31_2 = TQuestListVM__sub_801F6530();
            var_r30_2 = TQuestThread__sub_801F624C(var_r30_2, tl_su, TQuestListVM__sub_8007EB00(), temp_r31_2);
        }
        TQuestListVM__sub_8007EB08();
        return var_r30_2;
    case 4:
        var_r30_3 = __nw__7TObjectFUl(0x1A4);
        if (var_r30_3 != 0) {
            temp_r31_3 = TQuestListOnline__sub_801F6538();
            var_r30_3 = TQuestThread__sub_801F624C(var_r30_3, tl_su, TQuestListOnline__sub_801F6540(), temp_r31_3);
        }
        return var_r30_3;
    case 5:
        var_r30_4 = __nw__7TObjectFUl(0x1A4);
        if (var_r30_4 != 0) {
            var_r30_4 = TQuestThread__sub_801F6418(var_r30_4, tl_su, TQuestThread__sub_801F6548());
        }
        return var_r30_4;
    default:
        return 0;
    }
}

}
