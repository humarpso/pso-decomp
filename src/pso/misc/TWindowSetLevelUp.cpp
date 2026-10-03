#include "pso/TWindowSetLevelUp.h"

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct M2CCopy_16 { u8 bytes[0x16]; };

#pragma inline_depth(1)
#pragma auto_inline on
#pragma dont_inline off
extern "C" {
M2C_UNK update_stat_messages__17TWindowSetLevelUpFv();
void TWindowSetLevelUp__sub_8026DDE0(s32 arg0, s32 arg1);
}

extern "C" {

struct VOff_8026DD70_arg0_8026DCE0 { char pad_0[0x24]; char f_24[1]; };

void TWindowSetLevelUp__sub_8026DE28(void* p, s32 v);
void *__ct__17TWindowSetLevelUpFv(void *arg0, void *arg1, void *arg2, void *arg3);
void render__17TWindowSetLevelUpFv(void);
void __ct__7TObjectFP7TObject(void *);
s32 get_array_entry__20TWindowSubStatusDispFPvi(void * a0 = 0);
s32 init_list_entry__20TWindowSubStatusDispFPvUcii(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0, s32 a3 = 0);
void reset_sub_status_disp__10TObjPlayerFPv(void *);

void render__17TWindowSetLevelUpFv(void) {  }

extern M2C_UNK __vt__17TWindowSetLevelUp[];
extern void *lbl_805D39C8;

void run_task__17TWindowSetLevelUpFv(u8 *arg0) {
    s16 temp_r5;
    temp_r5 = M2C_FIELD(arg0, s16 *, 0x1E);
    M2C_FIELD(arg0, s16 *, 0x1E) = (s16) (temp_r5 - 1);
    if (temp_r5 <= 0) {
        update_stat_messages__17TWindowSetLevelUpFv();
    }
}

TWindowSetLevelUp::~TWindowSetLevelUp() {}
void *__ct__17TWindowSetLevelUpFv(void *arg0, void *arg1, void *arg2, void *arg3) {
    struct VOff_8026DD70_arg0_8026DCE0 *self = (struct VOff_8026DD70_arg0_8026DCE0 *)arg0;
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TWindowSetLevelUp;
    reset_sub_status_disp__10TObjPlayerFPv(self->f_24);
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D39C8;
    TWindowSetLevelUp__sub_8026DDE0((s32)((void *)(self->f_24)), (s32)((void *)(arg2)));
    M2C_FIELD(arg0, u16 *, 0x1E) = 0;
    M2C_FIELD(arg0, void **, 0x20) = arg3;
    M2C_FIELD(arg0, u8 *, 0x1C) = 0;
    return arg0;
}

void TWindowSetLevelUp__sub_8026DDE0(s32 arg0, s32 arg1) {
    *(M2CCopy_16 *)(arg0) = *(const M2CCopy_16 *)(arg1);
    M2C_FIELD(arg0, s16 *, 0x16) = (s16) M2C_FIELD(arg1, s16 *, 0x16);
    M2C_FIELD(arg0, s16 *, 0x18) = (s16) M2C_FIELD(arg1, s16 *, 0x18);
}

void TWindowSetLevelUp__sub_8026DE28(void* p, s32 v) { *(s32*)((char*)p + 0x88) = v; }

}
