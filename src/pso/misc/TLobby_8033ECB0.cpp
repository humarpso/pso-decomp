#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8033ED24_lbl_804EFA88
{
  M2C_UNK value;
  u8 remaining[0x14];
};

extern "C" {
void free_indexed_entry__10TObjPlayerFPv(void *, s32);
extern s32 lbl_805D6DA0;
void release_indexed_entry__6TLobbyFi(s32 arg0);
int alloc_buffer__11TOBoss4RockFPv(void *);
M2C_UNK __ct__7TObjectFP7TObject();
M2C_UNK TLobby__sub_8033EE38(int);
extern M2C_UNK lbl_804EFA88[];
extern s32 lbl_805D6DA0;
u8 *TLobby__sub_8033ED24(u8 *arg0);
}

extern "C" {

void *destroy_object__6TLobbyFPvs(void *arg0, s16 arg1);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__7TObjectFv(void *, M2C_UNK);
M2C_UNK free__11TOBoss4RockFUi(void *);

extern M2C_UNK lbl_804EFA88[];
extern s32 lbl_805D6DA0;

void *destroy_object__6TLobbyFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804EFA88;
        if ((u32) M2C_FIELD(arg0, u32 *, 0x1C) != 0U) {
            free__11TOBoss4RockFUi(M2C_FIELD(arg0, void **, 0x1C));
        }
        lbl_805D6DA0 = 0;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

typedef struct RecoveredGlobal_8033ED24_lbl_804EFA88 RecoveredGlobal_8033ED24_lbl_804EFA88;
typedef char RecoveredGlobal_8033ED24_lbl_804EFA88_size[((sizeof(RecoveredGlobal_8033ED24_lbl_804EFA88)) == 0x18) ? (1) : (-1)];
u8 *TLobby__sub_8033ED24(u8 *arg0) {
  s32 var_r31;
  s32 var_r30;
  __ct__7TObjectFP7TObject();
  *((M2C_UNK **) (((s8 *) arg0) + 0x18)) = &(*(RecoveredGlobal_8033ED24_lbl_804EFA88 *)&lbl_804EFA88).value;
  *((s32 *) (((s8 *) arg0) + 0x20)) = 0;
  *((s32 *) (((s8 *) arg0) + 0x1C)) = alloc_buffer__11TOBoss4RockFPv((void *) 0x240);
  if (((u32) (*((s32 *) (((s8 *) arg0) + 0x1C)))) != 0U)
  {
    var_r30 = 0;
    var_r31 = 0;
    do
    {
      TLobby__sub_8033EE38((int) ((*((s32 *) (((s8 *) arg0) + 0x1C))) + var_r31));
      var_r30 += 1;
      var_r31 += 0x24;
    }
    while (var_r30 < 0x10);
  }
  (*(u8 * *)&lbl_805D6DA0) = arg0;
  return arg0;
}

void release_indexed_entry__6TLobbyFi(s32 arg0) {
    if (((void *) (*(u8 * *)&lbl_805D6DA0) != NULL) && ((s32) M2C_FIELD((*(u8 * *)&lbl_805D6DA0), s32 *, 0x20) < 0x10)) {
        free_indexed_entry__10TObjPlayerFPv((*(u8 * *)&lbl_805D6DA0), arg0);
        M2C_FIELD((*(u8 * *)&lbl_805D6DA0), s32 *, 0x20) = (s32) (M2C_FIELD((*(u8 * *)&lbl_805D6DA0), s32 *, 0x20) + 1);
    }
}

}
