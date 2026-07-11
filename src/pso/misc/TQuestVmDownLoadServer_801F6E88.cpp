#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void check_client_connections__22TQuestVmDownLoadServerFPv(void *arg0);
s32 TAdPlayerLoadGC__sub_801E1E38(s32);
M2C_UNK clear_flag4_bit4__22TQuestVmDownLoadServerFPv(void *);
M2C_UNK TQuestVmDownLoadServer__sub_801F6E08(void *, s32, M2C_UNK);
M2C_UNK fn_8001A438(void *);
s32 fn_8006EF6C(M2C_UNK);

extern s32 lbl_805D55C0;
extern s32 lbl_805D5F18;

void check_client_connections__22TQuestVmDownLoadServerFPv(void *arg0) {
    s32 temp_r0;
    s32 temp_r3;
    s32 var_r30;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x2A0);
    if ((temp_r0 == 0) || (temp_r0 == 0x15) || (temp_r0 == 0x16)) {
        return;
    }
    {
        if ((s32) lbl_805D55C0 != 0) {
            if ((u32) M2C_FIELD(arg0, u32 *, 0x29C) != 0U) {
                fn_8001A438(M2C_FIELD(arg0, void **, 0x29C));
            }
        } else {
            if ((u32) M2C_FIELD(arg0, u32 *, 0x29C) != 0U) {
                clear_flag4_bit4__22TQuestVmDownLoadServerFPv(M2C_FIELD(arg0, void **, 0x29C));
            }
            var_r30 = 0;
            M2C_FIELD(arg0, s32 *, 0x234) = 0;
            do {
                if (TAdPlayerLoadGC__sub_801E1E38(var_r30) != 0) {
                    M2C_FIELD(arg0, s32 *, 0x234) = (s32) (M2C_FIELD(arg0, s32 *, 0x234) | (1 << var_r30));
                }
                var_r30 += 1;
            } while (var_r30 < 8);
            temp_r3 = M2C_FIELD(arg0, s32 *, 0x234);
            if (temp_r3 != (s32) M2C_FIELD(arg0, s32 *, 0x238)) {
                M2C_FIELD(arg0, s32 *, 0x238) = temp_r3;
                if ((s32) lbl_805D5F18 != 0) {
                    lbl_805D5F18 = 0;
                    TQuestVmDownLoadServer__sub_801F6E08(arg0, fn_8006EF6C(0xB), 1);
                    M2C_FIELD(arg0, s32 *, 0x2A0) = 0x12;
                } else {
                    M2C_FIELD(arg0, s32 *, 0x2A0) = 1;
                }
            }
        }
    }
}

}
