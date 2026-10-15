#include "types.h"

struct Pl_801960F8 { u8 pad0[0x38]; f32 pos[3]; };

struct Col_801960F8 { u8 pad0[0xAC]; f32 fAC; u8 padB0[0xC]; f32 fBC; f32 fC0[3]; };

extern "C" {
void VecCopy__FP3VecPC3Vec(void *, void *);
f32 xz_distance_squared(void *, void *);
s32 update_trigger_state__12TObjQuestColFPvf(void *, f32);
Pl_801960F8 *get_player_by_client_id(s32);
extern u8 quest_col_apc_warp_target_pos[];
extern s32 local_client_id;
extern s32 quest_collision_warp_pending;
s32 TObjQuestColApcINW__vt13(Col_801960F8 *arg0);
}

extern "C" {

void *TObjQuestColApcINW__ct(void *arg0);
void TObjQuestColApcINW__vt14(void* p);
void TObjQuestColBase__ct(void *);
int create__12TQuestThreadFi(void*);
int destroy_board__17TQuestThreadBoardFv(void*);

void TObjQuestColApcINW__vt14(void* p) { destroy_board__17TQuestThreadBoardFv(p); create__12TQuestThreadFi(*(void**)((char*)p + 0xb0)); }

extern const f32 lbl_805DBF04;
extern s32 __vt__18TObjQuestColApcINW[];
extern void *lbl_805D3400;

s32 TObjQuestColApcINW__vt13(Col_801960F8 *arg0) {
    if (update_trigger_state__12TObjQuestColFPvf(arg0, arg0->fAC) == 1) {
        Pl_801960F8 *p = get_player_by_client_id(local_client_id);
        if (p == 0) {
            return 0;
        }
        s32 i;
        for (i = 0; i < 12; i++) {
            if (i != local_client_id) {
                Pl_801960F8 *q = get_player_by_client_id(i);
                if (q != 0) {
                    if (xz_distance_squared(q->pos, p->pos) > arg0->fBC * arg0->fBC) {
                        quest_collision_warp_pending = 1;
                        VecCopy__FP3VecPC3Vec(quest_col_apc_warp_target_pos, arg0->fC0);
                    }
                }
            }
        }
        return 1;
    }
    return 0;
}

void *TObjQuestColApcINW__ct(void *arg0) {
    TObjQuestColBase__ct(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__18TObjQuestColApcINW;
    *(void **)((s8 *)arg0 + 0x0) = lbl_805D3400;
    *(f32 *)((s8 *)arg0 + 0xBC) = *(f32 *)((s8 *)arg0 + 0x6C);
    *(f32 *)((s8 *)arg0 + 0xC8) = lbl_805DBF04;
    *(f32 *)((s8 *)arg0 + 0xC4) = lbl_805DBF04;
    *(f32 *)((s8 *)arg0 + 0xC0) = lbl_805DBF04;
    return arg0;
}

}
