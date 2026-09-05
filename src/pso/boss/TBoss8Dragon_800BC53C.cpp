#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 TBoss8Dragon__sub_800BC5A0(s32 arg0, s16 arg1);
s32 __dl__FPv(u32 *);
u32 *free_buffer__12TBoss8DragonFPvs(u32 *arg0, s16 arg1);
extern M2C_UNK __vt__13TLockOnCursor[];
extern M2C_UNK TLockOnCursor__sub_8013EFB8[];
extern M2C_UNK __dt_deleting__13TLockOnCursorFis[];
extern void *lbl_805D2CB4;
s32 TBoss8Dragon__sub_800BC5A0(s32 arg0, s16 arg1);
int fn_800BC71C(void *, void *);
s32 fn_800BC758(u8 *arg0);
s32 TObjPlayer__sub_800BC53C(s32 arg0, s32 arg1);
s32 fn_800BC6E4(u8 *arg0, s32 arg1);
}

extern "C" {

int TBoss8Dragon__sub_800BC5EC(void);
u32 *free_buffer__12TBoss8DragonFPvs(u32 *arg0, s16 arg1);
void *init_buffer__12TBoss8DragonFPvii(void *arg0, s32 arg1, s32 arg2);
s32 __dl__FPv(u32 *);
s32 alloc_buffer__11TOBoss4RockFPv(s32);
s32 fn_8002B094(void *);
s32 free__11TOBoss4RockFUi(u32);
int queue_destruction__12TObjGrassWebFPv(void* p);
int queue_destruction__7TObjectFv(void*);

struct VOff_8013DE3C_arg0_8013D91C { char pad_0[0x1C]; char f_1C[1]; };

s32 TObjPlayer__sub_800BC53C(s32 arg0, s32 arg1) {
    if ((fn_800BC758((u8 *)(arg0)) != 0) && (((s32)fn_800BC71C((void *)((void *) (arg0)), (void *)((void *) (arg1)))) == 0)) {
        ((M2C_UNK)fn_800BC6E4((u8 *)((void *)((void *) (arg0))), (s32)((void *)((void *) (arg1)))));
        return 1;
    }
    return 0;
}

s32 TBoss8Dragon__sub_800BC5A0(s32 arg0, s16 arg1) {
    if (arg0 != 0) {
        free_buffer__12TBoss8DragonFPvs((u32 *)(arg0), (s16)(0));
        if (arg1 > 0) {
            __dl__FPv((u32 *)(arg0));
        }
    }
    return arg0;
}

int TBoss8Dragon__sub_800BC5EC(void) { return 0; }

void *init_buffer__12TBoss8DragonFPvii(void *arg0, s32 arg1, s32 arg2) {
    if (arg1 > 0) {
        M2C_FIELD(arg0, s32 *, 0) = alloc_buffer__11TOBoss4RockFPv(arg1 * 4);
    } else {
        M2C_FIELD(arg0, s32 *, 0) = 0;
    }
    M2C_FIELD(arg0, s32 *, 4) = arg2;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = arg1;
    fn_8002B094(arg0);
    return arg0;
}
u32 *free_buffer__12TBoss8DragonFPvs(u32 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        if ((u32) *arg0 != 0U) {
            free__11TOBoss4RockFUi(*arg0);
            *arg0 = 0U;
        }
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

s32 fn_800BC6E4(u8 *arg0, s32 arg1) {
    s32 temp_r4;
    s32 temp_r6;
    temp_r6 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_r6 < (s32) M2C_FIELD(arg0, s32 *, 0xC)) {
        M2C_FIELD(M2C_FIELD(arg0, s32 *, 0), M2C_UNK *, (temp_r6 * 4)) = arg1;
        temp_r4 = M2C_FIELD(arg0, s32 *, 8);
        M2C_FIELD(arg0, s32 *, 8) = (s32) (temp_r4 + 1);
        return temp_r4;
    }
    return -1;
}

int fn_800BC71C(void * _w0, void * _w1) { return 0; }

s32 fn_800BC758(u8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 8) < M2C_FIELD(arg0, s32 *, 0xC);
}

}
