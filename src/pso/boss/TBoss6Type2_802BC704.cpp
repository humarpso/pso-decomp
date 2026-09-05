#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct M2CCopy_C { u8 bytes[0xc]; };

extern "C" {
M2C_UNK TBoss3Volopt__sub_8022675C(int, void *, int, int);
s32 add_damage__11TBoss6Type2FPvi(void *, int);
extern const f32 TBoss6Type2__data_805DE40C;
void TBoss6Type2__vt60(u8 *arg0);
void TBoss6Type2__sub_802BE4E0(s32 *arg0, s32 *arg1);
}

extern "C" {

int TBoss6Type2__sub_802BCFD4(void);
void TBoss6Type2__sub_802BD2D0(s32 arg0, s32 arg1, s32 arg2);
void TBoss6Type2__sub_802BD340(void);
int TBoss6Type2__sub_802BD378(void);
int TBoss6Type2__sub_802BD3CC(void);
f32 TBoss6Type2__vt20(void *arg0, u32 arg1, f32 farg0);
void TBoss6Type2__vt42(void);
void TBoss6Type2__vt43(void);
void TBoss6Type2__vt44(void);
void TBoss6Type2__vt45(void);
void TBoss6Type2__vt46(void);
void TBoss6Type2__vt47(void);
void TBoss6Type2__vt48(void);
void TBoss6Type2__vt61(void* p);
void apply_damage__11TBoss6Type2FPvi(void *arg0, s32 arg1);
void copy_pos_59c__11TBoss6Type2Fii(s32 arg0, s32 arg1);
void copy_pos_620__11TBoss6Type2Fii(s32 arg0, s32 arg1);
void copy_transform__11TBoss6Type2FPvPv(void* p, void* q);
s32 create__11TBoss6Type2Fi(s32 arg0);
s32 get_rotation_timer__11TBoss6Type2FPv(void* p);
int get_table_entry__11TBoss6Type2Fi(int a0);
void parse_action_packet__11TBoss6Type2FPvPv(void *arg0, void *arg1);
void set_screen_pos__11TBoss6Type2FPv(void *arg0);
void set_target_state__11TBoss6Type2FPvii(void *arg0, s32 arg1, s32 arg2);
void update_action_state__11TBoss6Type2FPv(void *arg0);
void update_attack_target__11TBoss6Type2FPv(void *arg0);
s32 TBoss6Type2__ct(s32, s32, s32);
M2C_UNK TBoss6Type2__sub_802B9B20(void *);
M2C_UNK TBoss6Type2__sub_802BA078(void *);
s32 TBoss6Type2__sub_802BA944(void *);
s32 TBoss6Type2__sub_802BA9E4(void *);
s32 TBoss6Type2__sub_802BAA74();
u16 TBoss6Type2__sub_802BB694(void *);
s32 TBoss6Type2__sub_802BC23C();
M2C_UNK TBoss6Type2__sub_802BC62C(void *);
int TBoss6Type2__sub_802BD014(void*, void*);
M2C_UNK TBoss6Type2__sub_802BD938(void *, M2C_UNK *);
M2C_UNK TBoss6Type2__sub_802BDD6C(void *, s32, M2C_UNK *);
s32 TBoss6Type2__sub_802BDDF8(void * a0 = 0, s32 a1 = 0);
s32 TObjControl__ct(s32, s32);
f32 TObjPlayer__sub_80014108(void *, u32, f32);
u8 *TObjPlayer__sub_80015DC4(u32, s32);
M2C_UNK TPlayerBattleCtrl4P__sub_801BA74C(u16);
s32 VecCopy__FP3VecPC3Vec(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0);
s32 __nw__7TObjectFUl(M2C_UNK);
s32 get_phase__11TBoss6Type2FPv();
s32 get_phase__14TBoss6PlotFalzFv();
s32 is_active__14TBoss6PlotFalzFPv();
u16 is_falz_ready__11TBoss6Type2FPv(void *);
s32 is_phase_complete__11TBoss6Type2FPv(void *);
M2C_UNK set_action_field_0x408__11TBoss6Type2FPvs(s32, u16);
M2C_UNK set_target_nodes__11TBoss6Type2FPvPvPv(void *, u32, s32);
M2C_UNK update_segments__11TBoss6Type2FPv(void *);
s32 update_zako__11TBoss6Type2FPv(void *);

extern M2C_UNK TBoss6Type2__data_804DF9D4[];
extern f32 lbl_805DE4B4;

void set_screen_pos__11TBoss6Type2FPv(void *arg0) {
    f32 var_f0;
    f32 var_f1;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x424) != 0) {
        var_f1 = lbl_805DE4B4 * M2C_FIELD(arg0, f32 *, 0x4E0);
        var_f0 = lbl_805DE4B4 * M2C_FIELD(arg0, f32 *, 0x4E4);
    } else {
        var_f1 = lbl_805DE4B4 * M2C_FIELD(arg0, f32 *, 0x4D8);
        var_f0 = lbl_805DE4B4 * M2C_FIELD(arg0, f32 *, 0x4DC);
    }
    M2C_FIELD(TBoss6Type2__data_804DF9D4, f32 *, 0x2C) = var_f1;
    M2C_FIELD(TBoss6Type2__data_804DF9D4, f32 *, 0x3C) = var_f1;
    M2C_FIELD(TBoss6Type2__data_804DF9D4, f32 *, 0xEC) = var_f0;
}

