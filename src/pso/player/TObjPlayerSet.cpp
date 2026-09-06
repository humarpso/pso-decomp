#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
u8 * __ct__12TQuestThreadFv(void *, s32, s32);
M2C_UNK destroy_board__17TQuestThreadBoardFv();
void *__nw__7TObjectFUl(int);
M2C_UNK set_parent__7TObjectFP7TObject(int, int);
extern s32 tl_00;
u8 *TObjQuestCol2__vt14(u8 *arg0);
}

extern "C" {

void *TObjQuestCol2__create(void *arg0);
void *__dt__13TObjPlayerSetFv(void *arg0, s16 arg1);
void *create__13TObjPlayerSetFPv(void *arg0);
void render__13TObjPlayerSetFv(void);
void run_task__13TObjPlayerSetFv(void);
void *TObjPlayerSet__ct(void *, void *, void *);
void *TObjQuestCol2__ct(void *, void *, void *);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void destroy_particle__13TParticleCtrlFPvs(void *, int);

void render__13TObjPlayerSetFv(void) {  }
void run_task__13TObjPlayerSetFv(void) {  }

extern void *tl_06;

void *create__13TObjPlayerSetFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x90);
    if (o != NULL) {
        o = TObjPlayerSet__ct(o, tl_06, arg0);
    }
    return o;
}

extern M2C_UNK __vt__13TObjPlayerSet[];

void *__dt__13TObjPlayerSetFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TObjPlayerSet;
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern void *lbl_805D5C50;

void *TObjQuestCol2__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xC4);
    if (o != NULL) {
        o = TObjQuestCol2__ct(o, lbl_805D5C50, arg0);
    }
    return o;
}
u8 *TObjQuestCol2__vt14(u8 *arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    u8 *var_r31;
    destroy_board__17TQuestThreadBoardFv();
    var_r31 = (u8 *)(NULL);
    if ((u32) M2C_FIELD(arg0, u32 *, 0xBC) != 0U) {
        temp_r3 = (u8 *)(((u8 *)__nw__7TObjectFUl((int)(0x194))));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(__ct__12TQuestThreadFv(temp_r3, (s32) M2C_FIELD(arg0, u32 *, 0xBC), M2C_FIELD(arg0, s32 *, 0xB0)));
        }
        var_r31 = (u8 *)(var_r0);
        if (var_r0 != NULL) {
            set_parent__7TObjectFP7TObject((int) (var_r0), (int) (tl_00));
        }
    }
    return var_r31;
}

}
