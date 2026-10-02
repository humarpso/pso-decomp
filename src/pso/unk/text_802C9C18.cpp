#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Sounds_802C9C18 { s32 a[2]; s32 b[2]; s32 c[2]; s32 d[2]; };

extern "C" {
u16 obj_getField1c(void *);
M2C_UNK obj_clear_flag30_20000(int);
s32 check_player_flag1__6TLobbyFPv();
M2C_UNK send_code_45_1__10TObjPlayerFi(int);
s32 get_player_by_client_id(void *);
s32 is_not_split_screen__13TRaderMapCoreFv();
extern s32 lbl_805D53A0;
void fn_802C9D38(u8 *arg0);
s32 get_global_state__14TOKeyMachine01Fv();
s32 TBoss3Volopt__sub_8022675C(s32, void *, s32, s32);
extern Sounds_802C9C18 lbl_804720B8;
void fn_802C9C18(u8 *arg0, s32 arg1);
}

extern "C" {

void fn_802C9C18(u8 *arg0, s32 arg1) {
    Sounds_802C9C18 s = lbl_804720B8;
    switch (get_global_state__14TOKeyMachine01Fv()) {
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1A:
    case 0x1B:
        *(s32 *)(arg0 + 0x358) = TBoss3Volopt__sub_8022675C(s.a[arg1], arg0 + 0x38, 0, 0);
        break;
    case 0x1C:
    case 0x1D:
        *(s32 *)(arg0 + 0x358) = TBoss3Volopt__sub_8022675C(s.b[arg1], arg0 + 0x38, 0, 0);
        break;
    case 0x22:
        *(s32 *)(arg0 + 0x358) = TBoss3Volopt__sub_8022675C(s.c[arg1], arg0 + 0x38, 0, 0);
        break;
    case 0x23:
        *(s32 *)(arg0 + 0x358) = TBoss3Volopt__sub_8022675C(s.d[arg1], arg0 + 0x38, 0, 0);
        break;
    }
}

#pragma push
#pragma fp_contract on
void fn_802C9D38(u8 *arg0) {
    s32 temp_r3;
    s32 temp_r3_2;
    if (is_not_split_screen__13TRaderMapCoreFv() == 1) {
        void *o = M2C_FIELD(arg0, void **, 0x2A8);
        if (o != NULL) {
            temp_r3 = get_player_by_client_id((void *) (obj_getField1c(o)));
            if (temp_r3 != 0) {
                if (check_player_flag1__6TLobbyFPv() != 0) {
                    send_code_45_1__10TObjPlayerFi((int) (temp_r3));
                }
                obj_clear_flag30_20000((int) (temp_r3));
            }
        }
    } else {
        void *o2 = M2C_FIELD(arg0, void **, 0x2A8);
        if ((o2 != NULL) && ((s32) lbl_805D53A0 == (s32) obj_getField1c(o2))) {
        temp_r3_2 = get_player_by_client_id((void *) (lbl_805D53A0));
        if ((temp_r3_2 != 0) && (check_player_flag1__6TLobbyFPv() != 0)) {
            send_code_45_1__10TObjPlayerFi((int) (temp_r3_2));
        }
        }
    }
}
#pragma pop

}