void copy_transform__11TBoss6Type2FPvPv(void* p, void* q) { *(u32*)((char*)p + 0x0) = *(u32*)((char*)q + 0x0); *(f32*)((char*)p + 0x4) = *(f32*)((char*)q + 0x4); *(f32*)((char*)p + 0x8) = *(f32*)((char*)q + 0x8); *(f32*)((char*)p + 0xc) = *(f32*)((char*)q + 0xc); *(f32*)((char*)p + 0x10) = *(f32*)((char*)q + 0x10); *(u32*)((char*)p + 0x14) = *(u32*)((char*)q + 0x14); *(f32*)((char*)p + 0x18) = *(f32*)((char*)q + 0x18); }

int TBoss6Type2__sub_802BCFD4(void) { return 0; }

void copy_pos_620__11TBoss6Type2Fii(s32 arg0, s32 arg1) {
    VecCopy__FP3VecPC3Vec(arg1, arg0 + 0x620, arg0);
}

void TBoss6Type2__sub_802BD2D0(s32 arg0, s32 arg1, s32 arg2) {
    VecCopy__FP3VecPC3Vec(arg1, arg0 + 0x5FC);
    VecCopy__FP3VecPC3Vec(arg2, arg0 + 0x5C0);
}

void copy_pos_59c__11TBoss6Type2Fii(s32 arg0, s32 arg1) {
    VecCopy__FP3VecPC3Vec(arg1, arg0 + 0x59C, arg0);
}
void TBoss6Type2__sub_802BD340(void) {  }
void apply_damage__11TBoss6Type2FPvi(void *arg0, s32 arg1) {
    if ((arg1 > 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x418) == 0)) {
        add_damage__11TBoss6Type2FPvi(arg0, arg1);
    }
}

int TBoss6Type2__sub_802BD378(void) { return 0; }

s32 get_rotation_timer__11TBoss6Type2FPv(void* p) { return *(s32*)((char*)p + 0x418); }

int TBoss6Type2__sub_802BD3CC(void) { return 0; }

extern const f32 TBoss6Type2__data_805DE410;

f32 TBoss6Type2__vt20(void *arg0, u32 arg1, f32 farg0) {
    s32 var_r31;
    s32 var_r30;
    s32 var_r29;
    u8 temp_r0;

    var_r31 = 1;
    if (((s32) M2C_FIELD(arg0, s32 *, 0x418) != 0) && (arg1 != 0U)) {
        var_r30 = 0;
        var_r29 = 0;
        do {
            temp_r0 = *TObjPlayer__sub_80015DC4(arg1, var_r29);
            switch ((s32) temp_r0) {
            case 1:
                var_r30 |= 1;
                break;
            case 2:
                var_r30 |= 2;
                break;
            case 3:
                var_r30 |= 4;
                break;
            case 4:
                var_r30 |= 8;
                break;
            }
            var_r29 += 1;
        } while (var_r29 < 3);
        if (!(M2C_FIELD(arg0, s32 *, 0x2E4) & var_r30)) {
            var_r31 = 0;
        }
    }
    if (var_r31 != 0) {
        return TObjPlayer__sub_80014108(arg0, arg1, farg0);
    }
    TBoss6Type2__sub_802BA078(arg0);
    TBoss6Type2__sub_802B9B20(arg0);
    return TBoss6Type2__data_805DE410;
}

