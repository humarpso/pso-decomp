#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Rec_80109B5C { u8 pad[0x1C]; f32 pos[3]; u8 pad2[0x2C - 0x28]; };

extern "C" {
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK copy_xyz__10TObjPlayerFPvPv(void *, void *);
M2C_UNK __ct__18TItemEffNeedleBaseFv(void *, s32, s32);
u8 *find_entity_by_id(u16);
extern M2C_UNK __vt__14TItemEffNeedle[];
extern s32 lbl_805D2BCC;
void *__ct__14TItemEffNeedleFv(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
}

extern "C" {

s32 obj_getField1c(void *);
M2C_UNK TLobby__sub_800869A4(void *, M2C_UNK, M2C_UNK, M2C_UNK, void *);
s32 TLobby__sub_80101AB0();
s32 get_entity_id__10TObjPlayerFPv(s32);
s32 TObjPlayer__sub_8010A058(s32);
void *__nw__7TObjectFUl(M2C_UNK);
extern s32 tl_05;

typedef struct { u8 pad[0x1C]; u8 f[0x10]; } E80109;

#define self ((u8 *)arg0)
void *__ct__14TItemEffNeedleFv(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    Rec_80109B5C *temp_r5;
    u8 *temp_r3;
    __ct__18TItemEffNeedleBaseFv(arg0, arg1, arg2);
    M2C_FIELD(self, M2C_UNK **, 0x18) = __vt__14TItemEffNeedle;
    M2C_FIELD(self, s32 *, 0) = (s32) lbl_805D2BCC;
    M2C_FIELD(self, u16 *, 0x50) = arg3;
    M2C_FIELD(self, s32 *, 0x54) = arg4;
    temp_r3 = find_entity_by_id(M2C_FIELD(self, u16 *, 0x50));
    if (temp_r3 != NULL) {
        temp_r5 = M2C_FIELD(temp_r3, Rec_80109B5C **, 0xA4);
        VecCopy__FP3VecPC3Vec(self + 0x30, temp_r5[M2C_FIELD(self, s32 *, 0x54)].pos);
        copy_xyz__10TObjPlayerFPvPv(self + 0x58, self + 0x44);
        M2C_FIELD(self, s32 *, 0x5C) = (s32) (M2C_FIELD(self, s32 *, 0x5C) - M2C_FIELD(temp_r3, s32 *, 0x60));
    }
    return arg0;
}
#undef self

void create_needle_effect(s32 arg0, void *arg1) {
    void *var_r31;
    void *temp_r30;
    s32 temp_r29;
    void *temp_r7;

    temp_r29 = TLobby__sub_80101AB0();
    var_r31 = __nw__7TObjectFUl(0x64);
    if (var_r31 != NULL) {
        temp_r30 = M2C_FIELD(arg1, void **, 0);
        var_r31 = __ct__14TItemEffNeedleFv((void *)(var_r31), (s32)(tl_05), (s32)(temp_r29), (s32)(obj_getField1c(temp_r30)), (s32)(M2C_FIELD(temp_r30, s32 *, 0xA8)));
    }
    if (var_r31 != NULL) {
        M2C_FIELD(var_r31, s32 *, 0x3C) = TObjPlayer__sub_8010A058(temp_r29);
        M2C_FIELD(var_r31, s32 *, 0x40) = get_entity_id__10TObjPlayerFPv(temp_r29);
        M2C_FIELD(var_r31, s32 *, 0x44) = (s32) (M2C_FIELD(var_r31, s32 *, 0x44) + 0x8000);
    }
    temp_r7 = M2C_FIELD(arg1, void **, 0);
    TLobby__sub_800869A4(((E80109 *)M2C_FIELD(temp_r7, void **, 0xA4))[M2C_FIELD(arg1, s32 *, 4)].f, 0x180, 0, 0x3C, temp_r7);
}

}
