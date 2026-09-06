#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#include <stddef.h>
struct Stack_8011AED8 {
    s8 sp8;
    u8 pad_9[0x3];
    f32 spC;
    f32 sp10;
    s16 sp14;
    u8 pad_16[0x2];
    M2C_UNK sp18;
    u8 trailing_storage[0x10];
};

extern "C" {
s32 get_global_state__14TOKeyMachine01Fv();
extern s32 lbl_805D54E8;
extern s32 lbl_805D54EC;
void TLobby__sub_8011AF58(s32 arg0);
M2C_UNK TLobby__sub_80103BFC(s32, s32);
void TLobby__sub_8011AA44(s16 arg0, s32 _w1);
M2C_UNK bswap_6xa2_fields__6TLobbyFPv();
M2C_UNK TLobby__sub_8011A868(void *);
M2C_UNK TLobby__sub_8011AA68(s16, int, s16, int, f32, f32);
M2C_UNK TLobby__sub_8011AB64(s8, s16, int, s16, int, f32, f32);
void handle_6xA2_specializable_item_drop_request(void *arg0);
s32 copy_item_data__6TLobbyFPvPv(void *, void *);
s32 drop_stacked_item_passthrough__6TLobbyFi(void *);
s32 TLobby__sub_80103DD8(void *);
s32 TLobby__sub_8011A7F8(int);
void TLobby__sub_8011AED8(s8 arg0, s16 arg1, u8 *arg2, f32 farg0, f32 farg1);
}

extern "C" {

void handle_6x5C_destroy_floor_item(void *arg0);
void handle_6x62(void);
M2C_UNK bswap_packet__6TLobbyFPv();

void handle_6x5C_destroy_floor_item(void *arg0) {
    bswap_packet__6TLobbyFPv();
    TLobby__sub_80103BFC(M2C_FIELD(arg0, s32 *, 8), M2C_FIELD(arg0, s32 *, 4));
}

void TLobby__sub_8011AA44(s16 arg0, s32 _w1) {
    TLobby__sub_80103BFC((s32)((void *) (arg0)), (s32)(_w1));
}

#pragma push
#pragma fp_contract on
void handle_6xA2_specializable_item_drop_request(void *arg0) {
    s8 temp_b;
    bswap_6xa2_fields__6TLobbyFPv();
    temp_b = M2C_FIELD(arg0, u8 *, 5);
    if (temp_b == 0x30) {
        if (M2C_FIELD(arg0, s16 *, 0x12) != 0) {
            TLobby__sub_8011AA68(M2C_FIELD(arg0, s16 *, 6), M2C_FIELD(arg0, s8 *, 4), M2C_FIELD(arg0, s16 *, 0x10), M2C_FIELD(arg0, s8 *, 0x14), M2C_FIELD(arg0, f32 *, 8), M2C_FIELD(arg0, f32 *, 0xC));
            return;
        }
        TLobby__sub_8011A868(arg0);
        return;
    }
    TLobby__sub_8011AB64(temp_b, M2C_FIELD(arg0, s16 *, 6), M2C_FIELD(arg0, s8 *, 4), M2C_FIELD(arg0, s16 *, 0x10), M2C_FIELD(arg0, s8 *, 0x14), M2C_FIELD(arg0, f32 *, 8), M2C_FIELD(arg0, f32 *, 0xC));
}
#pragma pop

void TLobby__sub_8011AED8(s8 arg0, s16 arg1, u8 *arg2, f32 farg0, f32 farg1) {
    typedef char sp8_offset[(offsetof(Stack_8011AED8, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_8011AED8, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_8011AED8, sp10) == 0x8) ? 1 : -1];
    typedef char sp14_offset[(offsetof(Stack_8011AED8, sp14) == 0xC) ? 1 : -1];
    typedef char sp18_offset[(offsetof(Stack_8011AED8, sp18) == 0x10) ? 1 : -1];
    Stack_8011AED8 stack;
    drop_stacked_item_passthrough__6TLobbyFi((void *) (&stack.sp8));
    stack.sp8 = arg0;
    stack.spC = farg0;
    stack.sp10 = farg1;
    stack.sp14 = arg1;
    copy_item_data__6TLobbyFPvPv((void *) (&stack.sp18), (void *) (arg2));
    TLobby__sub_8011A7F8((int) (M2C_FIELD(arg2, s32 *, 0xC)));
    TLobby__sub_80103DD8((void *) (&stack.sp8));
}

void handle_6x62(void) {  }
void TLobby__sub_8011AF58(s32 arg0) {
    s32 temp_r4;
    s32 temp_r4_2;
    if (get_global_state__14TOKeyMachine01Fv() == 0xF) {
        temp_r4 = (arg0 * 4) & 0x3FFFC;
        M2C_FIELD(lbl_805D54EC, M2C_UNK *, temp_r4) = M2C_FIELD(lbl_805D54EC, M2C_UNK *, temp_r4) + 1;
        return;
    }
    temp_r4_2 = (arg0 * 4) & 0x3FFFC;
    M2C_FIELD(lbl_805D54E8, M2C_UNK *, temp_r4_2) = M2C_FIELD(lbl_805D54E8, M2C_UNK *, temp_r4_2) + 1;
}

}
