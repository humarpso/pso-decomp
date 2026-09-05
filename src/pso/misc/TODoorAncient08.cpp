#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 TLobby__sub_80156A80(void *, void *, int);
M2C_UNK fn_8015FC40(void *, void *);
M2C_UNK TODoorAncient08__sub_8015FD70(void *);
u8 TODoorAncient08__sub_80229220(int);
void TODoorAncient08__vt12(u8 *arg0);
}

extern "C" {

struct TODoorBase_8015FCBC { char pad[0x14]; void **vtbl; };
struct TODoorVObj_8015FCBC : TODoorBase_8015FCBC {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual s32 m8(f32, f32);
};

s32 TODoorAncient08__vt17(void *arg0);
void TODoorAncient08__vt18(void);
void TODoorAncient08__vt4(void *arg0, s16 *arg1);
void *__dt__15TODoorAncient08Fv(void *arg0, s16 arg1);
void *create__15TODoorAncient08FPv(void *arg0);
void free_objects__15TODoorAncient08Fv(void);
void render__15TODoorAncient08Fv(u8 *arg0);
void TLobby__sub_8001FE7C(void*, int);
void *TODoorAncient08__ct(void *, void *, void *);
M2C_UNK TODoorAncient08__sub_80160000(void *);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjDoor__sub_803DC894(s32, s32, f32);
M2C_UNK TObjEneGibbles__sub_80156720(void *);
M2C_UNK TObjPlayer__sub_80154A00(M2C_UNK *);
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
M2C_UNK destroy_ancient_door_base__15TODoorAncient01FPvs(void *, M2C_UNK);
s32 fn_801582C4(void *, f32);
M2C_UNK free__11TOBoss4RockFUi(void*);
M2C_UNK free_if_valid__10TObjPlayerFi(s32);
s32 get_main_phase();
s32 is_split_screen();
M2C_UNK set_global_param__8TObjFishFi(s32);

void TODoorAncient08__vt4(void *arg0, s16 *arg1) {
    if ((s16) *arg1 == 1) {
        M2C_FIELD(arg0, s32 *, 0xD0) = (s32) (M2C_FIELD(arg0, s32 *, 0xD0) | 1);
    }
}

s32 TODoorAncient08__vt17(void *arg0) {
    s32 temp_r0;

    M2C_FIELD(arg0, s32 *, 0xC8) = (s32) M2C_FIELD(arg0, s32 *, 0x84);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0xC8);
    if (temp_r0 > 0x100) {
        M2C_FIELD(arg0, s32 *, 0xCC) = 0;
    } else if (temp_r0 < 0) {
        M2C_FIELD(arg0, s32 *, 0xCC) = 1;
    } else if (((s32) M2C_FIELD(arg0, s32 *, 0x8C) < 0) && ((get_main_phase() == 0xF) || (is_split_screen() == 1))) {
        M2C_FIELD(arg0, s32 *, 0xCC) = 3;
    } else {
        M2C_FIELD(arg0, s32 *, 0xCC) = 2;
    }
    return M2C_FIELD(arg0, s32 *, 0xC8);
}

extern const f32 lbl_805DB470;
extern const f32 lbl_805DB474;

#define VCALL_m8(obj) (((TODoorVObj_8015FCBC*)(obj))->m8(M2C_FIELD(obj, f32 *, 0xC0), M2C_FIELD(obj, f32 *, 0xC4)))

