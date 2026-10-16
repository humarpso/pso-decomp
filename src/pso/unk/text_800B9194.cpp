#include "types.h"
#include "pso/enemy/TObjEneDD_ST.h"

extern "C" {
s32 enemy_clear_target__12TObjEneDD_STFUs(void *);
s32 is_valid_target__9TObjEneDDFv(s32);
s32 enemy_clear_target__12TObjEneDD_STFUs(void *);
s32 is_alive__9TObjEneDDFv(s32);
u32 find_entity_by_id(u32);
}

extern "C" {

#pragma push
#pragma fp_contract on
s32 TObjEneDD_ST::enemy_has_live_target() {
    u32 id = *(u16 *)((s8 *)this + 0x38C);
    if (id == 0xFFFF) {
        return 0;
    }
    if (find_entity_by_id(id) == 0U) {
        enemy_clear_target__12TObjEneDD_STFUs(this);
        return 0;
    }
    return is_alive__9TObjEneDDFv(*(s32 *)((s8 *)this + 0x390));
}
#pragma pop

s32 TObjEneDD_ST::enemy_check_target_valid() {
    u16 id = *(u16 *)((s8 *)this + 0x38C);
    if (id == 0xFFFF) {
        return 0;
    }
    if (find_entity_by_id(id) == 0U) {
        enemy_clear_target__12TObjEneDD_STFUs(this);
        return 0;
    }
    return is_valid_target__9TObjEneDDFv(*(s32 *)((s8 *)this + 0x390));
}

}
