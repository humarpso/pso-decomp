#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80195BEC_lbl_80445E84 { M2C_UNK value; u8 remaining[0x28]; };
typedef char RecoveredGlobal_80195BEC_lbl_80445E84_size[sizeof(RecoveredGlobal_80195BEC_lbl_80445E84) == 0x2C ? 1 : -1];

struct RecoveredGlobal_80195BEC___vt__18TObjQuestColALock2 { M2C_UNK value; u8 remaining[0x40]; };
typedef char RecoveredGlobal_80195BEC___vt__18TObjQuestColALock2_size[sizeof(RecoveredGlobal_80195BEC___vt__18TObjQuestColALock2) == 0x44 ? 1 : -1];

struct VBase_18_26a62c { char pad[0x18]; };

struct VObj_18_26a62c : VBase_18_26a62c {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual s32 m8(f32, f32);
};

struct RecoveredGlobal_801959A0_lbl_804A7428 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_801959A0_lbl_804A7438 {
    M2C_UNK value;
    u8 remaining[0xC];
};

extern "C" {
u8 * __ct__12TQuestThreadFv(void *, s32, s32);
M2C_UNK destroy_board__17TQuestThreadBoardFv();
void *__nw__7TObjectFUl(int);
M2C_UNK set_parent__7TObjectFP7TObject(int, int);
extern s32 tl_00;
u8 *TObjQuestColALock2__vt14(u8 *arg0);
void set_indexed_flags(void *, s32, s32);
void reset_photon_effect__10TObjPlayerFPv(s32);
void refresh_collision_body_centers(void *);
u32 init_collision_body_parts(void *, s32, s32);
u8 * TObjQuestColBase__ct(void *, s32);
extern RecoveredGlobal_80195BEC_lbl_80445E84 lbl_80445E84;
extern M2C_UNK __vt__18TObjQuestColALock2[];
extern s32 lbl_805D3408;
extern s32 lbl_805D5EE8;
extern s32 lbl_805D5EEC;
u8 *TObjQuestColALock2__ct(u8 *arg0, s32 arg1, s32 _w2);
M2C_UNK fn_80141CBC(void *, void *, int, f32);
M2C_UNK TObjRoomId__sub_80141CF4(void *, void *, f32);
extern RecoveredGlobal_801959A0_lbl_804A7428 lbl_804A7428;
extern RecoveredGlobal_801959A0_lbl_804A7438 lbl_804A7438;
extern const f32 lbl_805DBEF8;
extern const f32 lbl_805DBEFC;
extern const f32 lbl_805DBF00;
void TObjQuestColALock2__vt12(u8 *arg0);
}

extern "C" {

void *TObjQuestColALock2__create(void *arg0);
s32 TObjQuestColALock2__vt13(void *arg0);
void *__dt__18TObjQuestColALock2Fv(void *arg0, s16 arg1);
M2C_UNK TObjEneGibbles__sub_80156720(void *);
M2C_UNK TObjPlayer__sub_80154A00(M2C_UNK *);
M2C_UNK enable_action_input__10TObjPlayerFPv(s32);
M2C_UNK disable_primary_action_input__10TObjPlayerFPv(s32);
M2C_UNK submit_cursor_candidate(void *, M2C_UNK);
s32 is_quest_interaction_blocked__10TObjPlayerFPv(s32);
s32 get_player_by_client_id(s32);
s32 TWindowShortListCtrl__check_controller_button(void *, M2C_UNK);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__16TObjQuestColBaseFv(void *, M2C_UNK);
void *__nw__7TObjectFUl(int);
s32 check_flag_100__10TObjPlayerFPv();
s32 update_trigger_state__12TObjQuestColFPvf(void *, f32);

extern void *lbl_805D5C50;

void *TObjQuestColALock2__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xC4);
    if (o != NULL) {
        o = TObjQuestColALock2__ct((u8 *)(o), (s32)(lbl_805D5C50), (s32)(arg0));
    }
    return o;
}

extern M2C_UNK lbl_8050E208[];
extern s32 lbl_805D53A0;

typedef char RecoveredGlobal_801959A0_lbl_804A7428_size[sizeof(RecoveredGlobal_801959A0_lbl_804A7428) == 0x10 ? 1 : -1];
typedef char RecoveredGlobal_801959A0_lbl_804A7438_size[sizeof(RecoveredGlobal_801959A0_lbl_804A7438) == 0x10 ? 1 : -1];
void TObjQuestColALock2__vt12(u8 *arg0) {
    u8 *temp_r5;
    if (((VObj_18_26a62c *)(arg0))->m8(lbl_805DBEF8, lbl_805DBEFC) != 0) {
        TObjRoomId__sub_80141CF4((void *) (arg0 + 0x38), (void *) (&lbl_804A7438.value), (f32) (lbl_805DBF00 * M2C_FIELD(arg0, f32 *, 0xAC)));
        temp_r5 = (u8 *)(M2C_FIELD(arg0, u8 **, 0xA4));
        fn_80141CBC((void *) (arg0 + 0x38), (void *) (&lbl_804A7428.value), (int) (temp_r5), (f32) (lbl_805DBF00 * M2C_FIELD(temp_r5, f32 *, 0xC)));
    }
}

