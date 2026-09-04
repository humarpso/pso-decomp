#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__dt__19TObjEneDelDepthBombFv(void *arg0, s16 arg1);
void * create__19TObjEneDelDepthBombFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3);
void *TObjEneDelDepthBomb__ct(void *, void *, void *, void *, void *);
int TObjPlayer__sub_8001BEF8(void*, int);
int TObjPlayer__sub_801AA64C(void* a0 = 0);
int TObjPlayer__sub_80313138(void* a0 = 0);
int TObjPlayer__sub_803131AC(void);
int TObjPlayer__sub_80313218(void* p);
void TObjPlayer__sub_80313250(void *arg0, s32 arg1);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
int check_flag_at_4__10TObjPlayerFPv(void* p);
void destroy_motion_object__10TObjPlayerFPvs(void *, int);
int get_max_children__10TObjPlayerFPv(void* a0 = 0);
int query_field40__10TObjPlayerFPv(void* p);
void set_field_0__10TObjPlayerFPvs(void* p, s16 v);
int set_flags__10TObjPlayerFPvUi(void*, int);
void update_children__10TObjPlayerFPv(void* p);

void * create__19TObjEneDelDepthBombFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3) {
    void *o;
    o = __nw__7TObjectFUl(0x358);
    if (o != NULL) {
        o = TObjEneDelDepthBomb__ct(o, arg0, arg1, arg2, arg3);
    }
    return o;
}

extern M2C_UNK __vt__19TObjEneDelDepthBomb[];

void *__dt__19TObjEneDelDepthBombFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__19TObjEneDelDepthBomb;
        destroy_motion_object__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