void TBoss6Type2__vt61(void* p) { if (*(int*)((char*)p + 0x374) != 35) { TBoss6Type2__sub_802BD014((void*)(p), (void*)((void*)35)); } }

void TBoss6Type2__vt60(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFFFDFF);
    M2C_FIELD(arg0, f32 *, 0x4FC) = (f32) TBoss6Type2__data_805DE40C;
    {
        int diff = M2C_FIELD(arg0, s32 *, 0x4F8) - M2C_FIELD(arg0, s16 *, 0x32C);
        if (diff > 0) {
            add_damage__11TBoss6Type2FPvi((void *)(arg0), (int)(diff));
        }
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x418) != 0) {
        TBoss3Volopt__sub_8022675C(0x68A24, arg0 + 0x38, 0, 1);
    }
}

void set_target_state__11TBoss6Type2FPvii(void *arg0, s32 arg1, s32 arg2) {
    u32 temp_r31;
    s32 temp_r30;

    temp_r31 = M2C_FIELD(arg0, u32 *, 0x2E4);
    temp_r30 = M2C_FIELD(arg0, s32 *, 0x42C);
    M2C_FIELD(arg0, u32 *, 0x2E4) = get_table_entry__11TBoss6Type2Fi((int)(arg1));
    M2C_FIELD(arg0, s32 *, 0x42C) = arg2;
    update_segments__11TBoss6Type2FPv(arg0);
    if ((temp_r31 != (u32) M2C_FIELD(arg0, u32 *, 0x2E4)) || (temp_r30 != (s32) M2C_FIELD(arg0, s32 *, 0x42C))) {
        TBoss6Type2__sub_802BC62C(arg0);
    }
    if (M2C_FIELD(arg0, void **, 0x410) != 0) {
        set_target_nodes__11TBoss6Type2FPvPvPv(M2C_FIELD(arg0, void **, 0x410), M2C_FIELD(arg0, u32 *, 0x2E4), M2C_FIELD(arg0, s32 *, 0x42C));
    }
    if (M2C_FIELD(arg0, void **, 0x414) != 0) {
        set_target_nodes__11TBoss6Type2FPvPvPv(M2C_FIELD(arg0, void **, 0x414), M2C_FIELD(arg0, u32 *, 0x2E4), M2C_FIELD(arg0, s32 *, 0x42C));
    }
}

    extern int lbl_804710BC[];
int get_table_entry__11TBoss6Type2Fi(int a0) {  return lbl_804710BC[a0]; }

void update_attack_target__11TBoss6Type2FPv(void *arg0) {
    M2C_UNK sp8;
    s32 temp_r0;
    s32 var_r31;
    s32 var_r3;
    u16 temp_r31;
    u16 temp_r3;
    u16 var_r30;

    var_r3 = 0x21;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x424) != 0) {
        var_r3 = 0x1F;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x374);
    var_r31 = var_r3;
    switch (temp_r0) {
    case 0x1D:
        return;
    case 0x1E:
    case 0x1F:
    case 0x20:
    case 0x21:
        temp_r31 = M2C_FIELD(arg0, u16 *, 0x466);
        temp_r3 = TBoss6Type2__sub_802BB694(arg0);
        var_r30 = temp_r3;
        if ((u16) temp_r3 == 0xFFFF) {
            TPlayerBattleCtrl4P__sub_801BA74C(temp_r31);
            if (is_active__14TBoss6PlotFalzFPv() != 0) {
                var_r30 = temp_r31;
            }
        }
        M2C_FIELD(arg0, u16 *, 0x466) = var_r30;
        if ((get_phase__14TBoss6PlotFalzFv() == 0) && (M2C_FIELD(arg0, s32 *, 0x374) & 1)) {
            M2C_FIELD(arg0, u16 *, 0x466) = 0xFFFFU;
        }
        var_r31 = M2C_FIELD(arg0, s32 *, 0x374) - 1;
        break;
    }
    TBoss6Type2__sub_802BD938(arg0, &sp8);
    TBoss6Type2__sub_802BDD6C((void *)(arg0), (s32)(var_r31), (M2C_UNK *)(&sp8));
}

