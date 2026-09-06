#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
u8 *TLobby__sub_8001FE7C(void *, s16);
void free__11TOBoss4RockFUi(u32);
void free_if_valid__10TObjPlayerFi(s32);
extern u8 *TOFenceAncient03__data_805D59C0;
extern u32 TOFenceAncient03__data_805D59C4;
void TOFenceAncient03__sub_8016733C(void);
}

extern "C" {

void TOFenceAncient03__vt12(void* p);
void TOFenceAncient03__vt13(void* p);
void TOFenceAncient03__vt14(void);
void *__dt__16TOFenceAncient03Fv(void *arg0, s16 arg1);
void *create__16TOFenceAncient03FPv(void *arg0);
void *TOFenceAncient03__ct(void *, void *, void *);
M2C_UNK TObjEneGibbles__sub_80156720(void *);
M2C_UNK TObjPlayer__sub_80154A00(M2C_UNK *);
M2C_UNK __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
int clear_player_status_flag__10TObjPlayerFPviUi(void*, void*, void*);
M2C_UNK destroy__16TOFenceAncient01FPvs(void *, M2C_UNK);
int set_indexed_flags(void*, void*, void*);

void TOFenceAncient03__vt14(void) {  }
void TOFenceAncient03__vt13(void* p) { *(int*)((char*)p + 0xac) = 0; *(int*)((char*)p + 0xd0) = 0; { int i; for (i = 0; i < 4; i++) { clear_player_status_flag__10TObjPlayerFPviUi(p, (void*)i, (void*)8); } } }
void TOFenceAncient03__vt12(void* p) { *(int*)((char*)p + 0xac) = 1; *(int*)((char*)p + 0xd0) = 1; { int i; for (i = 0; i < 4; i++) { set_indexed_flags(p, (void*)i, (void*)8); } } }

extern void *tl_05;

void *create__16TOFenceAncient03FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xD8);
    if (o != NULL) {
        o = TOFenceAncient03__ct(o, tl_05, arg0);
    }
    return o;
}

extern M2C_UNK __vt__16TOFenceAncient03[];

void TOFenceAncient03__sub_8016733C(void) {
  s32 var_r31;
  s32 var_r30;
  if (((u32) TOFenceAncient03__data_805D59C4) != 0)
  {
    var_r30 = 1;
    var_r31 = 4;
    do
    {
      free_if_valid__10TObjPlayerFi(*((M2C_UNK *) (((s8 *) TOFenceAncient03__data_805D59C4) + var_r31)));
      var_r30 += 1;
      var_r31 += 4;
    }
    while (var_r30 < 4);
    if (((u32) TOFenceAncient03__data_805D59C4) != 0)
    {
      free__11TOBoss4RockFUi(TOFenceAncient03__data_805D59C4);
      TOFenceAncient03__data_805D59C4 = 0;
    }
  }
  if (((void *) TOFenceAncient03__data_805D59C0) != 0)
  {
    TLobby__sub_8001FE7C(TOFenceAncient03__data_805D59C0, 1);
    TOFenceAncient03__data_805D59C0 = 0;
  }
}

void *__dt__16TOFenceAncient03Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TOFenceAncient03;
        TObjPlayer__sub_80154A00((M2C_UNK *)arg0);
        TObjEneGibbles__sub_80156720(arg0);
        destroy__16TOFenceAncient01FPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
