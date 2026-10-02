#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
void queue_destruction__7TObjectFv(void *);
extern const f32 lbl_805DC950;
extern const f32 lbl_805DC94C;
void run_task__14TSlicerHistoryFv(u8 *arg0);
u32 query_game_join_id__10TObjPlayerFv(int);
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
s32 all_parents_unqueued_for_destruction__7TObjectFv();
M2C_UNK notify_fish_if_valid__10TObjPlayerFUi(u32);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK rotate_matrix_z(int, int);
M2C_UNK rotate_matrix_x(int, int);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK TBoss7Tentacle__sub_803D9BA0(void *);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjBoss2Tunnel__sub_803DB470(int);
M2C_UNK set_chunk_material_color(void *);
typedef struct { f32 r, g, b, a; } Col_8023B220;
extern Col_8023B220 lbl_804A7418;
extern s32 lbl_805D5660;
extern s32 some_id_805c6f74;
extern const f32 lbl_805DC948;

void render__14TSlicerHistoryFv(u8 *arg0);
}

extern "C" {

void render__14TSlicerHistoryFv(u8 *arg0) {
    if (all_parents_unqueued_for_destruction__7TObjectFv() == 0 || query_game_join_id__10TObjPlayerFv((int) (M2C_FIELD(arg0, s32 *, 0x58))) == 0U) {
        return;
    }
    {
        lbl_805D5660 = some_id_805c6f74;
        Col_8023B220 col = M2C_FIELD(arg0, Col_8023B220 *, 0x3C);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x5C) != 0) {
            some_id_805c6f74 |= 0x10;
        } else {
            some_id_805c6f74 |= 0x20;
            col.r -= lbl_805DC948;
        }
        if (((u32) M2C_FIELD(arg0, u32 *, 0x38) != 0U) && ((u32) M2C_FIELD(arg0, u32 *, 0x34) != 0U)) {
            notify_fish_if_valid__10TObjPlayerFUi(M2C_FIELD(arg0, u32 *, 0x38));
            begin_effect_render__13TParticleCtrlFv();
            TObjPlayer__sub_803D9B2C();
            TOHangerMachine01__sub_803D9C00((void *) ((u8 *)(arg0) + 0x28));
            rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x20)));
            rotate_matrix_z((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x24)));
            rotate_matrix_x((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x1C)));
            TBoss7Tentacle__sub_803D9BA0((void *) ((u8 *)(arg0) + 0x4C));
            set_chunk_material_color((void *) (&col));
            TObjBoss2Tunnel__sub_803DB470((int) (M2C_FIELD(arg0, u32 *, 0x34)));
            set_chunk_material_color((void *) (&lbl_804A7418));
            end_effect_render__13TParticleCtrlFv();
        }
        TObjPlayer__sub_803D9B78();
        some_id_805c6f74 = lbl_805D5660;
    }
}

void run_task__14TSlicerHistoryFv(u8 *arg0) {
  const f32 *new_var;
  *((f32 *) (((s8 *) arg0) + 0x3c)) = (f32) ((*((f32 *) (((s8 *) arg0) + 0x3c))) - lbl_805DC94C);
  if ((*((f32 *) (((s8 *) arg0) + 0x3c))) < (*(new_var = &lbl_805DC950)))
  {
    *((f32 *) (((s8 *) arg0) + 0x3c)) = (f32) (*new_var);
    queue_destruction__7TObjectFv(arg0);
  }
}

}
