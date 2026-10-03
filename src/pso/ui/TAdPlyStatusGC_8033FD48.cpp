#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8033FDB0_lbl_80478430
{
  M2C_UNK value;
  u8 remaining[0x8];
};

extern "C" {
s32 push_matrix();
s32 pop_matrix();
f32 post_translate_matrix(void *);
s32 set_global_param__8TObjFishFi(int);
s32 draw_model_motion(int, int, f32);
s32 set_global_flag__10TObjPlayerFv();
s32 clear_global_state__10TObjPlayerFv();
extern RecoveredGlobal_8033FDB0_lbl_80478430 lbl_80478430;
extern const f32 lbl_805DFAF8;
void TObjPlayer__sub_8033FDB0(s32 arg0);
}

extern "C" {

u32 get_instance__14TAdPlyStatusGCFii(s32 arg0, s32 arg1);
int get_player_index__14TAdPlyStatusGCFv(void);
u32 TAdPlyStatusGC__ct(u32, s32, s32);
u32 __nw__7TObjectFUl(M2C_UNK);

extern u32 lbl_805D6DA8;

u32 get_instance__14TAdPlyStatusGCFii(s32 arg0, s32 arg1) {
    u32 var_r0;

    if ((u32) lbl_805D6DA8 == 0U) {
        var_r0 = __nw__7TObjectFUl(0x70);
        if (var_r0 != 0U) {
            var_r0 = TAdPlyStatusGC__ct(var_r0, arg0, arg1);
        }
        lbl_805D6DA8 = var_r0;
    }
    return lbl_805D6DA8;
}

    extern int lbl_805D6D04;
int get_player_index__14TAdPlyStatusGCFv(void) {  return lbl_805D6D04; }
typedef struct RecoveredGlobal_8033FDB0_lbl_80478430 RecoveredGlobal_8033FDB0_lbl_80478430;
typedef char RecoveredGlobal_8033FDB0_lbl_80478430_size[((sizeof(RecoveredGlobal_8033FDB0_lbl_80478430)) == 0xC) ? (1) : (-1)];
void TObjPlayer__sub_8033FDB0(s32 arg0) {
  s32 var_r31;
  u8 *temp_r30;
  s32 var_r29;
  push_matrix();
  set_global_flag__10TObjPlayerFv();
  post_translate_matrix((void *) (&lbl_80478430.value));
  var_r29 = 0;
  var_r31 = 0;
  do
  {
    temp_r30 = (u8 *) (arg0 + (var_r31 & 0xFFFFFFFFFFFFFFFF));
    set_global_param__8TObjFishFi((int) (*((s32 *) (((s8 *) temp_r30) + 0x2C))));
    draw_model_motion((int) (*((s32 *) (((s8 *) temp_r30) + 0x28))), (int) (*((s32 *) (((s8 *) temp_r30) + 0x30))), (f32) lbl_805DFAF8);
    var_r29 += 1;
    var_r31 += 0xC;
  }
  while (var_r29 < 2);
  clear_global_state__10TObjPlayerFv();
  pop_matrix();
}

}
