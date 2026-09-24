#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8018D9B0_lbl_804B7158 { M2C_UNK value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_8018D9B0_lbl_804B7158_size[sizeof(RecoveredGlobal_8018D9B0_lbl_804B7158) == 0x10 ? 1 : -1];

struct O_8018DB94 { u8 pad[0xac]; s32 state; f32 pos; f32 max; f32 speed; };

extern "C" {
u8 * TObjFish__sub_8001EDB0(void *, int);
extern u32 TObjContainerJungEx__data_805D5BA8;
u8 *TObjContainerJungEx__sub_8018D900(s32 arg0);
u8 * TObjFish__sub_8001EDC4(void *, int);
extern u32 TObjContainerJungEx__data_805D5BA8;
u8 *TObjContainerJungEx__sub_8018D93C(s32 arg0);
u8 * TLobby__sub_80020004(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
extern RecoveredGlobal_8018D9B0_lbl_804B7158 lbl_804B7158;
extern u32 TObjContainerJungEx__data_805D5BA8;
void TObjContainerJungEx__sub_8018D9B0(void);
void clear_player_status_flag__10TObjPlayerFPviUi(void *, s32, s32);
extern const f32 TObjDoaEx01__data_805DBDA0;
void TObjDoaEx01__vt16(u8 *arg0);
extern const f32 TObjDoaEx01__data_805DBDA8;
void TObjDoaEx01__vt14(O_8018DB94 *self);
}

extern "C" {

void free_data__19TObjContainerJungExFv(void);
void TLobby__sub_8001FE7C(void*, int);

extern u32 TObjContainerJungEx__data_805D5BA8;

u8 *TObjContainerJungEx__sub_8018D900(s32 arg0) {
    if ((void *) (*(u8 * *)&TObjContainerJungEx__data_805D5BA8) != NULL) {
        return TObjFish__sub_8001EDB0((*(u8 * *)&TObjContainerJungEx__data_805D5BA8), arg0);
    }
    return NULL;
}

u8 *TObjContainerJungEx__sub_8018D93C(s32 arg0) {
    if ((void *) (*(u8 * *)&TObjContainerJungEx__data_805D5BA8) != NULL) {
        return TObjFish__sub_8001EDC4((*(u8 * *)&TObjContainerJungEx__data_805D5BA8), arg0);
    }
    return NULL;
}

void free_data__19TObjContainerJungExFv(void) {
    if ((u32) TObjContainerJungEx__data_805D5BA8 != 0U) {
        TLobby__sub_8001FE7C((void*)TObjContainerJungEx__data_805D5BA8, 1);
        TObjContainerJungEx__data_805D5BA8 = 0U;
    }
}
void TObjContainerJungEx__sub_8018D9B0(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (TLobby__sub_80020004((void *) temp_r3, 5, &lbl_804B7158.value, 0, 0, 0));
    }
    (*(s32 *)&TObjContainerJungEx__data_805D5BA8) = var_r0;
}
#pragma push
#pragma opt_common_subs off
#pragma opt_propagation off
void TObjDoaEx01__vt16(u8 *arg0) {
    M2C_FIELD(arg0, f32 *, 0xB0) = (f32) (M2C_FIELD(arg0, f32 *, 0xB0) - M2C_FIELD(arg0, f32 *, 0xB8));
    if (M2C_FIELD(arg0, f32 *, 0xB0) < TObjDoaEx01__data_805DBDA0) {
        M2C_FIELD(arg0, f32 *, 0xB0) = (f32) TObjDoaEx01__data_805DBDA0;
        M2C_FIELD(arg0, s32 *, 0xAC) = 0;
        clear_player_status_flag__10TObjPlayerFPviUi(arg0, 0, 8);
    }
}
#pragma pop

void TObjDoaEx01__vt14(O_8018DB94 *self) {
    self->pos += self->speed;
    if (self->pos > self->max - TObjDoaEx01__data_805DBDA8) {
        self->pos = self->max - TObjDoaEx01__data_805DBDA8;
        self->state = 2;
    }
}

}
