#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 fn_80166E64(u8 *arg0);
s32 fn_80166EA8(u8 *arg0);
u8 *TLobby__sub_8001FE7C(void *, s16);
void free__11TOBoss4RockFUi(u32);
void free_if_valid__10TObjPlayerFi(s32);
extern u8 *TOFenceAncient01__data_805D59B0;
extern u32 TOFenceAncient01__data_805D59B4;
void TOFenceAncient01__sub_80166BB8(void);
}

extern "C" {

void TOFenceAncient02__vt12(void* p);
void TOFenceAncient02__vt13(void* p);
void TOFenceAncient02__vt14(void);
void *__dt__16TOFenceAncient01Fv(void *arg0, s16 arg1);
void *create__16TOFenceAncient01FPv(void *arg0);
void *TOFenceAncient01__ct(void *, void *, void *);
M2C_UNK TObjEneGibbles__sub_80156720(void *);
M2C_UNK TObjPlayer__sub_80154A00(M2C_UNK *);
M2C_UNK __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
int clear_player_status_flag__10TObjPlayerFPviUi(void*, void*, void*);
M2C_UNK destroy__16TOFenceAncient01FPvs(void *, M2C_UNK);
int set_indexed_flags(void*, void*, void*);

extern void *tl_05;

void *create__16TOFenceAncient01FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xD8);
    if (o != NULL) {
        o = TOFenceAncient01__ct(o, tl_05, arg0);
    }
    return o;
}

extern M2C_UNK __vt__16TOFenceAncient01[];

void TOFenceAncient01__sub_80166BB8(void) {
  s32 var_r31;
  s32 var_r30;
  if (((u32) TOFenceAncient01__data_805D59B4) != 0)
  {
    var_r30 = 1;
    var_r31 = 4;
    do
    {
      free_if_valid__10TObjPlayerFi(*((M2C_UNK *) (((s8 *) TOFenceAncient01__data_805D59B4) + var_r31)));
      var_r30 += 1;
      var_r31 += 4;
    }
    while (var_r30 < 4);
    if (((u32) TOFenceAncient01__data_805D59B4) != 0)
    {
      free__11TOBoss4RockFUi(TOFenceAncient01__data_805D59B4);
      TOFenceAncient01__data_805D59B4 = 0;
    }
  }
  if (((void *) TOFenceAncient01__data_805D59B0) != 0)
  {
    TLobby__sub_8001FE7C(TOFenceAncient01__data_805D59B0, 1);
    TOFenceAncient01__data_805D59B0 = 0;
  }
}

void *__dt__16TOFenceAncient01Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TOFenceAncient01;
        TObjPlayer__sub_80154A00((M2C_UNK *)arg0);
        TObjEneGibbles__sub_80156720(arg0);
        destroy__16TOFenceAncient01FPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

s32 fn_80166E64(u8 *arg0) {
    s32 temp_r0;
    M2C_FIELD(arg0, s32 *, 0xCC) = (s32) M2C_FIELD(arg0, s32 *, 0x84);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0xCC);
    if (temp_r0 > 0x100) {
        M2C_FIELD(arg0, s32 *, 0xC8) = 0;
    } else if (temp_r0 < 0) {
        M2C_FIELD(arg0, s32 *, 0xC8) = 1;
    } else {
        M2C_FIELD(arg0, s32 *, 0xC8) = 2;
    }
    return M2C_FIELD(arg0, s32 *, 0xCC);
}

s32 fn_80166EA8(u8 *arg0) {
    s32 temp_r0;
    M2C_FIELD(arg0, s32 *, 0xD4) = (s32) M2C_FIELD(arg0, s32 *, 0x88);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0xD4);
    if (temp_r0 < 0) {
        M2C_FIELD(arg0, s32 *, 0xD4) = 0;
    } else if (temp_r0 >= 4) {
        M2C_FIELD(arg0, s32 *, 0xD4) = 3;
    }
    return M2C_FIELD(arg0, s32 *, 0xD4);
}

void TOFenceAncient02__vt14(void) {  }
void TOFenceAncient02__vt13(void* p) { *(int*)((char*)p + 0xac) = 0; *(int*)((char*)p + 0xd0) = 0; clear_player_status_flag__10TObjPlayerFPviUi(p, (void*)0, (void*)8); }
void TOFenceAncient02__vt12(void* p) { *(int*)((char*)p + 0xac) = 1; *(int*)((char*)p + 0xd0) = 1; set_indexed_flags(p, (void*)0, (void*)8); }

}
