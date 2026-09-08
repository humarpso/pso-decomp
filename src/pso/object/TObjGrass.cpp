#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 TObjEneDellBiter__sub_80087350(s32, s32);
void refresh_lobby_state__10TObjPlayerFPv(void *);
s32 send_entity_set_flags__6TLobbyFPv(void *);
void TObjGrass__vt61(u8 *arg0);
M2C_UNK TObjPlayer__sub_80011734(void *, M2C_UNK, f32);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
void obj_clearFlags30(void *, u32);
M2C_UNK copy_target_state__14TObjEnePanarmsFPvPv(void *, M2C_UNK);
s32 objInBand__FP7GameObjf(void *, f32);
M2C_UNK TBoss1Dragon__sub_80143504(void *);
M2C_UNK update_collisions__10TObjPlayerFPv(void *);
M2C_UNK minimap_render_dot(void *, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK play_effect_if_v2__10TObjPlayerFi(M2C_UNK);
M2C_UNK TOTrapAncient01__sub_80226578(M2C_UNK, void *, void *, M2C_UNK, M2C_UNK);
s32 TBoss3Volopt__sub_8022675C(void *, void *, int, int);
extern const f32 TObjGrass__data_805D9EB8;
void TObjGrass__sub_800BCE44(u8 *arg0);
}

extern "C" {

void TObjGrass__sub_800BCA2C(void);
s32 TObjGrass__vt34(void *arg0);
s32 TObjGrass__vt37(void *arg0);
void TObjGrass__vt57(void *arg0);
void TObjGrass__vt58(void *arg0);
void TObjGrass__vt59(void *arg0);
void TObjGrass__vt60(void *arg0);
void * create__9TObjGrassFPv(void *arg0);
void destroy_all__9TObjGrassFv(void);
void update__9TObjGrassFPv(u8 *arg0);
M2C_UNK TBoss1Dragon__sub_80143504(void *);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK TOTrapAncient01__sub_80226578(M2C_UNK, void *, void *, M2C_UNK, M2C_UNK);
void *TObjControl__ct(void *, void *);
void *TObjGrass__ct(void *, void *, void *);
M2C_UNK TObjGrass__sub_800BFB68();
M2C_UNK TObjPlayer__sub_80011734(void *, M2C_UNK, f32);
s32 TObjPlayer__sub_80016D78();
s32 TObjPlayer__sub_80016FF8();
void __dt__11TBoss4Type3FPvs(void*, int);
void *__nw__7TObjectFUl(int);
M2C_UNK copy_target_state__14TObjEnePanarmsFPvPv(void *, M2C_UNK);
void free__11TOBoss4RockFUi(void*);
M2C_UNK minimap_render_dot(void *, M2C_UNK, M2C_UNK, M2C_UNK);
void obj_clearFlags30(void *, u32);
M2C_UNK play_effect_if_v2__10TObjPlayerFi(M2C_UNK);
M2C_UNK update_collisions__10TObjPlayerFPv(void *);

void TObjGrass__sub_800BCA2C(void) {  }

void TObjGrass__vt61(u8 *arg0) {
    u8 *temp_r6;
    if ((s16) M2C_FIELD(arg0, s16 *, 0x326) != 8) {
        M2C_FIELD(arg0, s16 *, 0x326) = 8;
        M2C_FIELD(arg0, s16 *, 0x328) = 0;
        M2C_FIELD(arg0, s16 *, 0xB8) = 6;
        temp_r6 = (u8 *)(M2C_FIELD(arg0, u8 **, 0xA4));
        M2C_FIELD(temp_r6, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r6, s32 *, 0x18) & 0xFFFF7FFE);
        TObjEneDellBiter__sub_80087350((s32) (arg0 + 0x2FC), 0xF2);
        refresh_lobby_state__10TObjPlayerFPv(arg0);
        send_entity_set_flags__6TLobbyFPv(arg0);
    }
}

