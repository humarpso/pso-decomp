#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct TWindowDD_803431C0 {
    u8 pad0[0x20];
    s32 depth;
    void *child[7];
    s32 ids[13];
    void *objs[5];
    s32 f88;
    s32 f8C;
    s32 f90;
    u8 pad94[0xB0 - 0x94];
    s32 fB0;
    u8 padB4[0xBC - 0xB4];
    s32 fBC;
    u8 padC0[0xC6 - 0xC0];
    s16 fC6;
};

typedef s32 M2C_UNK;
struct TWindowDD_8034330C {
    u8 pad0[0x20];
    s32 depth;
    u8 *child[7];
    s32 ids[13];
    void *objs[5];
    s32 f88;
    s32 f8C;
    s32 f90;
    u8 pad94[0xAC - 0x94];
    s32 fAC;
    s32 fB0;
    u8 padB4[0xBC - 0xB4];
    s32 fBC;
    u8 fC0[4];
    u8 fC4[4];
};

extern "C" {
M2C_UNK free_child__9TWindowDDFPv(int);
M2C_UNK apply_input__9TWindowDDFPvPv(int, int);
M2C_UNK update__9TWindowDDFPvi(int, int, int);
void TWindowDD__sub_803434F4(u8 *arg0);
s32 TWindowDD__sub_80342428(void *);
s32 handle_input__9TWindowDDFi(void *);
s32 enter_state_19__9TWindowDDFPv(void *);
s32 enter_state_18__9TWindowDDFPv(void *);
s32 enter_state_16__9TWindowDDFPv(void *);
s32 update_state__9TWindowDDFPv(void *);
s32 TWindowDD__sub_80342800(void *);
s32 update__9TWindowDDFi(void *);
s32 TWindowDD__sub_803429B0(void *);
s32 enter_state_9__9TWindowDDFPv(void *);
s32 update_dispatch__9TWindowDDFi(void *);
s32 update_layout__9TWindowDDFPv(void *);
s32 update_transition__9TWindowDDFPv(void *);
s32 TWindowDD__sub_80342D14(void *);
s32 update__9TWindowDDFPv(void *);
s32 TWindowDD__sub_80342ED0(void *);
void TWindowDD__sub_80343808(u8 *arg0);
void queue_destruction__7TObjectFv(void *);
s16 TWindowDD__sub_8034214C(int);
void TWindowDD__sub_803478DC(void *, int);
void TWindowDD__sub_80347980(void *);
s32 *get_entry__9TWindowDDFii(void *, s32);
void update__9TWindowDDFPvPv(void *, void *);
void TWindowDD__sub_803431C0(TWindowDD_803431C0 *arg0);
void set_pos_and_data__9TWindowDDFPvf(void *, f32);
void TWindowDD__sub_80347940(void *, int);
u8 *TWindowDD__sub_803479E4(void *);
void TWindowDD__sub_80347CC8(void *, void *);
void setup_entry__9TWindowDDFPvi(void *, s32);
s32 *get_entry__9TWindowDDFii(void *, s32);
void TWindowDD__sub_80347F48(void *);
void TWindowDD__sub_80347F68(void *, int);
void TWindowDD__sub_80347FA0(void *, int);
void TWindowDD__sub_80348DAC(void *);
extern const s32 TWindowDD__data_805DFB50;
extern const f32 TWindowDD__data_805DFB74;
extern const f32 lbl_805DFB7C;
extern const f32 lbl_805DFB80;
extern const f32 lbl_805DFB88;
extern const f32 TWindowDD__data_805DFBFC;
extern const f32 lbl_805DFC0C;
extern const f32 TWindowDD__data_805DFC10;
void TWindowDD__sub_8034330C(TWindowDD_8034330C *arg0);
}

