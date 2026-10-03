#include "types.h"

typedef struct Owner_8022CDE8 {
    u8 pad0[0x424];
    u32 f424;
    u8 slots[0x10];
} Owner_8022CDE8;

typedef struct Cursor_8022CDE8 {
    u8 pad0[0x9C];
    u8 list[0x10];
} Cursor_8022CDE8;

extern "C" {
void reset_slots__10TObjPlayerFPv(void *);
Cursor_8022CDE8 *find_by_pos__11TMainCursorFiss(u32, int, s16);
void *TObjPlayer__sub_80116620(void *, int);
u16 get_type_id__10TObjPlayerFPv(void *);
s32 get_obj_id__10TObjPlayerFPv(void *);
void TObjPlayer__sub_801D9AD0(void *, int, u16, s32);
void set_tech_level__10TObjPlayerFPvs(void *, s16);
s32 get_target__13TLockOnCursorFPv(void *);
void capture_technique_targets__10TObjPlayerFv(int kind, Owner_8022CDE8 *owner);
}

extern "C" {

s32 get_level_tier__10TObjPlayerFi(s32 arg0);

s32 get_level_tier__10TObjPlayerFi(s32 arg0) {
    s32 temp_r0;

    temp_r0 = arg0 / 5;
    switch (temp_r0) {
    case 0:
        return 0;
    case 1:
        return 1;
    case 2:
        return 2;
    case 3:
        return 3;
    case 4:
        return 4;
    case 5:
        return 5;
    default:
        return 0;
    }
}
#define ONE_SLOT()                                                                       \
    if (get_type_id__10TObjPlayerFPv(TObjPlayer__sub_80116620(c->list, 0)) != 0xFFFF) { \
        TObjPlayer__sub_801D9AD0(slots, 0,                                                \
            get_type_id__10TObjPlayerFPv(TObjPlayer__sub_80116620(c->list, 0)),           \
            get_obj_id__10TObjPlayerFPv(TObjPlayer__sub_80116620(c->list, 0)));           \
        set_tech_level__10TObjPlayerFPvs(slots, 1);                                      \
    }
void capture_technique_targets__10TObjPlayerFv(int kind, Owner_8022CDE8 *owner) {
    Cursor_8022CDE8 *c;
    void *slots;
    if (owner == NULL) {
        return;
    }
    if (owner->f424 == 0) {
        return;
    }
    slots = owner->slots;
    if (slots == NULL) {
        return;
    }
    reset_slots__10TObjPlayerFPv(owner->slots);
    c = find_by_pos__11TMainCursorFiss(owner->f424, 3, kind);
    if (c == NULL) {
        return;
    }
    switch (kind) {
    case 0:
        ONE_SLOT();
        break;
    case 2:
        ONE_SLOT();
        break;
    case 3:
        ONE_SLOT();
        break;
    case 4:
        ONE_SLOT();
        break;
    case 6:
        ONE_SLOT();
        break;
    case 7: {
        int n = 0;
        int i;
        for (i = 0; i < get_target__13TLockOnCursorFPv(c->list); i++) {
            if (get_type_id__10TObjPlayerFPv(TObjPlayer__sub_80116620(c->list, n)) != 0xFFFF) {
                TObjPlayer__sub_801D9AD0(slots, n,
                    get_type_id__10TObjPlayerFPv(TObjPlayer__sub_80116620(c->list, n)),
                    get_obj_id__10TObjPlayerFPv(TObjPlayer__sub_80116620(c->list, n)));
                n++;
            }
        }
        set_tech_level__10TObjPlayerFPvs(slots, n);
        break;
    }
    case 9:
        ONE_SLOT();
        break;
    case 10:
    case 11:
    case 12:
    case 13:
    case 15:
    case 16: {
        int i;
        int n = 0;
        for (i = 0; i < get_target__13TLockOnCursorFPv(c->list); i++) {
            TObjPlayer__sub_801D9AD0(slots, n,
                get_type_id__10TObjPlayerFPv(TObjPlayer__sub_80116620(c->list, n)),
                get_obj_id__10TObjPlayerFPv(TObjPlayer__sub_80116620(c->list, n)));
            n++;
        }
        set_tech_level__10TObjPlayerFPvs(slots, n);
        break;
    }
    case 17:
        ONE_SLOT();
        break;
    case 18:
        ONE_SLOT();
        break;
    }
}

}