void update_action_state__11TBoss6Type2FPv(void *arg0) {
    M2C_UNK sp8;
    M2C_UNK var_r4;

    TBoss6Type2__sub_802BD938(arg0, &sp8);
    var_r4 = 4;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x46C) == 0) {
        var_r4 = 5;
    }
    TBoss6Type2__sub_802BDD6C((void *)(arg0), (s32)(var_r4), (M2C_UNK *)(&sp8));
}

void parse_action_packet__11TBoss6Type2FPvPv(void *arg0, void *arg1) {
    M2C_FIELD(arg0, u8 *, 0x478) = (u8) M2C_FIELD(arg1, u8 *, 8);
    M2C_FIELD(arg0, s32 *, 0x47C) = (s32) (s8) M2C_FIELD(arg1, u8 *, 9);
    set_target_state__11TBoss6Type2FPvii((void *)(arg0), (s32)(M2C_FIELD(arg1, s8 *, 0xA)), (s32)(M2C_FIELD(arg1, s8 *, 0xB)));
    M2C_FIELD(arg0, u16 *, 0x464) = (u16) (s8) M2C_FIELD(arg1, u8 *, 0xC);
    M2C_FIELD(arg0, u16 *, 0x466) = (u16) (s8) M2C_FIELD(arg1, u8 *, 0xD);
    M2C_FIELD(arg0, u16 *, 0x468) = (u16) (s8) M2C_FIELD(arg1, u8 *, 0xE);
    M2C_FIELD(arg0, u16 *, 0x46A) = (u16) (s8) M2C_FIELD(arg1, u8 *, 0xF);
    if ((u16) M2C_FIELD(arg0, u16 *, 0x464) >= 4U) {
        M2C_FIELD(arg0, u16 *, 0x464) = 0xFFFFU;
    }
    if ((u16) M2C_FIELD(arg0, u16 *, 0x466) >= 4U) {
        M2C_FIELD(arg0, u16 *, 0x466) = 0xFFFFU;
    }
    if ((u16) M2C_FIELD(arg0, u16 *, 0x468) >= 4U) {
        M2C_FIELD(arg0, u16 *, 0x468) = 0xFFFFU;
    }
    if ((u16) M2C_FIELD(arg0, u16 *, 0x46A) >= 4U) {
        M2C_FIELD(arg0, u16 *, 0x46A) = 0xFFFFU;
    }
    set_action_field_0x408__11TBoss6Type2FPvs(M2C_FIELD(arg0, s32 *, 0x410), M2C_FIELD(arg0, u16 *, 0x468));
    set_action_field_0x408__11TBoss6Type2FPvs(M2C_FIELD(arg0, s32 *, 0x414), M2C_FIELD(arg0, u16 *, 0x46A));
}

extern s32 tl_04;

void TBoss6Type2__sub_802BE4E0(s32 *arg0, s32 *arg1) {
    *arg0 = *arg1;
    *(M2CCopy_C *)((s32) arg0 + 4) = *(const M2CCopy_C *)((s32) arg1 + 4);
}

s32 create__11TBoss6Type2Fi(s32 arg0) {
    s32 var_r31;
    s32 var_r4;

    var_r31 = __nw__7TObjectFUl(0x7B4);
    if (var_r31 != 0) {
        var_r4 = __nw__7TObjectFUl(0x20);
        if (var_r4 != 0) {
            var_r4 = TObjControl__ct(var_r4, tl_04);
        }
        var_r31 = TBoss6Type2__ct(var_r31, var_r4, arg0);
    }
    return var_r31;
}

void TBoss6Type2__vt42(void) {  }
void TBoss6Type2__vt43(void) {  }
void TBoss6Type2__vt44(void) {  }
void TBoss6Type2__vt45(void) {  }
void TBoss6Type2__vt46(void) {  }
void TBoss6Type2__vt47(void) {  }
void TBoss6Type2__vt48(void) {  }

}
