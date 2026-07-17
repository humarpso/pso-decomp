#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 obj_testFlags30(s32, s32);
s32 check_flag30_bit20__10TObjPlayerFi();
s32 is_status_flag_200__10TObjPlayerFPv(s32);
s32 TObjPlayer__sub_801D0BC0(s32, s32, s32);
void send_object_id_packet__10TObjPlayerFi(s32 arg0);
s32 obj_isState2_324();
s16 obj_getField1c(s32);
M2C_UNK init_shield_attack_packet__10TObjPlayerFPv(M2C_UNK *);
M2C_UNK draw_font_and_send__10TObjPlayerFPv(M2C_UNK *);
int TFontSmallLobby__sub_801C0228(void*);
void TObjPlayer__sub_801CBB10(void);
void TObjPlayer__sub_801CBB80(void);

void TObjPlayer__sub_801CBB80(void) {  }
void select_hit_action__10TObjPlayerFi(s32 arg0) {
    if (check_flag30_bit20__10TObjPlayerFi() != 0) {
        TObjPlayer__sub_801D0BC0(arg0, 0x13, 5);
        return;
    }
    if (is_status_flag_200__10TObjPlayerFPv(arg0) != 0) {
        if (obj_testFlags30(arg0, 0x400) != 0) {
            TObjPlayer__sub_801D0BC0(arg0, 0xE, 5);
            return;
        }
        TObjPlayer__sub_801D0BC0(arg0, 0xD, 5);
    }
}

}
