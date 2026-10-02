#include "types.h"
typedef s32 M2C_UNK;
struct Pkt_801C7874 { s16 hdr; s16 id; s32 val; };

struct Player_801C7874 {
    u8 pad0[0x328];
    s16 f328;
};

extern "C" {
s32 obj_isState2_324(void *);
s16 obj_getField1c(void *);
s32 TKeyBoardControl__sub_801A58B0();
s32 TKeyBoardControl__sub_801A5998(int);
s32 check_flag_100__10TObjPlayerFPv(void *);
M2C_UNK TObjPlayer__sub_801D0BC0(void *, int, int);
s32 is_action_flag_28__10TObjPlayerFPv(void *);
M2C_UNK TObjPlayer__sub_801D104C(void *);
M2C_UNK TObjPlayer__sub_801D1058(void *);
s32 TObjPlayer__sub_801D1078(void *);
M2C_UNK TObjPlayer__sub_801D1090(void *);
M2C_UNK TObjPlayer__sub_801D109C(void *);
s32 TObjPlayer__sub_801D10BC(void *);
M2C_UNK TObjPlayer__sub_801D1144(void *);
M2C_UNK TObjPlayer__sub_801D11D0(void *);
M2C_UNK send_swapped_packet__10TObjPlayerFPv(void *);
M2C_UNK bswap_and_send__10TObjPlayerFPv(void *);
s32 get_target_field_1c__10TObjPlayerFPv(void *);
f32 get_attached_float_24__10TObjPlayerFPv(void *);
s32 check_action_usable__10TObjPlayerFPvi(void *, int);
extern const f32 TObjPlayer__data_805DC368;
void TObjPlayer__sub_801C7874(u8 *arg0);
}

extern "C" {

void TObjPlayer__sub_801C7874(u8 *arg0) {
    Pkt_801C7874 a;
    Pkt_801C7874 b;
    s32 target;
    f32 amount;
    if (check_flag_100__10TObjPlayerFPv(arg0) == 0 && ((Player_801C7874 *)arg0)->f328 != 0 &&
        (check_action_usable__10TObjPlayerFPvi(arg0 + 0x550, 2) != 0 ||
         (is_action_flag_28__10TObjPlayerFPv(arg0) == 0 && TKeyBoardControl__sub_801A58B0() != 0 && TKeyBoardControl__sub_801A5998(0x24) != 0) ||
         (is_action_flag_28__10TObjPlayerFPv(arg0) != 0 && TKeyBoardControl__sub_801A58B0() != 0 && TKeyBoardControl__sub_801A5998(0x18) != 0))) {
        TObjPlayer__sub_801D0BC0(arg0, 1, 5);
        return;
    }
    target = get_target_field_1c__10TObjPlayerFPv(arg0 + 0x550);
    amount = get_attached_float_24__10TObjPlayerFPv(arg0 + 0x550);
    if (TObjPlayer__sub_801D10BC(arg0 + 0x34C) == 0) {
        TObjPlayer__sub_801D109C(arg0 + 0x34C);
        return;
    }
    if (check_flag_100__10TObjPlayerFPv(arg0) == 0 && check_action_usable__10TObjPlayerFPvi(arg0 + 0x550, 4) != 0) {
        if (arg0 == NULL || obj_isState2_324(arg0) == 0) {
            TObjPlayer__sub_801D1090(arg0 + 0x34C);
            TObjPlayer__sub_801D1144(&a);
            a.id = obj_getField1c(arg0);
            a.val = target;
            bswap_and_send__10TObjPlayerFPv(&a);
        }
    } else {
        if (TObjPlayer__sub_801D1078(arg0 + 0x34C) == 0) {
            TObjPlayer__sub_801D1058(arg0 + 0x34C);
            return;
        }
        if (amount >= TObjPlayer__data_805DC368 && (arg0 == NULL || obj_isState2_324(arg0) == 0)) {
            TObjPlayer__sub_801D104C(arg0 + 0x34C);
            TObjPlayer__sub_801D11D0(&b);
            b.id = obj_getField1c(arg0);
            b.val = target;
            send_swapped_packet__10TObjPlayerFPv(&b);
        }
    }
}

}
