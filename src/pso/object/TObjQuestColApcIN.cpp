#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

struct Pl_801962B4 { u8 pad0[0x38]; f32 pos[3]; };

struct Col_801962B4 { u8 pad0[0x38]; f32 pos[3]; u8 pad44[0x68]; f32 fAC; u8 padB0[0xC]; f32 fBC; };

extern "C" {
f32 xyz_distance_squared(void *, void *);
Pl_801962B4 *get_player_by_client_id(s32);
extern s32 lbl_805D53A0;
s32 TObjQuestColApcIN__vt13(Col_801962B4 *arg0);
}

extern "C" {

void *TObjQuestColApcIN__ct(void *arg0);
void TObjQuestColApcIN__vt14(void* p);
void TObjQuestColBase__ct(void *);
int create__12TQuestThreadFi(void*);
int destroy_board__17TQuestThreadBoardFv(void*);

void TObjQuestColApcIN__vt14(void* p) { destroy_board__17TQuestThreadBoardFv(p); create__12TQuestThreadFi(*(void**)((char*)p + 0xb0)); }

extern M2C_UNK __vt__17TObjQuestColApcIN[];
extern void *lbl_805D33FC;

s32 TObjQuestColApcIN__vt13(Col_801962B4 *arg0) {
    Pl_801962B4 *p = get_player_by_client_id(lbl_805D53A0);
    if (p != 0) {
        if (xyz_distance_squared(p->pos, arg0->pos) < arg0->fAC * arg0->fAC) {
            s32 i;
            for (i = 0; i < 12; i++) {
                if (i != lbl_805D53A0) {
                    Pl_801962B4 *q = get_player_by_client_id(i);
                    if (q != 0) {
                        if (xyz_distance_squared(p->pos, q->pos) < arg0->fBC * arg0->fBC) {
                            return 1;
                        }
                    }
                }
            }
        }
    }
    return 0;
}

void *TObjQuestColApcIN__ct(void *arg0) {
    TObjQuestColBase__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TObjQuestColApcIN;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D33FC;
    M2C_FIELD(arg0, f32 *, 0xBC) = M2C_FIELD(arg0, f32 *, 0x6C);
    return arg0;
}

}
