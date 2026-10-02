#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
typedef s32 M2C_UNK;
struct VBase_801BDE60 { u8 pad[0x18]; };

struct Obj_801BDE60 : VBase_801BDE60 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5();
    virtual void v6();
};

extern "C" {
u8 * construct_player_instance__10TObjPlayerFPvisiPv(void *, M2C_UNK, s16, s32, void *);
M2C_UNK TItem__sub_80101CEC(void *);
u8 *__nw__7TObjectFUl(M2C_UNK);
extern s32 tl_03;
u8 *TObjPlayer__sub_801BDEF8(s16 arg0, s32 arg1, u8 *arg2);
M2C_UNK copy_header_struct__6TLobbyFPvPv(void *, void *);
u8 * construct_player_instance__10TObjPlayerFPvisiPv(void *, M2C_UNK, s16, s32, void *);
s32 get_sub_obj__10TObjPlayerFPv(void *);
s32 get_char_data__10TObjPlayerFPv(void *);
s32 TObjPlayer__sub_801C22B4(void *);
u8 *__nw__7TObjectFUl(M2C_UNK);
extern s32 tl_03;
u8 *TObjPlayer__sub_801BDE60(s32 arg0, s32 arg1);
}

extern "C" {

u8 *TObjPlayer__sub_801BDE60(s32 arg0, s32 arg1) {
    u8 *p;
    p = __nw__7TObjectFUl(0xDB8);
    if (p != NULL) {
        p = ((u8 *(*)(void *, M2C_UNK, u16, s32, s32))construct_player_instance__10TObjPlayerFPvisiPv)(
            p, tl_03, arg0, TObjPlayer__sub_801C22B4((void *)arg1), get_char_data__10TObjPlayerFPv((void *)arg1));
    }
    copy_header_struct__6TLobbyFPvPv(p + 0xDAC, (void *)get_sub_obj__10TObjPlayerFPv((void *)arg1));
    ((Obj_801BDE60 *)p)->v6();
    return p;
}

u8 *TObjPlayer__sub_801BDEF8(s16 arg0, s32 arg1, u8 *arg2) {
    u8 *temp_r3;
    u8 *var_r0;
    TItem__sub_80101CEC((void *) (arg2));
    temp_r3 = (u8 *)(__nw__7TObjectFUl(0xDB8));
    var_r0 = (u8 *)(temp_r3);
    if (var_r0 != NULL) {
        var_r0 = (u8 *)(construct_player_instance__10TObjPlayerFPvisiPv(temp_r3, tl_03, arg0, arg1, arg2));
    }
    return var_r0;
}

}