u8 *TObjQuestColALock2__vt14(u8 *arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    u8 *var_r31;
    destroy_board__17TQuestThreadBoardFv();
    var_r31 = (u8 *)(NULL);
    if ((u32) M2C_FIELD(arg0, u32 *, 0xBC) != 0U) {
        temp_r3 = (u8 *)(((u8 *)__nw__7TObjectFUl((int)(0x194))));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(__ct__12TQuestThreadFv(temp_r3, (s32) M2C_FIELD(arg0, u32 *, 0xBC), M2C_FIELD(arg0, s32 *, 0xB0)));
        }
        var_r31 = (u8 *)(var_r0);
        if (var_r0 != NULL) {
            set_parent__7TObjectFP7TObject((int) (var_r0), (int) (tl_00));
        }
    }
    return var_r31;
}

s32 TObjQuestColALock2__vt13(void *arg0) {
    s32 temp_r3;
    s32 temp_r3_2;

    temp_r3 = get_player_by_client_id(lbl_805D53A0);
    if (temp_r3 != 0) {
        if (check_flag_100__10TObjPlayerFPv() != 0) {
            enable_action_input__10TObjPlayerFPv(temp_r3);
            return 0;
        }
        if (is_quest_interaction_blocked__10TObjPlayerFPv(temp_r3) != 0) {
            enable_action_input__10TObjPlayerFPv(temp_r3);
            return 0;
        }
        submit_cursor_candidate(arg0, -1);
        temp_r3_2 = update_trigger_state__12TObjQuestColFPvf(arg0, M2C_FIELD(arg0, f32 *, 0xAC));
        if (temp_r3_2 == 1) {
            disable_primary_action_input__10TObjPlayerFPv(temp_r3);
        }
        if (temp_r3_2 == 3) {
            enable_action_input__10TObjPlayerFPv(temp_r3);
        }
        if (temp_r3_2 == 0) {
            disable_primary_action_input__10TObjPlayerFPv(temp_r3);
            if (TWindowShortListCtrl__check_controller_button((void *)((s8 *)lbl_8050E208 + 0x20), 4) != 0) {
                return 1;
            }
        }
        goto block_12;
    }
block_12:
    return 0;
}

extern M2C_UNK __vt__18TObjQuestColALock2[];

void *__dt__18TObjQuestColALock2Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__18TObjQuestColALock2;
        TObjPlayer__sub_80154A00((M2C_UNK *)arg0);
        TObjEneGibbles__sub_80156720(arg0);
        __dt__16TObjQuestColBaseFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
u8 *TObjQuestColALock2__ct(u8 *arg0, s32 arg1, s32 _w2) {
    s32 temp_r0;
    u8 *temp_r4;
    TObjQuestColBase__ct(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_80195BEC___vt__18TObjQuestColALock2 *)&__vt__18TObjQuestColALock2).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3408;
    init_collision_body_parts(arg0, (s32) &lbl_80445E84.value, 1);
    set_indexed_flags(arg0, 0, 0xF0);
    temp_r4 = (u8 *)(M2C_FIELD(arg0, u8 **, 0xA4));
    M2C_FIELD(temp_r4, f32 *, 4) = (f32) (M2C_FIELD(temp_r4, f32 *, 4) + M2C_FIELD(arg0, f32 *, 0x6C));
    refresh_collision_body_centers(arg0);
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x40000000);
    reset_photon_effect__10TObjPlayerFPv((s32) arg0);
    M2C_FIELD(arg0, s32 *, 0xC0) = (s32) M2C_FIELD(arg0, s32 *, 0x88);
    if ((s32) M2C_FIELD(arg0, s32 *, 0xC0) < 0) {
        M2C_FIELD(arg0, s32 *, 0xC0) = 0;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0xC0) > 1) {
        M2C_FIELD(arg0, s32 *, 0xC0) = 1;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0xC0);
    switch (temp_r0) {
    case 0:
        M2C_FIELD(arg0, s32 *, 0xBC) = (s32) lbl_805D5EE8;
        break;
    case 1:
        M2C_FIELD(arg0, s32 *, 0xBC) = (s32) lbl_805D5EEC;
        break;
    default:
        M2C_FIELD(arg0, s32 *, 0xBC) = 0;
        break;
    }
    return arg0;
}

}