#pragma fp_contract on
void TObjGrass__sub_800BCE44(u8 *arg0) {
  u8 *temp_r3;
  obj_clearFlags30((void *)((void *) arg0), (u32)((int) 0x04040000));
  TBoss1Dragon__sub_80143504((void *) arg0);
  *((f32 *) (((s8 *) arg0) + 0x310)) = (f32) TObjGrass__data_805D9EB8;
  *((f32 *) (((s8 *) arg0) + 0x308)) = (f32) TObjGrass__data_805D9EB8;
  TObjPlayer__sub_80011734((void *)((void *) arg0), (M2C_UNK)((int) 0), (f32) TObjGrass__data_805D9EB8);
  update_collisions__10TObjPlayerFPv((void *) arg0);
  if (objInBand__FP7GameObjf((void *) arg0, (f32) TObjGrass__data_805D9EB8) != 0)
  {
    TBoss3Volopt__sub_8022675C((void *) ((s32)copy_target_state__14TObjEnePanarmsFPvPv((void *)((void *) arg0), (M2C_UNK)((int) 0x4003A603))), (void *) (arg0 + 0x38), (int) 0, (int) 0);
    play_effect_if_v2__10TObjPlayerFi((M2C_UNK)((int) (-0x200)));
  }
  if (((u32) (*((u32 *) (((s8 *) arg0) + 0xB4)))) != 8U)
  {
    *((s32 *) (((s8 *) arg0) + 0x30)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x30))) & 0xFFFFF9FF);
    temp_r3 = (u8 *) (*((u8 **) (((s8 *) arg0) + 0xA4)));
    *((s32 *) (((s8 *) temp_r3) + 0x18)) = (s32) ((*((s32 *) (((s8 *) temp_r3) + 0x18))) & 0xFBFFFFFF);
    if (((f32) (*((s16 *) (((s8 *) arg0) + 0x32C)))) < (((f32) (*((s16 *) (((s8 *) arg0) + 0x2B8)))) * (*((f32 *) (((s8 *) arg0) + 0x354)))))
    {
      *((s32 *) (((s8 *) arg0) + 0x30)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x30))) | 0x2000);
      *((s32 *) (((s8 *) arg0) + 0x2A8)) = 0;
      *((s16 *) (((s8 *) arg0) + 0x338)) = (float) 0xFFFF;
      VecCopy__FP3VecPC3Vec((void *) (0x290 + arg0), (void *) (arg0 + 0x2FC));
      VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x29C), (void *) (arg0 + 0x2FC));
      *((f32 *) (((s8 *) arg0) + 0x398)) = (f32) TObjGrass__data_805D9EB8;
    }
    *((s16 *) (((s8 *) arg0) + 0x33E)) = (s16) (*((s16 *) (((s8 *) arg0) + 0x32C)));
  }
  TOTrapAncient01__sub_80226578((M2C_UNK)((void *) ((s32)copy_target_state__14TObjEnePanarmsFPvPv((void *)((void *) arg0), (M2C_UNK)((int) 0x4003A801)))), (void *)((void *) arg0), (void *)((void *) (arg0 + 0x38)), (M2C_UNK)(((int) 0) & 0xFFFFu), (M2C_UNK)((int) 0));
  play_effect_if_v2__10TObjPlayerFi((M2C_UNK)((int) (-0x200)));
  minimap_render_dot((void *)((void *) (arg0 + 0x38)), (M2C_UNK)((int) (-0x5DB4)), (M2C_UNK)((int) 1), (M2C_UNK)((int) 0));
}

void TObjGrass__vt60(void *arg0) {
    if ((s16) M2C_FIELD(arg0, s16 *, 0x326) != 7) {
        M2C_FIELD(arg0, s16 *, 0x326) = 7;
        M2C_FIELD(arg0, s16 *, 0xB8) = 5;
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFBFFFF);
    }
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFDFFFFF);
}

extern const f32 TObjGrass__data_805D9EB8;

void update__9TObjGrassFPv(u8 *arg0) {
    s16 temp_r4;

    obj_clearFlags30((void *)(arg0), (u32)(0x04040000));
    TBoss1Dragon__sub_80143504(arg0);
    if (!(M2C_FIELD(arg0, s32 *, 0x30) & 0x800000)) {
        TObjPlayer__sub_80011734(arg0, 0, TObjGrass__data_805D9EB8);
    }
    update_collisions__10TObjPlayerFPv(arg0);
    TOTrapAncient01__sub_80226578(copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x4003A801), arg0, arg0 + 0x38, 0, 0);
    play_effect_if_v2__10TObjPlayerFi(-0x200);
    temp_r4 = M2C_FIELD(arg0, s16 *, 0x33C);
    M2C_FIELD(arg0, s16 *, 0x33C) = (s16) (temp_r4 - 1);
    if (temp_r4 < 0) {
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFFFEFF);
        M2C_FIELD(arg0, s16 *, 0x33C) = (s16) M2C_FIELD(arg0, s16 *, 0x33A);
        M2C_FIELD(arg0, s16 *, 0x33E) = (s16) M2C_FIELD(arg0, s16 *, 0x32C);
    }
    minimap_render_dot(arg0 + 0x38, -0x5DB4, 1, 0);
}