void TODoorAncient08__vt12(u8 *arg0) {
    s16 sp8;
    s32 temp_r0;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0xCC);
    switch (temp_r0) {
    case 1:
        TODoorAncient08__sub_8015FD70((void *) (arg0));
        M2C_FIELD(arg0, s32 *, 0xD0) = (s32) (M2C_FIELD(arg0, s32 *, 0xD0) | 1);
        return;
    case 2:
        if ((TODoorAncient08__sub_80229220((int) ((u16) M2C_FIELD(arg0, s32 *, 0xC8))) == 1) && (TODoorAncient08__sub_80229220((int) (M2C_FIELD(arg0, u16 *, 0xD4))) == 1) && (TODoorAncient08__sub_80229220((int) (M2C_FIELD(arg0, u16 *, 0xD6))) == 1) && (TODoorAncient08__sub_80229220((int) (M2C_FIELD(arg0, u16 *, 0xD8))) == 1)) {
            TODoorAncient08__sub_8015FD70((void *) (arg0));
            M2C_FIELD(arg0, s32 *, 0xD0) = (s32) (M2C_FIELD(arg0, s32 *, 0xD0) | 1);
            M2C_FIELD(arg0, s32 *, 0xDC) = 1;
            return;
        }
        M2C_FIELD(arg0, s32 *, 0xD0) = (s32) (M2C_FIELD(arg0, s32 *, 0xD0) & 0xFFFFFFFE);
        M2C_FIELD(arg0, s32 *, 0xDC) = 0;
        return;
    case 3:
        if ((TODoorAncient08__sub_80229220((int) ((u16) M2C_FIELD(arg0, s32 *, 0xC8))) == 1) && (TODoorAncient08__sub_80229220((int) (M2C_FIELD(arg0, u16 *, 0xD4))) == 1) && (TODoorAncient08__sub_80229220((int) (M2C_FIELD(arg0, u16 *, 0xD6))) == 1) && (TODoorAncient08__sub_80229220((int) (M2C_FIELD(arg0, u16 *, 0xD8))) == 1)) {
            TODoorAncient08__sub_8015FD70((void *) (arg0));
            M2C_FIELD(arg0, s32 *, 0xD0) = (s32) (M2C_FIELD(arg0, s32 *, 0xD0) | 1);
            if (((u32) M2C_FIELD(arg0, u32 *, 0x80) != 0U) && (TLobby__sub_80156A80((void *) (arg0), (void *) (&sp8), (int) (1)) != 0)) {
                sp8 = 1;
                fn_8015FC40((void *) (arg0), (void *) (&sp8));
                TLobby__sub_80156A80((void *) (arg0), (void *) (&sp8), (int) (0));
            }
        }
        return;
    default:
        M2C_FIELD(arg0, s32 *, 0xD0) = (s32) (M2C_FIELD(arg0, s32 *, 0xD0) & 0xFFFFFFFE);
        break;
    }
}

void render__15TODoorAncient08Fv(u8 *arg0) {
    s32 temp_r0;

    if ((VCALL_m8(arg0) != 0) && (fn_801582C4(arg0, lbl_805DB470) != 0)) {
        temp_r0 = M2C_FIELD(arg0, s32 *, 0xAC);
        switch (temp_r0) {
        case 1:
        case 3:
            TObjPlayer__sub_803D9B2C();
            TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
            TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
            set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0x24));
            TObjDoor__sub_803DC894(M2C_FIELD(arg0, s32 *, 0x34), M2C_FIELD(arg0, s32 *, 0xBC), M2C_FIELD(arg0, f32 *, 0xB0));
            TObjPlayer__sub_803D9B78();
            return;
        case 2:
            TObjPlayer__sub_803D9B2C();
            TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
            TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
            set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0x24));
            TObjDoor__sub_803DC894(M2C_FIELD(arg0, s32 *, 0x34), M2C_FIELD(arg0, s32 *, 0xBC), M2C_FIELD(arg0, f32 *, 0xB4) - lbl_805DB474);
            TObjPlayer__sub_803D9B78();
            return;
        case 0:
            TODoorAncient08__sub_80160000(arg0);
            break;
        }
    }
}

void TODoorAncient08__vt18(void) {  }

extern void *tl_05;

void *create__15TODoorAncient08FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xEC);
    if (o != NULL) {
        o = TODoorAncient08__ct(o, tl_05, arg0);
    }
    return o;
}

extern u32 lbl_805D5948;
extern void *TODoorAncient08__data_805D594C;

void free_objects__15TODoorAncient08Fv(void) {
    if ((void *) TODoorAncient08__data_805D594C != NULL) {
        free_if_valid__10TObjPlayerFi(M2C_FIELD(TODoorAncient08__data_805D594C, s32 *, 4));
        if ((void *) TODoorAncient08__data_805D594C != NULL) {
            free__11TOBoss4RockFUi((void*)TODoorAncient08__data_805D594C);
            TODoorAncient08__data_805D594C = NULL;
        }
    }
    if ((u32) lbl_805D5948 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D5948, 1);
        lbl_805D5948 = 0U;
    }
}

extern M2C_UNK __vt__15TODoorAncient08[];

void *__dt__15TODoorAncient08Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__15TODoorAncient08;
        TObjPlayer__sub_80154A00((M2C_UNK *)arg0);
        TObjEneGibbles__sub_80156720(arg0);
        destroy_ancient_door_base__15TODoorAncient01FPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
