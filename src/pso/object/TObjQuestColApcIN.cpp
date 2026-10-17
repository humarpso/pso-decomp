#include "types.h"
#include "pso/object/TObjQuestColApcIN.h"

struct Pl_801962B4 { u8 pad0[0x38]; f32 pos[3]; };

struct Col_801962B4 { u8 pad0[0x38]; f32 pos[3]; u8 pad44[0x68]; f32 fAC; u8 padB0[0xC]; f32 fBC; };

extern "C" {
f32 xyz_distance_squared(u8 *arg0, u8 *arg1);
Pl_801962B4 *get_player_by_client_id(s32);
extern s32 local_client_id;
void *TObjQuestColApcIN__ct(void *arg0);
void TObjQuestColBase__ct(void *);
u32 create__12TQuestThreadFi(s32 arg0);
int destroy_board__17TQuestThreadBoardFv(void*);

int TObjQuestColApcIN::vfunc_16() { destroy_board__17TQuestThreadBoardFv(this); create__12TQuestThreadFi((s32)(*(void* *)&this->m_b0)); }

extern s32 __vt__17TObjQuestColApcIN[];
extern void *lbl_805D33FC;

int TObjQuestColApcIN::vfunc_15() {
    Col_801962B4 *arg0 = (Col_801962B4 *)this;
    Pl_801962B4 *p = get_player_by_client_id(local_client_id);
    if (p != 0) {
        if (xyz_distance_squared((u8 *)p->pos, (u8 *)arg0->pos) < arg0->fAC * arg0->fAC) {
            s32 i;
            for (i = 0; i < 12; i++) {
                if (i != local_client_id) {
                    Pl_801962B4 *q = get_player_by_client_id(i);
                    if (q != 0) {
                        if (xyz_distance_squared((u8 *)p->pos, (u8 *)q->pos) < arg0->fBC * arg0->fBC) {
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
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__17TObjQuestColApcIN;
    *(void * *)&((TObjQuestColApcIN *)arg0)->m_name = lbl_805D33FC;
    *(f32 *)((s8 *)arg0 + 0xBC) = ((TObjQuestColApcIN *)arg0)->target_scale;
    return arg0;
}

}
