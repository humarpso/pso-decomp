#include "types.h"
#include "pso/boss/TBoss8Dragon.h"

struct AreaAttackHistory {
    void** entries;
    void* empty;
    s32 count;
    s32 capacity;
};

extern "C" {
s32 delete_buffer__12TBoss8DragonFis(s32 arg0, s16 arg1);
s32 __dl__FPv(u32 *);
u32 *free_buffer__12TBoss8DragonFPvs(u32 *arg0, s16 arg1);
extern s32 __vt__13TLockOnCursor[];
extern s32 TLockOnCursor__sub_8013EFB8[];
extern s32 __dt_deleting__13TLockOnCursorFis[];
extern void *lock_on_cursor_class_name;
s32 delete_buffer__12TBoss8DragonFis(s32 arg0, s16 arg1);
s32 fn_800BC758(u8 *arg0);
s32 attack_target_history_add(s32 arg0, s32 arg1);
s32 push_attack_target_entry(u8 *arg0, s32 arg1);
u8 *TBoss8Dragon__sub_800BC5EC(u8 *arg0, s32 arg1);
int attack_target_history_contains(void* object, void* target);
}

extern "C" {

u32 *free_buffer__12TBoss8DragonFPvs(u32 *arg0, s16 arg1);
s32 __dl__FPv(u32 *);
s32 mem_alloc(s32);
s32 fill_value_array(void *);
s32 mem_free(u32);
int queue_destruction__12TObjGrassWebFv(void* p);
int queue_destruction__7TObjectFv(void*);

struct VOff_8013DE3C_arg0_8013D91C { char pad_0[0x1C]; char f_1C[1]; };

s32 attack_target_history_add(s32 arg0, s32 arg1) {
    if ((fn_800BC758((u8 *)(arg0)) != 0) && (((s32)attack_target_history_contains((void*)((void *)((void *) (arg0))), (void*)((void *)((void *) (arg1))))) == 0)) {
        ((s32)push_attack_target_entry((u8 *)((void *)((void *) (arg0))), (s32)((void *)((void *) (arg1)))));
        return 1;
    }
    return 0;
}

s32 delete_buffer__12TBoss8DragonFis(s32 arg0, s16 arg1) {
    if (arg0 != 0) {
        free_buffer__12TBoss8DragonFPvs((u32 *)(arg0), (s16)(0));
        if (arg1 > 0) {
            __dl__FPv((u32 *)(arg0));
        }
    }
    return arg0;
}

u8 *TBoss8Dragon__sub_800BC5EC(u8 *arg0, s32 arg1) {
    ((TBoss8Dragon *)arg0)->init_buffer(arg1, 0);
    return arg0;
}

void *TBoss8Dragon::init_buffer(s32 arg1, s32 arg2) {
    if (arg1 > 0) {
        *(s32 *)((s8 *)this + 0) = mem_alloc(arg1 * 4);
    } else {
        *(s32 *)((s8 *)this + 0) = 0;
    }
    *(s32 *)((s8 *)this + 4) = arg2;
    *(s32 *)((s8 *)this + 8) = 0;
    *(s32 *)((s8 *)this + 0xC) = arg1;
    fill_value_array(this);
    return this;
}
u32 *free_buffer__12TBoss8DragonFPvs(u32 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        if ((u32) *arg0 != 0U) {
            mem_free(*arg0);
            *arg0 = 0U;
        }
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

s32 push_attack_target_entry(u8 *arg0, s32 arg1) {
    s32 temp_r4;
    s32 temp_r6;
    temp_r6 = *(s32 *)((s8 *)arg0 + 8);
    if (temp_r6 < (s32) *(s32 *)((s8 *)arg0 + 0xC)) {
        *(s32 *)((s8 *)(*(s32 *)((s8 *)arg0 + 0)) + (temp_r6 * 4)) = arg1;
        temp_r4 = *(s32 *)((s8 *)arg0 + 8);
        *(s32 *)((s8 *)arg0 + 8) = (s32) (temp_r4 + 1);
        return temp_r4;
    }
    return -1;
}

int attack_target_history_contains(void* object, void* target) {
    AreaAttackHistory* history = static_cast<AreaAttackHistory*>(object);
    for (s32 i = 0; i < history->count; ++i) {
        if (history->entries[i] == target) return 1;
    }
    return 0;
}

s32 fn_800BC758(u8 *arg0) {
    return *(s32 *)((s8 *)arg0 + 8) < *(s32 *)((s8 *)arg0 + 0xC);
}

}
