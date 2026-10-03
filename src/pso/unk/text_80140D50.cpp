#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Obj_80140EE4 { u8 pad[0x1c]; void *slots[0x201]; };

struct Ent_80140F18 { void *key; u8 pad[0x14]; };

struct Obj_80140F18 { u8 pad[0x1c]; Ent_80140F18 *slots[1]; };

extern "C" {
void TObjPlayer__sub_8030A2CC(void* p, void* a1, void* a2);
void TObjPlayer__sub_8030A2CC(void* p, void* a1, void* a2);
void TObjPlayer__sub_8030A030(void *arg0, void *arg1);
void fn_80140DFC(s32 arg0, s32 arg1);
s32 TLobby__sub_80141030(void *);
void TObjPlayer__sub_8030A030(void *arg0, void *arg1);
void TObjPlayer__sub_8030A2CC(void* p, void* a1, void* a2);
void fn_80140DFC(s32 arg0, s32 arg1);
void TObjPlayer__sub_8030A2CC(void* p, void* a1, void* a2);
void TObjPlayer__sub_8030A030(void *arg0, void *arg1);
void fn_80140EA8(s32 arg0, s32 arg1);
s32 TLobby__sub_80141030(void *);
void fn_80140EA8(s32 arg0, s32 arg1);
void fn_80140EE4(Obj_80140EE4 *self, void *p);
void collect_collision_groups(Obj_80140F18 *self, Ent_80140F18 *e);
void fn_80140E38(s32 arg0, u32 arg1);
s32 get_main_phase();
s32 is_split_screen();
s32 get_instance__6TLobbyFv();
s32 TCameraCtrl__sub_8006B368();
void create_tasks__6TLobbyFv();
s32 check_disconnect_conditions__6TLobbyFv();
void init_area_lights();
void TLobby__sub_801403B4(int);
void dispatch_by_main_phase__14TBoss4DarkFalzFUs(u16);
s32 get_global_state__14TOKeyMachine01Fv();
void TLobby__sub_80226E44(int);
void TObjBgmColCtrl__sub_802274B8(void *);
void load_floor_sound_bank();
extern char lbl_8043F260[];
s32 fn_80140D50(void);
}

extern "C" {

struct VOff_80309DD0_arg0_80309dd0_80309D80 { char pad_0[0x4]; char f_4[1]; };

s32 fn_80140D50(void) {
    get_global_state__14TOKeyMachine01Fv();
    load_floor_sound_bank();
    if (check_disconnect_conditions__6TLobbyFv() != 0) {
        return 0;
    }
    init_area_lights();
    create_tasks__6TLobbyFv();
    if (get_main_phase() != 0xE || TCameraCtrl__sub_8006B368() == 0) {
        switch (get_global_state__14TOKeyMachine01Fv()) {
        case 0x14:
            dispatch_by_main_phase__14TBoss4DarkFalzFUs(0x4B);
            break;
        }
    }
    TLobby__sub_801403B4(0);
    if (is_split_screen() != 0) {
        TObjBgmColCtrl__sub_802274B8(lbl_8043F260);
    } else if (get_instance__6TLobbyFv() == 1) {
        TLobby__sub_80226E44(7);
    }
    return 1;
}

void fn_80140DFC(s32 arg0, s32 arg1) {
    fn_80140E38((s32)((void *) (arg0)), (u32)((void *) (TLobby__sub_80141030((void *) (arg1)))));
}

void fn_80140E38(s32 arg0, u32 arg1) {
    s32 i;
    u32 *p;
    p = (u32 *)(arg0 + 0x1C);
    for (i = 0; i < 0x200; p++, i++) {
        if (*p == arg1) {
            u32 *src;
            u32 *dst = p;
            s32 k;
            src = ++p;
            for (k = i; k < 0x200; k++) {
                *dst = *src++;
                if (*++dst == 0) {
                    return;
                }
            }
            *p = 0;
            return;
        }
    }
}

void fn_80140EA8(s32 arg0, s32 arg1) {
    fn_80140EE4((Obj_80140EE4 *)((void *) (arg0)), (void *)((void *) (TLobby__sub_80141030((void *) (arg1)))));
}
void fn_80140EE4(Obj_80140EE4 *self, void *p) {
    s32 i;
    void **s = self->slots;
    for (i = 0; i < 0x200; i++, s++) {
        if (*s == 0) {
            s[0] = p;
            s[1] = 0;
            return;
        }
    }
}
void collect_collision_groups(Obj_80140F18 *self, Ent_80140F18 *e) {
    Ent_80140F18 **p = self->slots;
    while (e->key != 0) {
        *p++ = e;
        e++;
    }
    *p = 0;
}

}
