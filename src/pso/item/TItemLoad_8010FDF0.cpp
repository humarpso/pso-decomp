#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

struct Sp8Buf_8010fe6c_8010FDF0 {
    s32 field00;
    s32 field04;
    s32 field08;
    s32 field0c;
    s32 field10;
    s32 field14;
    s32 field18;
    u32 field1c;
    s32 field20;
    s32 field24;
    s32 field28;
    s32 field2c;
    s32 field30;
    s32 field34;
    s32 field38;
    s32 field3c;
};

s32 *__dt__9TItemLoadFPvs(s32 *arg0, s16 arg1);
void alloc_work_buffer__9TItemLoadFv(void);
void *load_buffer__9TItemLoadFPvUii(void *arg0, u32 arg1, s32 arg2);
void request_load__9TItemLoadFPvi(void *arg0, s32 arg1);
M2C_UNK TItemBuff__ct();
s32 apply_rel_relocations(M2C_UNK *);
s32 read_disc_file(u32, s32);
M2C_UNK read_checked_align__6TLobbyFiii(s32, s32, s32, void *);
M2C_UNK __dl__FPv(s32 *);
int alloc_buffer__11TOBoss4RockFPv(void*);
M2C_UNK construct__9TItemDropFPv(M2C_UNK *);
s32 create_item_buff(s32);
M2C_UNK destroy__9TItemDropFPvs(M2C_UNK *, M2C_UNK);
s32 fn_800F7D30(s32, u32, s32);
M2C_UNK free__11TOBoss4RockFUi(s32);

    extern int lbl_805D5494;
    extern int lbl_805D5498;
void alloc_work_buffer__9TItemLoadFv(void) { lbl_805D5494 = alloc_buffer__11TOBoss4RockFPv((void*)((void*)24576)); lbl_805D5498 = 0; }

s32 *__dt__9TItemLoadFPvs(s32 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        free__11TOBoss4RockFUi(*arg0);
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

void *load_buffer__9TItemLoadFPvUii(void *arg0, u32 arg1, s32 arg2) {
    struct Sp8Buf_8010fe6c_8010FDF0 sp8;
    s32 temp_r31;
    s32 temp_r3;

    M2C_FIELD(arg0, u32 *, 0) = 0U;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    if ((arg2 != 0) && (arg1 != 0U)) {
        M2C_FIELD(arg0, u32 *, 0) = alloc_buffer__11TOBoss4RockFPv((void*)(arg2));
        temp_r3 = create_item_buff(arg2);
        if ((temp_r3 != 0) && ((u32) M2C_FIELD(arg0, u32 *, 0) != 0U) && (read_disc_file(arg1, temp_r3) > 0)) {
            temp_r31 = fn_800F7D30(temp_r3, M2C_FIELD(arg0, u32 *, 0), arg2);
            construct__9TItemDropFPv((M2C_UNK *)&sp8);
            sp8.field1c = M2C_FIELD(arg0, u32 *, 0);
            sp8.field20 = temp_r31;
            M2C_FIELD(arg0, s32 *, 4) = apply_rel_relocations((M2C_UNK *)&sp8);
            destroy__9TItemDropFPvs((M2C_UNK *)&sp8, -1);
        }
        TItemBuff__ct();
    }
    return arg0;
}

void request_load__9TItemLoadFPvi(void *arg0, s32 arg1) {
    read_checked_align__6TLobbyFiii(M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 0xC), arg1, arg0);
}

}
