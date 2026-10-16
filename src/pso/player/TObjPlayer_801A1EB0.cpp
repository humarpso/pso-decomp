#include "types.h"
#include "pso/misc/TLobby.h"
#include "pso/player/TObjPlayer.h"
#include "pso/misc/TContainerAncient01.h"
#include "pso/misc/TOKeyMachine01.h"

struct Vec_801A1F48 { f32 x, y, z; };

struct Src_801A1F48 { u8 pad[4]; u16 id; u8 pad6[2]; s16 kind; u8 padA[2]; Vec_801A1F48 pos; Vec_801A1F48 rot; Vec_801A1F48 v24; s32 vals[3]; };

struct Dst_801A1F48 { u8 pad[0x1C]; u16 id; u8 pad1e[0xA]; s16 kind; u8 pad2a[0xE]; Vec_801A1F48 pos; Vec_801A1F48 v44; Vec_801A1F48 pos2; Vec_801A1F48 rot; Vec_801A1F48 v68; u8 pad74[0x10]; s32 vals[3]; };

extern "C" {
Vec_801A1F48 *VecCopy__FP3VecPC3Vec(Vec_801A1F48 *, const Vec_801A1F48 *);
void apply_object_set_data(Dst_801A1F48 *self, Src_801A1F48 *src);
extern u16 lbl_805D5CD4;
extern u16 lbl_805D5CD6;
}

extern "C" {

void TLobby__sub_801A1FD8(void);
u16 get_or_assign_actor_id(void *arg0, s32 arg1);
u16 TLobby__sub_801A20C8(s32);
int vfunc_12__13TUnk_804B9870Fv(void);
u16 fn_801A210C(s32);

s16 TObjPlayer::get_stat_by_key_state() {
    s32 temp_r3;

    if ((TOKeyMachine01::get_global_state() == 0) || (TOKeyMachine01::get_global_state() == 0x12)) {
        return 0;
    }
    if ((u16) *(u16 *)((s8 *)this + 0x1C) < 0x1000U) {
        temp_r3 = TOKeyMachine01::get_global_state();
        if (((u32) (temp_r3 - 1) <= 1U) || (TContainerAncient01::is_global_state_in_table() != 0) || (temp_r3 == 0xC) || (temp_r3 == 0x20)) {
            return *(s16 *)&this->m_2e;
        }
        return *(s16 *)&this->m_28;
    }
    return *(s16 *)&this->m_28;
}

void apply_object_set_data(Dst_801A1F48 *self, Src_801A1F48 *src) {
    s32 i;
    self->id = src->id;
    VecCopy__FP3VecPC3Vec(&self->pos2, VecCopy__FP3VecPC3Vec(&self->pos, &src->pos));
    ((TObjPlayer *)(&self->rot))->copy_xyz(&src->rot);
    VecCopy__FP3VecPC3Vec(&self->v68, &src->v24);
    self->kind = src->kind;
    for (i = 0; i < 3; i++) {
        self->vals[i] = src->vals[i];
    }
}

void TLobby__sub_801A1FD8(void) {  }
u16 get_or_assign_actor_id(void *arg0, s32 arg1) {
    s32 temp_r3;

    if (*(u16 *)((s8 *)arg0 + 0x1C) == 0xFFFF) {
        temp_r3 = *(s32 *)((s8 *)arg0 + 0x30) & 0x70000000;
        switch (temp_r3) {
        case 0x10000000:
            *(u16 *)((s8 *)arg0 + 0x1C) = fn_801A210C(arg1);
            break;
        case 0x20000000:
            *(u16 *)((s8 *)arg0 + 0x1C) = TLobby__sub_801A20C8(arg1);
            break;
        default:
        case 0x40000000:
            *(u16 *)((s8 *)arg0 + 0x1C) = TLobby::alloc_actor_ids((s32)(arg1));
            break;
        }
    }
    return *(u16 *)((s8 *)arg0 + 0x1C);
}
u16 TLobby::alloc_actor_ids(s32 arg) {
    u16 n = arg;
    s32 id = lbl_805D5CD4;
    if (id + n + 1 >= 0xFFFF) {
        lbl_805D5CD4 = lbl_805D5CD6;
        id = lbl_805D5CD4;
        lbl_805D5CD4 = id + (n + 1);
    } else {
        lbl_805D5CD4 = id + (n + 1);
    }
    return id;
}

}
