#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

typedef struct S_802C3720 {
    u8 pad0[0x3A4];
    u32 f3A4;
} S_802C3720;

struct Stats_802C38B4 { s16 atp, mst, evp, hp, dfp, ata, lck; };

struct Char_802C38B4 {
    u8 pad0;
    s8 f1;
    s8 f2;
    u8 pad3[0x34C - 3];
    Stats_802C38B4 stats;
    s16 f35A;
    u8 pad35C[4];
    f32 f360;
    s32 level;
    s32 exp;
    s32 meseta;
};

extern "C" {
s8 get_item_count_max__10TObjPlayerFv();
void clear_30_slots__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_802C457C(void *, s16, s8);
s8 *get_action_data__10TObjPlayerFPv(void *);
void TObjPlayer__sub_802C3720(S_802C3720 *arg0);
void apply_class_level_growth(void *, s32, Stats_802C38B4 *);
void copy_stats__10TObjPlayerFPvPv(Stats_802C38B4 *, void *);
s32 clamp_index_to_max__10TObjPlayerFi(s32);
s32 get_current_state_field__10TObjPlayerFv(void *, s32);
void *get_class_base_stats(void *);
void set_field_157__10TObjPlayerFPvUc(void *, u8);
void set_byte_13b__10TObjPlayerFPvUc(void *, u8);
void set_action_flags__10TObjPlayerFPvUc(void *, u8);
void set_flag_103__10TObjPlayerFPvUc(void *, u8);
void set_flag_e7__10TObjPlayerFPvUc(void *, u8);
extern const f32 lbl_805DE530;
void init_character_stats_for_level(void *cls, Char_802C38B4 *c, s32 level);
s8 get_item_count_max__10TObjPlayerFv();
void init_technique_levels(s32 flags, s8 *counts);
}

extern "C" {

int init_new_character_data(void* p);
void init_new_character_stats(void *arg0);
void clear_30_slots__10TObjPlayerFPv(void* p);
void setup_effect_slots__10TObjPlayerFii(s32 arg0, s32 arg1);
int init_class_starting_inventory(void*);
int TObjPlayer__sub_802C456C(void*, void*, void*);
int TObjPlayer__sub_802C46BC(void*);
M2C_UNK TObjPlayer__sub_802C46E0(s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
int clear_item_slots__10TObjPlayerFPv(void*);
int set_action_state__10TObjPlayerFPvUc(void*, void*);

int init_new_character_data(void* p) { *(unsigned char*)(p) = 0; clear_item_slots__10TObjPlayerFPv(p); TObjPlayer__sub_802C46BC((char*)p + 0x3c0); init_class_starting_inventory(p); *(int*)((char*)p + 0x36c) = 300; set_action_state__10TObjPlayerFPvUc(p, (void*)1); return 1; }

void clear_30_slots__10TObjPlayerFPv(void* p) { { int i; for (i = 0; i < 30; i++) { TObjPlayer__sub_802C456C(p, (void*)i, (void*)0); } } }

void TObjPlayer__sub_802C3720(S_802C3720 *arg0) {
    s32 i;
    s8 *p;
    p = get_action_data__10TObjPlayerFPv(arg0);
    for (i = 0; i < 0x14; i++) {
        *p = get_item_count_max__10TObjPlayerFv();
        p++;
    }
    if (arg0->f3A4 & 0x80) {
        TObjPlayer__sub_802C457C(arg0, 0, 0);
    }
    clear_30_slots__10TObjPlayerFPv((void*)(arg0));
}

void init_technique_levels(s32 flags, s8 *counts) {
    s32 i;
    s8 *p = counts;
    for (i = 0; i < 0x14; i++, p++) {
        *p = get_item_count_max__10TObjPlayerFv();
    }
    if (flags & 0x80) {
        *counts = 0;
    }
}

void setup_effect_slots__10TObjPlayerFii(s32 arg0, s32 arg1) {
    TObjPlayer__sub_802C46E0(arg1, 0, 0, 1, 0);
    TObjPlayer__sub_802C46E0(arg1, 1, 0, 1, 0);
    TObjPlayer__sub_802C46E0(arg1, 0, 1, 2, 0);
    TObjPlayer__sub_802C46E0(arg1, 0, 2, 2, 1);
    if (arg0 & 0x60) {
        TObjPlayer__sub_802C46E0(arg1, 0, 3, 4, 0);
        return;
    }
    TObjPlayer__sub_802C46E0(arg1, 0, 3, 3, 0);
}

void init_character_stats_for_level(void *cls, Char_802C38B4 *c, s32 level) {
    Stats_802C38B4 st;
    level = clamp_index_to_max__10TObjPlayerFi(level);
    copy_stats__10TObjPlayerFPvPv(&st, get_class_base_stats(cls));
    if (level != 0) {
        apply_class_level_growth(cls, level, &st);
    }
    c->stats.atp = st.atp;
    c->stats.mst = st.mst;
    c->stats.evp = st.evp;
    c->stats.hp = st.hp;
    c->stats.dfp = st.dfp;
    c->stats.ata = st.ata;
    c->stats.lck = st.lck;
    c->f35A = 0x28;
    c->f360 = lbl_805DE530;
    c->level = level;
    c->exp = get_current_state_field__10TObjPlayerFv(cls, level);
    c->meseta = 300;
    c->f1 = 0;
    c->f2 = 0;
    set_flag_e7__10TObjPlayerFPvUc(c, 0);
    set_flag_103__10TObjPlayerFPvUc(c, 0);
    set_action_flags__10TObjPlayerFPvUc(c, 0);
    set_byte_13b__10TObjPlayerFPvUc(c, 0);
    set_field_157__10TObjPlayerFPvUc(c, 0);
}

void init_new_character_stats(void *arg0) {
    init_character_stats_for_level((void *)(M2C_FIELD(arg0, u8 *, 0x3A1)), (Char_802C38B4 *)(arg0), (s32)(0));
}

}
