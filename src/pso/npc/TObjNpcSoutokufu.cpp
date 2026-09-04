#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__dt__16TObjNpcSoutokufuFv(void *arg0, s16 arg1);
void close_dialog_window__16TObjNpcSoutokufuFv(void);
void render__19TObjBoss5FloorStoneFv(void);
void run_task__19TObjBoss5FloorStoneFv(void);
void TLobby__sub_8001FE7C(void*, int);
void __dl__7TObjectFPv(void *);
void destroy_npc_lappy_base__12TObjNpcLappyFPvs(void *, int);
s32 is_any_teammate_in_state__10TObjPlayerFv();
M2C_UNK render_impl__19TObjBoss5FloorStoneFPvPv(s32, s32);

extern u32 TObjNpcSoutokufu__data_805D64C0;

void close_dialog_window__16TObjNpcSoutokufuFv(void) {
    if ((u32) TObjNpcSoutokufu__data_805D64C0 != 0U) {
        TLobby__sub_8001FE7C((void*)TObjNpcSoutokufu__data_805D64C0, 1);
        TObjNpcSoutokufu__data_805D64C0 = 0U;
    }
}

extern M2C_UNK __vt__16TObjNpcSoutokufu[];

void *__dt__16TObjNpcSoutokufuFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TObjNpcSoutokufu;
        destroy_npc_lappy_base__12TObjNpcLappyFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern void *lbl_805D4DD8;
extern s32 lbl_805D4DDC;

void render__19TObjBoss5FloorStoneFv(void) {
    if (is_any_teammate_in_state__10TObjPlayerFv() == 0) {
        render_impl__19TObjBoss5FloorStoneFPvPv(lbl_805D4DDC, M2C_FIELD(M2C_FIELD(lbl_805D4DD8, void **, 0x42C), s32 *, 0x58));
    }
}

void run_task__19TObjBoss5FloorStoneFv(void) {  }

}
