#include "types.h"
#include "pso/unk/text_8036A3CC.h"

struct FlagLink_8036A514 {
    s32 flag;
    s32 linked;
};

extern const FlagLink_8036A514 lbl_8047AB8C[];

extern "C" {
s32 check_flag_index_set(s32);
void fn_8036A514(s32 flag);
}

void fn_8036A514(s32 flag) {
    u32 mask;
    u32 *word;
    s32 i;

    if (check_flag_index_set(flag) != 1 && flag >= 0 && flag < 0x31) {
        word = fn_8036A3CC(flag, &mask);
        if (word != 0) {
            *word |= mask;
            for (i = 0; lbl_8047AB8C[i].flag != -1; i++) {
                if (flag == lbl_8047AB8C[i].flag) {
                    fn_8036A514(lbl_8047AB8C[i].linked);
                }
            }
        }
    }
}
