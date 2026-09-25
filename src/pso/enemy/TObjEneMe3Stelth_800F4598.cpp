#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_800F4758_lbl_8050110C {
    M2C_UNK value;
    u8 remaining[0x10];
};

struct Info_800F4700 { u8 pad[0x18]; s32 frame; };

struct Obj_800F4700 { u8 pad[0x38]; u8 pos[0x3c8 - 0x38]; s32 kind; };

extern "C" {
s32 initialize_enemy_state__9TObjEneDDFPv(void *, int);
s32 TObjEneMe3Stelth__sub_800F47D4(void *);
extern RecoveredGlobal_800F4758_lbl_8050110C lbl_8050110C;
extern u8 *TObjEneMe3Stelth__data_805D5300;
void TObjEneMe3Stelth__sub_800F4758(u8 *arg0);
s32 clamp_frame_index__9TObjEneDDFi(s32);
s32 create__9TTecRestaFPvPvPv(void *, void *, int);
extern Info_800F4700 *TObjEneMe3Stelth__data_80501104[];
void TObjEneMe3Stelth__sub_800F4700(Obj_800F4700 *self);
}

extern "C" {

typedef char RecoveredGlobal_800F4758_lbl_8050110C_size[sizeof(RecoveredGlobal_800F4758_lbl_8050110C) == 0x14 ? 1 : -1];

void TObjEneMe3Stelth__sub_800F4700(Obj_800F4700 *self) {
    s32 f = clamp_frame_index__9TObjEneDDFi(TObjEneMe3Stelth__data_80501104[self->kind]->frame);
    create__9TTecRestaFPvPvPv(self, self->pos, f);
}

void TObjEneMe3Stelth__sub_800F4758(u8 *arg0) {
    if (TObjEneMe3Stelth__sub_800F47D4((void *) (arg0)) != 0) {
        M2C_FIELD(arg0, M2C_UNK **, 0x24) = &lbl_8050110C.value;
        initialize_enemy_state__9TObjEneDDFPv((void *) (arg0), (int) (0x3F));
        M2C_FIELD(arg0, s32 *, 0x3C8) = 1;
        return;
    }
    M2C_FIELD(arg0, M2C_UNK **, 0x24) = (M2C_UNK *) M2C_FIELD(M2C_FIELD(TObjEneMe3Stelth__data_805D5300, u8 **, 0x42C), M2C_UNK **, 0xC);
    initialize_enemy_state__9TObjEneDDFPv((void *) (arg0), (int) (0x3E));
    M2C_FIELD(arg0, s32 *, 0x3C8) = 0;
}

}