void TObjGrass__vt59(void *arg0) {
    if ((s16) M2C_FIELD(arg0, s16 *, 0x326) != 6) {
        M2C_FIELD(arg0, s16 *, 0x326) = 6;
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
    }
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFF9BFFFF);
}

extern const f32 TObjGrass__data_805D9EB8;

void TObjGrass__vt58(void *arg0) {
    s16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x39E);
    switch (temp_r0) {
    default:
        M2C_FIELD(arg0, s16 *, 0x39E) = 0;
    case 0:
        M2C_FIELD(arg0, s16 *, 0x326) = 3;
        break;
    case 1:
        M2C_FIELD(arg0, s16 *, 0x326) = 5;
        break;
    case 2:
        M2C_FIELD(arg0, s16 *, 0x326) = 4;
        M2C_FIELD(arg0, f32 *, 0x398) = (f32) TObjGrass__data_805D9EB8;
        TObjGrass__sub_800BFB68();
        break;
    }
    M2C_FIELD(arg0, s16 *, 0x328) = 0;
    M2C_FIELD(arg0, s16 *, 0xB8) = 1;
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x200000);
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFBFFFF);
}

void TObjGrass__vt57(void *arg0) {
    s16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    if ((temp_r0 >= 3) || (temp_r0 < 1)) {
        M2C_FIELD(arg0, s16 *, 0xB8) = 1;
        if ((s16) M2C_FIELD(arg0, s16 *, 0x39C) == 2) {
            M2C_FIELD(arg0, s16 *, 0x326) = 1;
        } else {
            M2C_FIELD(arg0, s16 *, 0x326) = 2;
        }
        M2C_FIELD(arg0, s16 *, 0x328) = 0;
        obj_clearFlags30((void *)(arg0), (u32)(0x04040000));
    }
}

s32 TObjGrass__vt37(void *arg0) {
    if (TObjPlayer__sub_80016D78() != 0) {
        switch (M2C_FIELD(arg0, s16 *, 0x326)) {
        case 0:
            M2C_FIELD(arg0, s32 *, 0x3AC) = 0;
            M2C_FIELD(arg0, s16 *, 0x328) = 2;
            M2C_FIELD(arg0, s16 *, 0xB8) = 1;
            obj_clearFlags30((void *)(arg0), (u32)(0x04040000));
        }
        return 1;
    }
    return 0;
}

s32 TObjGrass__vt34(void *arg0) {
    if (TObjPlayer__sub_80016FF8() != 0) {
        switch (M2C_FIELD(arg0, s16 *, 0x326)) {
        case 0:
            M2C_FIELD(arg0, s32 *, 0x3AC) = 0;
            M2C_FIELD(arg0, s16 *, 0x328) = 2;
            M2C_FIELD(arg0, s16 *, 0xB8) = 1;
            obj_clearFlags30((void *)(arg0), (u32)(0x04040000));
        }
        return 1;
    }
    return 0;
}

extern void *tl_04;

void * create__9TObjGrassFPv(void *arg0) {
    void *o;
    void *o2;
    o = __nw__7TObjectFUl(0x20);
    if (o != NULL) {
        o = TObjControl__ct(o, tl_04);
    }
    o2 = __nw__7TObjectFUl(0x404);
    if (o2 != NULL) {
        o2 = TObjGrass__ct(o2, o, arg0);
    }
    return o2;
}

extern u32 TObjGrass__data_805D5144;
extern u32 TObjGrass__data_805D5154;
extern u32 lbl_805D5158;
extern u32 lbl_805D515C;

void destroy_all__9TObjGrassFv(void) {
    if ((u32) TObjGrass__data_805D5144 != 0U) {
        free__11TOBoss4RockFUi((void*)TObjGrass__data_805D5144);
        TObjGrass__data_805D5144 = 0U;
    }
    if ((u32) lbl_805D515C != 0U) {
        __dt__11TBoss4Type3FPvs((void*)lbl_805D515C, 1);
        lbl_805D515C = 0U;
    }
    if ((u32) lbl_805D5158 != 0U) {
        __dt__11TBoss4Type3FPvs((void*)lbl_805D5158, 1);
        lbl_805D5158 = 0U;
    }
    if ((u32) TObjGrass__data_805D5154 != 0U) {
        TLobby__sub_8001FE7C((void*)TObjGrass__data_805D5154, 1);
        TObjGrass__data_805D5154 = 0U;
    }
}

}
