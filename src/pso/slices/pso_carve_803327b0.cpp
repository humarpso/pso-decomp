#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TCameraCtrl__sub_8006B360(void *);
M2C_UNK draw__16TObjEneRe7BeruraFPv(void *);
s32 TObjEneRecon__sub_8029E960(void *);
M2C_UNK restore_render_scissor(int);
M2C_UNK TObjEneMorfos__sub_803326CC(void *);
M2C_UNK TObjPlayer__sub_803D9214(int, int);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjFish__sub_803DA798(int);
extern M2C_UNK main_task[];

s32 TObjEneMorfos__sub_803327B0(u8 *arg0) {
    if (TCameraCtrl__sub_8006B360((void *) (main_task)) & 0x20) {
        if (TObjEneRecon__sub_8029E960((void *) (arg0 + 0x3C8)) != 0) {
            TObjFish__sub_803DA798((int) (M2C_FIELD(arg0, s32 *, 0x24)));
            TObjPlayer__sub_803D9B2C();
            TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x38));
            TObjPlayer__sub_803D9214((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
            draw__16TObjEneRe7BeruraFPv((void *) (arg0));
            TObjPlayer__sub_803D9B78();
            if (M2C_FIELD(arg0, s32 *, 0x3C0) & 0x10) {
                TObjEneMorfos__sub_803326CC((void *) (arg0));
            }
            restore_render_scissor((int) (1));
        }
        return 1;
    }
    return 0;
}

}
