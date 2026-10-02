#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Ent_801B80C0;
struct Buf_801B802C {
    s32 n;
    u8 ents[0x34C];
};

struct Ent_801B80C0 { u8 pad[0x14]; s32 f14; u8 pad18[0x1C - 0x18]; };

extern "C" {
s32 obj_isState2_324(void *);
s16 obj_getField1c(void *);
s32 TFontSmallLobby__sub_801AFEE0();
s32 can_use_item__10TObjPlayerFPvPv(void *, void *);
M2C_UNK TObjPlayer__sub_801C0E40(void *);
M2C_UNK TObjPlayer__sub_801C0E5C(void *);
u32 start_inventory_update__10TObjPlayerFPvi(s32, s32);
void *get_owner_if_alive__10TObjPlayerFPv();
M2C_UNK play_sound_effect(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
s32 fn_801B7F4C(void *arg0, s32 arg1);
M2C_UNK queue_destruction__7TObjectFv(u32);
M2C_UNK TObjPlayer__sub_801B81E8(void *, M2C_UNK *, s32);
M2C_UNK TObjPlayer__sub_801B826C(void *);
s32 query_state_if_present__10TObjPlayerFPv(void *, M2C_UNK *);
M2C_UNK TObjPlayer__sub_801BE890(s32 *);
M2C_UNK destroy_subobjects__10TObjPlayerFPvi(u32, void *);
void fn_801B802C(void *arg0);
s16 obj_getField1c(void *);
s32 TLobby__sub_8011AF58(int);
void fn_801B80C0(void *arg0, Ent_801B80C0 *arg1, s32 arg2);
}

extern "C" {

struct S801B7F4C { s8 b[2]; s16 h; s32 w; };
s32 fn_801B7F4C(void *arg0, s32 arg1) {
    struct S801B7F4C sp8;
    void *temp;
    if (TFontSmallLobby__sub_801AFEE0() != 0) {
        return 0;
    }
    if (start_inventory_update__10TObjPlayerFPvi(M2C_FIELD(arg0, s32 *, 0xD00), arg1) == 0U) {
        return 0;
    }
    temp = get_owner_if_alive__10TObjPlayerFPv();
    if (temp == NULL) {
        return 0;
    }
    if (can_use_item__10TObjPlayerFPvPv(arg0, temp) == 0) {
        play_sound_effect(0x3816, 0, 0, 0);
        return 0;
    }
    if ((arg0 != NULL) && (obj_isState2_324(arg0) != 0)) {
        return 0;
    }
    TObjPlayer__sub_801C0E40(&sp8);
    sp8.h = obj_getField1c(arg0);
    sp8.w = arg1;
    TObjPlayer__sub_801C0E5C(&sp8);
    return 1;
}
void fn_801B802C(void *arg0) {
    Buf_801B802C b;
    if ((u32) M2C_FIELD(arg0, u32 *, 0xD00) != 0U) {
        TObjPlayer__sub_801BE890((s32 *)&b);
        b.n = query_state_if_present__10TObjPlayerFPv(arg0, (M2C_UNK *)b.ents);
        destroy_subobjects__10TObjPlayerFPvi(M2C_FIELD(arg0, u32 *, 0xD00), arg0);
        queue_destruction__7TObjectFv(M2C_FIELD(arg0, u32 *, 0xD00));
        M2C_FIELD(arg0, u32 *, 0xD00) = 0U;
        TObjPlayer__sub_801B826C(arg0);
        fn_801B80C0((void *)(arg0), (Ent_801B80C0 *)((Ent_801B80C0 *)b.ents), (s32)(b.n));
        TObjPlayer__sub_801B81E8(arg0, (M2C_UNK *)b.ents, b.n);
    }
}
void fn_801B80C0(void *arg0, Ent_801B80C0 *arg1, s32 arg2) {
    s32 i;
    s16 v;
    if (arg1 != NULL) {
        v = obj_getField1c(arg0);
        for (i = 0; i < arg2; i++) {
            arg1->f14 = ((s32 (*)(s16))TLobby__sub_8011AF58)(v);
            arg1++;
        }
    }
}

}
