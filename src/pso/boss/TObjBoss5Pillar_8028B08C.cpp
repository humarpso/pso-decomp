#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void * create_smoke__15TObjBoss5PillarFPvPv(void *arg0, void *arg1);
void *TObjBoss5PillarSmoke__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

struct Nd_8028B0DC { u8 pad[0x2C]; Nd_8028B0DC *head; Nd_8028B0DC *next; };
typedef Nd_8028B0DC Ls_8028B0DC;
struct Ow_8028B0DC { u8 pad[0x28]; Ls_8028B0DC *list; };
struct Gl_8028B0DC { u8 pad[0x42C]; Ow_8028B0DC *owner; };
struct Pc_8028B0DC { u8 pad[0x1C]; s32 count; void **a; };
s32 is_within_xz_distance__12TBoss8DragonFPvPvf(void *, void *, f32);
f32 calc_sq_offset__12TBoss8DragonFPvf(void *, f32);
void play_sound_once__19TObjBoss5PillarCtrlFPv(void *);
extern Gl_8028B0DC *lbl_805D4DD8;
extern const f32 lbl_805DD910;
void * create_smoke__15TObjBoss5PillarFPvPv(void *arg0, void *arg1) {
    void *o;
    o = __nw__7TObjectFUl(0x28);
    if (o != NULL) {
        o = TObjBoss5PillarSmoke__ct(o, arg0, arg1);
    }
    return o;
}

void TBoss8Dragon__sub_8028B0DC(Pc_8028B0DC *arg0, void *arg1, void *arg2) {
    f32 off;
    Nd_8028B0DC *n;
    s32 i;

    n = lbl_805D4DD8->owner->list;
    off = calc_sq_offset__12TBoss8DragonFPvf(arg2, lbl_805DD910);
    n = n->head;
    for (i = 0; i < arg0->count; i++) {
        if (arg0->a[i] != NULL && is_within_xz_distance__12TBoss8DragonFPvPvf(arg1, n, off) != 0) {
            play_sound_once__19TObjBoss5PillarCtrlFPv(arg0->a[i]);
        }
        n = n->next;
    }
}

}
