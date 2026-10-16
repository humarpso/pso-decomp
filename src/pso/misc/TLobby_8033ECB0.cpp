#include "types.h"
#include "pso/misc/TUnk_804EFA88.h"

struct RecoveredGlobal_8033ED24_lbl_804EFA88
{
  s32 value;
  u8 remaining[0x14];
};

extern "C" {
void free_indexed_entry__10TObjPlayerFl(void *, s32);
extern s32 lbl_805D6DA0;
void release_indexed_entry__6TLobbyFi(s32 arg0);
int mem_alloc(void *);
s32 __ct__7TObjectFP7TObject();
s32 TLobby__sub_8033EE38(int);
extern s32 lbl_804EFA88[];
extern s32 lbl_805D6DA0;
u8 *TLobby__sub_8033ED24(u8 *arg0);
}

extern "C" {

void *destroy_object__13TUnk_804EFA88Fs(void *arg0, s16 arg1);
s32 __dl__7TObjectFPv(void *);
s32 __dt__7TObjectFv(void *, s32);
s32 mem_free(void *);

extern s32 lbl_804EFA88[];
extern s32 lbl_805D6DA0;

void *TUnk_804EFA88::destroy_object(s16 arg1) {
    if (this != NULL) {
        *(s32 **)((s8 *)this + 0x18) = lbl_804EFA88;
        if ((u32) *(u32 *)((s8 *)this + 0x1C) != 0U) {
            mem_free(*(void **)((s8 *)this + 0x1C));
        }
        lbl_805D6DA0 = 0;
        __dt__7TObjectFv(this, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(this);
        }
    }
    return this;
}

typedef struct RecoveredGlobal_8033ED24_lbl_804EFA88 RecoveredGlobal_8033ED24_lbl_804EFA88;
typedef char RecoveredGlobal_8033ED24_lbl_804EFA88_size[((sizeof(RecoveredGlobal_8033ED24_lbl_804EFA88)) == 0x18) ? (1) : (-1)];
u8 *TLobby__sub_8033ED24(u8 *arg0) {
  s32 var_r31;
  s32 var_r30;
  __ct__7TObjectFP7TObject();
  *((s32 **) (((s8 *) arg0) + 0x18)) = &(*(RecoveredGlobal_8033ED24_lbl_804EFA88 *)&lbl_804EFA88).value;
  *((s32 *) (((s8 *) arg0) + 0x20)) = 0;
  *((s32 *) (((s8 *) arg0) + 0x1C)) = mem_alloc((void *) 0x240);
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
    if (((void *) (*(u8 * *)&lbl_805D6DA0) != NULL) && ((s32) *(s32 *)((s8 *)(*(u8 * *)&lbl_805D6DA0) + 0x20) < 0x10)) {
        free_indexed_entry__10TObjPlayerFl((*(u8 * *)&lbl_805D6DA0), arg0);
        *(s32 *)((s8 *)(*(u8 * *)&lbl_805D6DA0) + 0x20) = (s32) (*(s32 *)((s8 *)(*(u8 * *)&lbl_805D6DA0) + 0x20) + 1);
    }
}

}

#include "types.h"

extern "C" {

    extern s32 lbl_805D6DA0;
void TLobby__sub_8033EDF8(void) { lbl_805D6DA0 = 0; }

    extern s32 lbl_805D6DA0;
void TLobby__sub_8033EE04(void) { lbl_805D6DA0 = 0; }

}