extern "C" {

void *__dt__9TWindowDDFv(void *arg0, s16 arg1);
void free_buffers__9TWindowDDFv(void);
s32 update_close_flag__9TWindowDDFPv(void *arg0);
void TLobby__sub_800F957C(void*);
M2C_UNK TWindowDD__sub_80347EF4();
void TWindowDD__sub_80348520(void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
s32 classify_id__9TWindowDDFs();
M2C_UNK fn_8034AF18();
void free__11TOBoss4RockFUi(void*);

s32 update_close_flag__9TWindowDDFPv(void *arg0) {
    TWindowDD__sub_80347EF4();
    if (classify_id__9TWindowDDFs() != 7) {
        M2C_FIELD(arg0, s32 *, 0xB8) = 1;
        return 1;
    }
    return 0;
}

extern M2C_UNK __vt__9TWindowDD[];

void TWindowDD__sub_803431C0(TWindowDD_803431C0 *arg0) {
    s32 *entry;
    void *child;
    get_entry__9TWindowDDFii(arg0, arg0->fB0);
    entry = get_entry__9TWindowDDFii(arg0, arg0->ids[arg0->depth]);
    TWindowDD__sub_80347980(arg0);
    if (*entry & 8) {
        TWindowDD__sub_803478DC(arg0, 0);
    } else if ((child = arg0->child[arg0->depth]) != NULL) {
        update__9TWindowDDFPvPv(arg0, child);
    }
    TWindowDD__sub_803478DC(arg0, 1);
    arg0->depth--;
    if (*entry & 4) {
        arg0->fBC--;
        if (arg0->fBC >= 0 && arg0->objs[arg0->fBC] != NULL) {
            queue_destruction__7TObjectFv(arg0->objs[arg0->fBC]);
            arg0->objs[arg0->fBC] = NULL;
        }
    }
    arg0->f90 = arg0->f8C;
    arg0->f8C = arg0->f88;
    arg0->f88 = TWindowDD__sub_8034214C((int) arg0->child[arg0->depth]);
    arg0->fB0 = arg0->ids[arg0->depth + 1];
    if (arg0->fB0 == 0xD) {
        arg0->fC6 = 4;
    }
}

void TWindowDD__sub_8034330C(TWindowDD_8034330C *arg0) {
    s32 *prev;
    s32 *entry;
    u8 *w;
    u8 *child;
    s32 id;
    prev = get_entry__9TWindowDDFii(arg0, arg0->fB0);
    entry = get_entry__9TWindowDDFii(arg0, arg0->ids[arg0->depth]);
    w = TWindowDD__sub_803479E4(arg0);
    if (w != NULL) {
        if (*entry & 1) {
            M2C_FIELD(w, f32 *, 0x38) = lbl_805DFB7C;
            if (arg0->objs[3] != NULL) {
                M2C_FIELD(arg0->objs[3], f32 *, 0x30) = lbl_805DFC0C;
                M2C_FIELD(arg0->objs[3], s32 *, 0x50) = TWindowDD__data_805DFB50;
            }
        } else {
            M2C_FIELD(w, f32 *, 0x38) = TWindowDD__data_805DFB74;
            if (arg0->objs[3] != NULL) {
                M2C_FIELD(arg0->objs[3], f32 *, 0x30) = TWindowDD__data_805DFBFC;
                M2C_FIELD(arg0->objs[3], s32 *, 0x50) = TWindowDD__data_805DFB50;
            }
        }
    }
    child = arg0->child[arg0->depth];
    if (child != NULL) {
        if (*entry & 8) {
            TWindowDD__sub_80347940(arg0, 0);
            TWindowDD__sub_80347FA0(arg0, 1);
        } else if (*entry & 1) {
            set_pos_and_data__9TWindowDDFPvf(child, TWindowDD__data_805DFC10);
            M2C_FIELD(child, f32 *, 0x38) = lbl_805DFB88;
            TWindowDD__sub_80347F48(arg0);
        } else {
            set_pos_and_data__9TWindowDDFPvf(child, lbl_805DFB80);
            M2C_FIELD(child, f32 *, 0x38) = lbl_805DFB88;
            TWindowDD__sub_80347F68(arg0, 1);
        }
        if (*prev & 2) {
            TWindowDD__sub_80348DAC(arg0->fC4);
            TWindowDD__sub_80347CC8(arg0, arg0->fC4);
        }
    }
    TWindowDD__sub_80347940(arg0, 1);
    if (!(*entry & 2)) {
        TWindowDD__sub_80347FA0(arg0, 3);
    }
    if (*entry & 4) {
        if (arg0->fBC > 0) {
            TWindowDD__sub_80347FA0(arg0, arg0->fBC + 3);
        }
    }
    id = ((s16 *)entry)[2];
    if (id == -1) {
        TWindowDD__sub_80347FA0(arg0, 2);
    } else {
        setup_entry__9TWindowDDFPvi(arg0, id);
        TWindowDD__sub_80347F68(arg0, 2);
    }
    arg0->fAC = 2;
}

void TWindowDD__sub_803434F4(u8 *arg0) {
    u8 *var_r31;
    u8 *var_r3;
    u8 *var_r4;
    u8 *var_r5;
    var_r31 = (u8 *)(arg0);
    var_r3 = (u8 *)(var_r31 + (M2C_FIELD(arg0, s32 *, 0x20) * 4));
    var_r3 = (u8 *)(M2C_FIELD(var_r3, u8 **, 0x24));
    free_child__9TWindowDDFPv((int) (var_r3));
    var_r3 = (u8 *)(var_r31);
    var_r4 = (u8 *)(var_r31 + (M2C_FIELD(var_r31, s32 *, 0x20) * 4));
    var_r4 = (u8 *)(M2C_FIELD(var_r4, u8 **, 0x24));
    apply_input__9TWindowDDFPvPv((int) (var_r3), (int) (var_r4));
    var_r3 = (u8 *)(var_r31);
    var_r5 = (u8 *)(M2C_FIELD(var_r31, u8 **, 0xB0));
    var_r4 = (u8 *)(var_r31 + (M2C_FIELD(var_r31, s32 *, 0x20) * 4));
    M2C_FIELD(var_r4, u8 **, 0x44) = var_r5;
    var_r4 = (u8 *)((void *) M2C_FIELD(var_r31, s32 *, 0x20));
    M2C_FIELD(var_r31, s32 *, 0x20) = (s32) (var_r4 + 1);
    var_r4 = (u8 *)(var_r31 + (M2C_FIELD(var_r31, s32 *, 0x20) * 4));
    var_r4 = (u8 *)(M2C_FIELD(var_r4, u8 **, 0x24));
    update__9TWindowDDFPvi((int) (var_r3), (int) (var_r4), (int) (var_r5));
    var_r3 = (u8 *)(M2C_FIELD(var_r31, u8 **, 0xB4));
    M2C_FIELD(var_r31, u8 **, 0xB0) = var_r3;
    var_r3 = (u8 *)(M2C_FIELD(var_r31, u8 **, 0x8C));
    M2C_FIELD(var_r31, u8 **, 0x88) = var_r3;
    var_r3 = (u8 *)(M2C_FIELD(var_r31, u8 **, 0x90));
    M2C_FIELD(var_r31, u8 **, 0x8C) = var_r3;
    M2C_FIELD(var_r31, u8 **, 0x90) = (unsigned char *) ((void *)-1);
}

void TWindowDD__sub_80343808(u8 *arg0) {
    u32 temp_r0;
    temp_r0 = M2C_FIELD(arg0, u32 *, 0xB0);
    switch (temp_r0) {
    case 0:
        TWindowDD__sub_80342ED0((void *) (arg0));
        return;
    case 1:
    case 2:
        update__9TWindowDDFPv((void *) (arg0));
        return;
    case 3:
        TWindowDD__sub_80342D14((void *) (arg0));
        return;
    case 5:
        update_transition__9TWindowDDFPv((void *) (arg0));
        return;
    case 6:
        update_layout__9TWindowDDFPv((void *) (arg0));
        return;
    case 7:
        update_dispatch__9TWindowDDFi((void *) (arg0));
        return;
    case 8:
        enter_state_9__9TWindowDDFPv((void *) (arg0));
        return;
    case 9:
        TWindowDD__sub_803429B0((void *) (arg0));
        return;
    case 12:
        update__9TWindowDDFi((void *) (arg0));
        return;
    case 13:
        TWindowDD__sub_80342800((void *) (arg0));
        return;
    case 14:
        update_state__9TWindowDDFPv((void *) (arg0));
        return;
    case 15:
        enter_state_16__9TWindowDDFPv((void *) (arg0));
        return;
    case 17:
        enter_state_18__9TWindowDDFPv((void *) (arg0));
        return;
    case 18:
        enter_state_19__9TWindowDDFPv((void *) (arg0));
        return;
    case 20:
        handle_input__9TWindowDDFi((void *) (arg0));
        return;
    case 10:
    case 11:
    case 16:
    case 19:
        TWindowDD__sub_80342428((void *) (arg0));
    default:
        return;
    }
}

void *__dt__9TWindowDDFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__9TWindowDD;
        TWindowDD__sub_80348520(arg0);
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern u32 TWindowDD__data_805D6E0C;
extern u32 lbl_805D6E10;
extern u32 lbl_805D6E14;
extern u32 TWindowDD__data_805D6E18;
extern u32 TWindowDD__data_805D6E1C;
extern u32 lbl_805D6E20;
extern u32 lbl_805D6E50;
extern u32 lbl_805D6E54;
extern u32 lbl_805D6E58;
extern u32 lbl_805D6E5C;
extern u32 lbl_805D6E60;

void free_buffers__9TWindowDDFv(void) {
    fn_8034AF18();
    if ((u32) TWindowDD__data_805D6E1C != 0U) {
        free__11TOBoss4RockFUi((void*)TWindowDD__data_805D6E1C);
        TWindowDD__data_805D6E1C = 0U;
    }
    if ((u32) lbl_805D6E20 != 0U) {
        free__11TOBoss4RockFUi((void*)lbl_805D6E20);
        lbl_805D6E20 = 0U;
    }
    if ((u32) TWindowDD__data_805D6E18 != 0U) {
        free__11TOBoss4RockFUi((void*)TWindowDD__data_805D6E18);
        TWindowDD__data_805D6E18 = 0U;
    }
    if ((u32) lbl_805D6E14 != 0U) {
        free__11TOBoss4RockFUi((void*)lbl_805D6E14);
        lbl_805D6E14 = 0U;
    }
    if ((u32) lbl_805D6E10 != 0U) {
        free__11TOBoss4RockFUi((void*)lbl_805D6E10);
        lbl_805D6E10 = 0U;
    }
    if ((u32) TWindowDD__data_805D6E0C != 0U) {
        free__11TOBoss4RockFUi((void*)TWindowDD__data_805D6E0C);
        TWindowDD__data_805D6E0C = 0U;
    }
    if ((u32) lbl_805D6E60 != 0U) {
        TLobby__sub_800F957C((void*)lbl_805D6E60);
        lbl_805D6E60 = 0U;
    }
    if ((u32) lbl_805D6E5C != 0U) {
        TLobby__sub_800F957C((void*)lbl_805D6E5C);
        lbl_805D6E5C = 0U;
    }
    if ((u32) lbl_805D6E58 != 0U) {
        TLobby__sub_800F957C((void*)lbl_805D6E58);
        lbl_805D6E58 = 0U;
    }
    if ((u32) lbl_805D6E54 != 0U) {
        TLobby__sub_800F957C((void*)lbl_805D6E54);
        lbl_805D6E54 = 0U;
    }
    if ((u32) lbl_805D6E50 != 0U) {
        TLobby__sub_800F957C((void*)lbl_805D6E50);
        lbl_805D6E50 = 0U;
    }
}

}
