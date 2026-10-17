#include "types.h"
#include "pso/ui/TAdVIConfigGC_80308200.h"
#include "pso/ui/TAdYesNoBaseGC.h"
#include "pso/ui/TAdVIConfigGC.h"

struct Elem_80125628 { u8 pad[0x1c]; u8 f1c[0x2c - 0x1c]; };

struct Obj_80125628 { u8 pad[0xa4]; Elem_80125628 *elems; };

struct Ctx_80125628 { Obj_80125628 *obj; s32 idx; };

extern "C" {
u32 find_item_by_id(void);
s32 spawn_fire_explosion_at(u32 a0, s32 a1);
s32 spawn_fire_explosion_at(u32 a0 = 0, s32 a1 = 0);

void TAdVIConfigGC::set_field_2c(s32 v) { *(s32 *)&this->m_2c = v; }

void TAdVIConfigGC::apply_config_if_valid(s32 arg0, s32 arg1) {
    u32 temp_r3 = find_item_by_id();
    if (temp_r3 != 0U) {
        spawn_fire_explosion_at(temp_r3, arg1);
    }
}
void spawn_nug2000_hit_explosion(s32 arg0, s32 arg1) {
    Ctx_80125628 *ctx = (Ctx_80125628 *)arg1;
    u32 p = find_item_by_id();
    if (p != 0U) {
        spawn_fire_explosion_at(p, (s32)ctx->obj->elems[ctx->idx].f1c);
    }
}

}
