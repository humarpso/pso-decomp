#include "types.h"
#include "pso/boss/TBoss8Dragon.h"
#include "pso/object/TObjGrassWeb.h"

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
s32 fn_800BC758(u8 *arg0);
s32 attack_target_history_add(s32 arg0, s32 arg1);
s32 push_attack_target_entry(u8 *arg0, s32 arg1);
u8 *TBoss8Dragon__sub_800BC5EC(u8 *arg0, s32 arg1);
int attack_target_history_contains(void* object, void* target);
s32 mem_alloc(s32);
s32 fill_value_array(void *);
s32 mem_free(u32);

s32 attack_target_history_add(s32 object, s32 target) {
    if ((fn_800BC758((u8 *)(object)) != 0) && (((s32)attack_target_history_contains((void*)((void *)((void *) (object))), (void*)((void *)((void *) (target))))) == 0)) {
        ((s32)push_attack_target_entry((u8 *)((void *)((void *) (object))), (s32)((void *)((void *) (target)))));
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
        this->m_0 = mem_alloc(arg1 * 4);
    } else {
        this->m_0 = 0;
    }
    *(s32 *)&this->unk_4 = arg2;
    *(s32 *)&this->m_8 = 0;
    *(s32 *)&this->unk_C = arg1;
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
