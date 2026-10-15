#include "types.h"
#include "pso/TItemLoad.h"

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
s32 TItemBuff__ct();
s32 apply_rel_relocations(s32 *);
s32 read_disc_file(u32, s32);
s32 read_checked_align__6TLobbyFlll(s32, s32, s32, void *);
s32 __dl__FPv(s32 *);
int mem_alloc(void*);
s32 construct__9TItemDropFv(s32 *);
s32 create_item_buff(s32);
s32 destroy__9TItemDropFs(s32 *, s32);
s32 prs_decompress_alloc(s32, u32, s32);
s32 mem_free(s32);

    extern int item_load_compressed_work_buffer;
    extern int item_load_work_buffer_busy;
void TItemLoad::alloc_work_buffer() { item_load_compressed_work_buffer = mem_alloc((void*)((void*)24576)); item_load_work_buffer_busy = 0; }

s32 *__dt__9TItemLoadFPvs(s32 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        mem_free(*arg0);
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

void *TItemLoad::load_buffer(u32 arg1, s32 arg2) {
    struct Sp8Buf_8010fe6c_8010FDF0 sp8;
    s32 temp_r31;
    s32 temp_r3;

    *(u32 *)((s8 *)this + 0) = 0U;
    *(s32 *)((s8 *)this + 4) = 0;
    if ((arg2 != 0) && (arg1 != 0U)) {
        *(u32 *)((s8 *)this + 0) = mem_alloc((void*)(arg2));
        temp_r3 = create_item_buff(arg2);
        if ((temp_r3 != 0) && ((u32) *(u32 *)((s8 *)this + 0) != 0U) && (read_disc_file(arg1, temp_r3) > 0)) {
            temp_r31 = prs_decompress_alloc(temp_r3, *(u32 *)((s8 *)this + 0), arg2);
            construct__9TItemDropFv((s32 *)&sp8);
            sp8.field1c = *(u32 *)((s8 *)this + 0);
            sp8.field20 = temp_r31;
            *(s32 *)((s8 *)this + 4) = apply_rel_relocations((s32 *)&sp8);
            destroy__9TItemDropFs((s32 *)&sp8, -1);
        }
        TItemBuff__ct();
    }
    return this;
}

void TItemLoad::request_load(s32 arg1) {
    read_checked_align__6TLobbyFlll(*(s32 *)((s8 *)this + 4), *(s32 *)((s8 *)this + 0xC), arg1, this);
}

}
