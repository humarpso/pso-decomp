#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
s32 queue_destruction__7TObjectFv(void *);
int is_falz_alive__15TBoss6CrushRockFv(void*);
f32 TBoss4Zako__sub_803D8910(void *, void *);
f32 TBoss6Kakusan__sub_803D8BD8(void *);
extern const f32 lbl_805E00B8;
extern const f32 lbl_805E00BC;
extern const f32 lbl_805E00C0;
extern const f32 lbl_805E00C4;
void run_task__15TBoss6CrushRockFv(u8 *arg0);
}

extern "C" {

void render__15TBoss6CrushRockFv(void* p);
int TOHangerMachine01__sub_803D9C00(void*);
int rotate_matrix_z(void*, void*);
int draw_ginja_object(void*);
int rotate_matrix_x(void*, void*);
int rotate_matrix_y(void*, void*);
int TObjPlayer__sub_803D9B2C(void);
int pop_matrix(void);
int set_global_param__8TObjFishFi(void*);

void render__15TBoss6CrushRockFv(void* p) { if (is_falz_alive__15TBoss6CrushRockFv(p) != 0) { TObjPlayer__sub_803D9B2C(); TOHangerMachine01__sub_803D9C00((char*)p + 0x24); rotate_matrix_y((void*)0, *(void**)((char*)p + 0x40)); rotate_matrix_x((void*)0, *(void**)((char*)p + 0x3c)); rotate_matrix_z((void*)0, *(void**)((char*)p + 0x44)); set_global_param__8TObjFishFi(*(void**)((char*)p + 0x20)); draw_ginja_object(*(void**)((char*)p + 0x1c)); pop_matrix(); } }
#pragma push
#pragma opt_common_subs off
void run_task__15TBoss6CrushRockFv(u8 *arg0) {
    if (((s32)is_falz_alive__15TBoss6CrushRockFv((void*)(arg0))) == 0) {
        queue_destruction__7TObjectFv((void *) (arg0));
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x3C) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C) + M2C_FIELD(arg0, s32 *, 0x48));
    M2C_FIELD(arg0, s32 *, 0x40) = (s32) (M2C_FIELD(arg0, s32 *, 0x40) + M2C_FIELD(arg0, s32 *, 0x4C));
    M2C_FIELD(arg0, s32 *, 0x44) = (s32) (M2C_FIELD(arg0, s32 *, 0x44) + M2C_FIELD(arg0, s32 *, 0x50));
    M2C_FIELD(arg0, f32 *, 0x34) = (f32) (M2C_FIELD(arg0, f32 *, 0x34) + lbl_805E00B8);
    TBoss4Zako__sub_803D8910((void *) (arg0 + 0x24), (void *) (arg0 + 0x30));
    if (M2C_FIELD(arg0, f32 *, 0x28) < lbl_805E00BC) {
        M2C_FIELD(arg0, f32 *, 0x28) = (f32) lbl_805E00BC;
        M2C_FIELD(arg0, f32 *, 0x30) = (f32) (M2C_FIELD(arg0, f32 *, 0x30) * lbl_805E00C0);
        M2C_FIELD(arg0, f32 *, 0x34) = (f32) (M2C_FIELD(arg0, f32 *, 0x34) * lbl_805E00B8);
        M2C_FIELD(arg0, f32 *, 0x38) = (f32) (M2C_FIELD(arg0, f32 *, 0x38) * lbl_805E00C0);
        if (TBoss6Kakusan__sub_803D8BD8((void *) (arg0 + 0x30)) < lbl_805E00C4) {
            queue_destruction__7TObjectFv((void *) (arg0));
        }
    }
}
#pragma pop

}
