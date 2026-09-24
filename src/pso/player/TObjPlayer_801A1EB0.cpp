#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Vec_801A1F48 { f32 x, y, z; };

struct Src_801A1F48 { u8 pad[4]; u16 id; u8 pad6[2]; s16 kind; u8 padA[2]; Vec_801A1F48 pos; Vec_801A1F48 rot; Vec_801A1F48 v24; s32 vals[3]; };

struct Dst_801A1F48 { u8 pad[0x1C]; u16 id; u8 pad1e[0xA]; s16 kind; u8 pad2a[0xE]; Vec_801A1F48 pos; Vec_801A1F48 v44; Vec_801A1F48 pos2; Vec_801A1F48 rot; Vec_801A1F48 v68; u8 pad74[0x10]; s32 vals[3]; };

extern "C" {
Vec_801A1F48 *VecCopy__FP3VecPC3Vec(Vec_801A1F48 *, const Vec_801A1F48 *);
void copy_xyz__10TObjPlayerFPvPv(void *, void *);
void fn_801A1F48(Dst_801A1F48 *self, Src_801A1F48 *src);
}

extern "C" {

void TLobby__sub_801A1FD8(void);
u16 TLobby__sub_801A1FDC(void *arg0, s32 arg1);
s16 get_stat_by_key_state__10TObjPlayerFPv(void *arg0);
s32 TContainerAncient01__sub_8020335C(void);
u16 TLobby__sub_801A2078(s32);
u16 TLobby__sub_801A20C8(s32);
int TObjRoomId__sub_801A1E2C(void);
u16 fn_801A210C(s32);
s32 get_global_state__14TOKeyMachine01Fv(void);

s16 get_stat_by_key_state__10TObjPlayerFPv(void *arg0) {
    s32 temp_r3;

    if ((get_global_state__14TOKeyMachine01Fv() == 0) || (get_global_state__14TOKeyMachine01Fv() == 0x12)) {
        return 0;
    }
    if ((u16) M2C_FIELD(arg0, u16 *, 0x1C) < 0x1000U) {
        temp_r3 = get_global_state__14TOKeyMachine01Fv();
        if (((u32) (temp_r3 - 1) <= 1U) || (TContainerAncient01__sub_8020335C() != 0) || (temp_r3 == 0xC) || (temp_r3 == 0x20)) {
            return M2C_FIELD(arg0, s16 *, 0x2E);
        }
        return M2C_FIELD(arg0, s16 *, 0x28);
    }
    return M2C_FIELD(arg0, s16 *, 0x28);
}

void fn_801A1F48(Dst_801A1F48 *self, Src_801A1F48 *src) {
    s32 i;
    self->id = src->id;
    VecCopy__FP3VecPC3Vec(&self->pos2, VecCopy__FP3VecPC3Vec(&self->pos, &src->pos));
    copy_xyz__10TObjPlayerFPvPv(&self->rot, &src->rot);
    VecCopy__FP3VecPC3Vec(&self->v68, &src->v24);
    self->kind = src->kind;
    for (i = 0; i < 3; i++) {
        self->vals[i] = src->vals[i];
    }
}

void TLobby__sub_801A1FD8(void) {  }
u16 TLobby__sub_801A1FDC(void *arg0, s32 arg1) {
    s32 temp_r3;

    if (M2C_FIELD(arg0, u16 *, 0x1C) == 0xFFFF) {
        temp_r3 = M2C_FIELD(arg0, s32 *, 0x30) & 0x70000000;
        switch (temp_r3) {
        case 0x10000000:
            M2C_FIELD(arg0, u16 *, 0x1C) = fn_801A210C(arg1);
            break;
        case 0x20000000:
            M2C_FIELD(arg0, u16 *, 0x1C) = TLobby__sub_801A20C8(arg1);
            break;
        default:
        case 0x40000000:
            M2C_FIELD(arg0, u16 *, 0x1C) = TLobby__sub_801A2078(arg1);
            break;
        }
    }
    return M2C_FIELD(arg0, u16 *, 0x1C);
}

}
