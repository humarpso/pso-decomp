#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#include <dolphin/mtx.h>
#include <stddef.h>

struct Stack_800DDFDC
{
  M2C_UNK sp8;
  f32 spC;
};

struct Stack_800DD9A0 {
    f32 sp8;
    f32 spC;
    f32 sp10;
    M2C_UNK sp14;
    f32 sp18;
};

struct RecoveredGlobal_800DD9A0_lbl_80494F4C {
    M2C_UNK value;
    u8 remaining[0x20C];
};

struct Vec_800DECC4 { f32 x; f32 y; f32 z; };

struct Obj_800DECC4 { u8 pad[0x38]; Vec_800DECC4 pos; u8 pad2[0x248 - 0x44]; u8 f248[0x384 - 0x248]; f32 f384; };

struct Obj_800DF1B8 { u8 pad[0x394]; u32 handles[2]; };

extern "C" {
void obj_clearFlags30(void *, u32);
void TObjEnePanarms__sub_800DD738(u8 *arg0);
void obj_clearFlags30(void *, u32);
void TObjEnePanarms__sub_800DD954(u8 *arg0);
void obj_clearFlags30(void *, u32);
void TObjEnePanarms__sub_800DCF14(u8 *arg0);
void obj_clearFlags30(void *, u32);
M2C_UNK obj_setFlags30(void *, int);
int TObjEnePanarms__sub_800E1D94(void *);
void TObjEnePanarms__sub_800DD124(u8 *arg0);
M2C_UNK TObjEneDellBiter__sub_80087350(void *, int);
int TObjEnePanarms__sub_800DED30(void*, void*);
extern const f32 TObjEnePanarms__data_805DA490;
extern const f32 lbl_805DA494;
void TObjEnePanarms__sub_800DCF74(u8 *arg0);
M2C_UNK TObjEneDellBiter__sub_80087350(void *, int);
int TObjEnePanarms__sub_800DED30(void*, void*);
extern const f32 TObjEnePanarms__data_805DA490;
extern const f32 lbl_805DA494;
void TObjEnePanarms__sub_800DD41C(u8 *arg0);
void request_destroy__11TBoss4Type2FUi(u32);
int TObjEnePanarms__sub_800DED30(void*, void*);
extern const f32 TObjEnePanarms__data_805DA49C;
void TObjEnePanarms__sub_800DD530(u8 *arg0);
void request_destroy__11TBoss4Type2FUi(u32);
int TObjEnePanarms__sub_800DED30(void*, void*);
extern const f32 TObjEnePanarms__data_805DA49C;
void TObjEnePanarms__sub_800DD784(u8 *arg0);
void obj_clearFlags30(void *, u32);
M2C_UNK obj_setFlags30(void *, int);
extern const f32 TObjEnePanarms__data_805DA4A0;
extern const f32 lbl_805DA4DC;
void TObjEnePanarms__sub_800DE0B8(u8 *arg0);
void obj_clearFlags30(void *, u32);
u8 * create__22TObjEnePanarmsAtkColliFPvPvPvPv(void *, void *, void *, void *);
s32 fn_800871A0(void *, void *, int, int);
f32 TBoss8Dragon__sub_803D64C0(int);
f32 TBoss8Dragon__sub_803D64DC(int);
extern const f32 TObjEnePanarms__data_805DA4A0;
void TObjEnePanarms__sub_800DD7F4(u8 *arg0);
void obj_clearFlags30(void *, u32);
u8 * create__22TObjEnePanarmsAtkColliFPvPvPvPv(void *, void *, void *, void *);
M2C_UNK fn_80086D50(void *, void *, int);
s32 fn_800871A0(void *, void *, int, int);
f32 TBoss8Dragon__sub_803D64C0(int);
f32 TBoss8Dragon__sub_803D64DC(int);
extern const f32 TObjEnePanarms__data_805DA4A0;
void TObjEnePanarms__sub_800DD5C8(u8 *arg0);
void obj_clearFlags30(void *, u32);
M2C_UNK obj_setFlags30(void *, int);
s32 init__14TObjEnePanarmsFPvPv(void *, int);
M2C_UNK copy_target_state__14TObjEnePanarmsFPvPv(void *, M2C_UNK);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, void *, M2C_UNK, M2C_UNK);
void TObjEnePanarms__sub_800DCFE0(u8 *arg0);
void obj_clearFlags30(void *, u32);
M2C_UNK obj_setFlags30(void *, int);
void set_field_b8__14TObjEnePanarmsFPvs(void *, int);
M2C_UNK copy_target_state__14TObjEnePanarmsFPvPv(void *, M2C_UNK);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, void *, M2C_UNK, M2C_UNK);
void TObjEnePanarms__sub_800DD488(u8 *arg0);
void obj_clearFlags30(void *, u32);
M2C_UNK obj_setFlags30(void *, int);
s32 TObjEnePanarms__sub_800DFB44(s32);
s32 TObjEnePanarms__sub_800E1E14(int);
M2C_UNK copy_target_state__14TObjEnePanarmsFPvPv(void *, M2C_UNK);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, void *, M2C_UNK, M2C_UNK);
void TObjEnePanarms__sub_800DD368(u8 *arg0);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
s32 fn_80086B64(void *, void *, int, void *, void *);
extern const f32 TObjEnePanarms__data_805DA4A4;
void TObjEnePanarms__sub_800DE430(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK TObjEneDellBiter__sub_80087350(void *, int);
int TObjEnePanarms__sub_800DED30(void*, void*);
f32 TBoss4Zako__sub_803D8910(void *, void *);
extern const f32 TObjEnePanarms__data_805DA49C;
extern const f32 TObjEnePanarms__data_805DA4A0;
extern const f32 lbl_805DA4D8;
void TObjEnePanarms__sub_800DDFDC(u8 *arg0);
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK TObjEnePanarms__sub_800DE7EC(void *);
int TObjEnePanarms__sub_800DED30(void*, void*);
s32 TObjEnePanarms__sub_800DFB44(s32);
s32 get_state_flag__14TObjEnePanarmsFPv(void *);
s32 TObjEnePanarms__sub_800DFB74(void *);
s32 TObjEnePanarms__sub_800DFB9C(void *);
s32 TObjEnePanarms__sub_800DFBB0(void *);
M2C_UNK do_action_2__14TObjEnePanarmsFPv(void *);
M2C_UNK init_state__14TObjEnePanarmsFi(void *);
M2C_UNK send_entity_set_flags__6TLobbyFPv(void *);
extern const f32 lbl_805DA498;
void TObjEnePanarms__sub_800DD1B8(u8 *arg0);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK TObjEneDellBiter__sub_80087350(void *, int);
s32 spawn_ground_effect__10TObjPlayerFPvi(void *, int);
s32 spawn_dead_spot_default__10TObjPlayerFii(void *, int);
extern RecoveredGlobal_800DD9A0_lbl_80494F4C lbl_80494F4C;
extern f32 lbl_805D527C;
extern u8 lbl_805D5280;
extern const f32 TObjEnePanarms__data_805DA49C;
extern const f32 lbl_805DA4A8;
extern const f32 lbl_805DA4AC;
extern const f32 lbl_805DA4B0;
void TObjEnePanarms__sub_800DD9A0(u8 *arg0);
s32 TObjPlayer__sub_80156844(void *, void *, int);
extern const f32 TObjEnePanarms__data_805DA4A4;
void TObjEnePanarms__sub_800DECC4(Obj_800DECC4 *self);
void request_destroy__11TBoss4Type2FUi(u32);
void TObjEnePanarms__sub_800DF1B8(Obj_800DF1B8 *self);
}

extern "C" {

void TObjEnePanarms__sub_800DE2B0(void* p);
void TObjEnePanarms__sub_800DE2C0(void* p);
int TObjEnePanarms__sub_800DE2D0(void);
int TObjEnePanarms__sub_800DE390(void);
void TObjEnePanarms__sub_800DEEF8(void* p);
void free_data__14TObjEnePanarmsFv(void);
void init_state__14TObjEnePanarmsFPv(u8 *arg0);
void set_state__14TObjEnePanarmsFPv(void* p);
void try_activate__14TObjEnePanarmsFPv(void* p);
void update_spin__14TObjEnePanarmsFPv(void *arg0);
void update_timed_action__14TObjEnePanarmsFPv(u8 *arg0);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, void *, M2C_UNK, M2C_UNK);
void TLobby__sub_8001FE7C(void*, int);
int TOHangerMachine01__sub_803D9C00(void*);
int TObjEnePanarms__sub_800DED30(void*, void*);
s32 TObjEnePanarms__sub_800DFB44(s32);
int TObjFish__sub_800E3074(void*);
int TObjPlayer__sub_803D9214(void*, void*);
int TObjPlayer__sub_803D9B2C(void*);
int TObjPlayer__sub_803D9B78(void);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
int check_demo_mode__10TObjPlayerFv(void*);
int clear_render_callback__8TObjFishFv(void*);
M2C_UNK copy_target_state__14TObjEnePanarmsFPvPv(void *, M2C_UNK);
int draw__16TObjEneRe7BeruraFPv(void*);
int set_global_param__8TObjFishFi(void*);

void update_spin__14TObjEnePanarmsFPv(void *arg0) {
    s32 temp_r0;

    if (M2C_FIELD(arg0, s32 *, 0x3EC) & 2) {
        M2C_FIELD(arg0, s32 *, 0x60) = (s32) (M2C_FIELD(arg0, s32 *, 0x60) + 0x111);
    } else {
        M2C_FIELD(arg0, s32 *, 0x60) = (s32) (M2C_FIELD(arg0, s32 *, 0x60) - 0x111);
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x388) - 1;
    M2C_FIELD(arg0, s32 *, 0x388) = temp_r0;
    if (temp_r0 < 0) {
        TObjEnePanarms__sub_800DED30((void*)(arg0), (void*)(7));
    }
}

void TObjEnePanarms__sub_800DCF14(u8 *arg0) {
    u8 *temp_r5;
    temp_r5 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x390));
    M2C_FIELD(temp_r5, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r5, s32 *, 0x18) | 1);
    obj_clearFlags30(arg0, 0x04040000U);
    M2C_FIELD(arg0, s32 *, 0x388) = 0x1E;
    M2C_FIELD(arg0, s32 *, 0x3F0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3F0) + 1);
    set_field_b8__14TObjEnePanarmsFPvs(arg0, 0xB);
}

void TObjEnePanarms__sub_800DCF74(u8 *arg0) {
    f32 temp_f1;
    temp_f1 = M2C_FIELD(arg0, f32 *, 0xC0);
    if ((temp_f1 >= TObjEnePanarms__data_805DA490) && (temp_f1 < lbl_805DA494)) {
        TObjEneDellBiter__sub_80087350((void *) (arg0 + 0x38), (int) (0xF0));
    }
    if (M2C_FIELD(arg0, s32 *, 0xB0) & 0x10) {
        TObjEnePanarms__sub_800DED30((void*)((void *) (arg0)), (void*)((int) (3)));
    }
}

void TObjEnePanarms__sub_800DCFE0(u8 *arg0) {
    u8 *temp_r5;
    M2C_FIELD(arg0, s32 *, 0x3DC) = 1;
    temp_r5 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x390));
    M2C_FIELD(temp_r5, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r5, s32 *, 0x18) & 0xFFFFFFFE);
    obj_clearFlags30((void *)((void *) (arg0)), (u32)((int) (0x40000)));
    obj_setFlags30((void *) (arg0), (int) (0x04000000));
    TBoss3Volopt__sub_8022675C((M2C_UNK)((void *) (((s32)copy_target_state__14TObjEnePanarmsFPvPv((void *)((void *) (arg0)), (M2C_UNK)((int) (0x4003BC31)))))), (void *)((void *) (arg0 + 0x3AC)), (M2C_UNK)((int) (0)), (M2C_UNK)((int) (0)));
    TBoss3Volopt__sub_8022675C((M2C_UNK)((void *) (((s32)copy_target_state__14TObjEnePanarmsFPvPv((void *)((void *) (arg0)), (M2C_UNK)((int) (0x4003BC30)))))), (void *)((void *) (arg0 + 0x3C4)), (M2C_UNK)((int) (0)), (M2C_UNK)((int) (0)));
    init__14TObjEnePanarmsFPvPv((void *) (arg0), (int) (0xA));
}

void update_timed_action__14TObjEnePanarmsFPv(u8 *arg0) {
    s32 temp_r0;

    if ((TObjEnePanarms__sub_800DFB44(M2C_FIELD(arg0, s32 *, 0x3E4)) != 0) || (TObjEnePanarms__sub_800DFB44(M2C_FIELD(arg0, s32 *, 0x3E8)) != 0)) {
        TObjEnePanarms__sub_800DED30((void*)(arg0), (void*)(0xA));
        return;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x388) - 1;
    M2C_FIELD(arg0, s32 *, 0x388) = temp_r0;
    if (temp_r0 <= 0) {
        TObjEnePanarms__sub_800DED30((void*)(arg0), (void*)(0xC));
        return;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x388) == 0x13) {
        TBoss3Volopt__sub_8022675C(copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x4003BC32), arg0 + 0x38, 0, 0);
    }
}

extern const f32 lbl_805DA4E0;

void TObjEnePanarms__sub_800DD124(u8 *arg0) {
    u8 *temp_r5;
    M2C_FIELD(arg0, s32 *, 0x3DC) = 0;
    temp_r5 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x390));
    M2C_FIELD(temp_r5, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r5, s32 *, 0x18) & 0xFFFFFFFE);
    obj_clearFlags30(arg0, 0x40000U);
    obj_setFlags30((void *)(arg0), (int)(0x04000000U));
    TObjEnePanarms__sub_800DE430((s32)((void *) (arg0)), (s32)((int) (0x2D)), (s32)((int) (0x25)));
    M2C_FIELD(arg0, s16 *, 0x32C) = (s16) (M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x3E4), s16 *, 0x32C) + M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x3E8), s16 *, 0x32C));
    TObjEnePanarms__sub_800E1D94(M2C_FIELD(arg0, u8 **, 0x3E4));
    TObjEnePanarms__sub_800E1D94(M2C_FIELD(arg0, u8 **, 0x3E8));
    M2C_FIELD(arg0, s32 *, 0x388) = 0x40;
}

void TObjEnePanarms__sub_800DD1B8(u8 *arg0) {
    s16 temp_r4;
    s32 temp_r0;
    temp_r4 = M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x3E4), s16 *, 0x32C);
    M2C_FIELD(arg0, s16 *, 0x32C) = (s16) (temp_r4 + M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x3E8), s16 *, 0x32C));
    if ((TObjEnePanarms__sub_800DFBB0((void *) (M2C_FIELD(arg0, u8 **, 0x3E4))) != 0) && (TObjEnePanarms__sub_800DFBB0((void *) (M2C_FIELD(arg0, u8 **, 0x3E8))) != 0)) {
        send_entity_set_flags__6TLobbyFPv((void *) (arg0));
        queue_destruction__7TObjectFv((void *) (arg0));
        return;
    }
    if (TObjEnePanarms__sub_800DFB44((s32)((void *) (M2C_FIELD(arg0, u8 **, 0x3E4)))) == 0) {
        switch (TObjEnePanarms__sub_800DFB44((s32)((void *) (M2C_FIELD(arg0, u8 **, 0x3E8))))) {
        case 0:
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) - 1);
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x388);
        if (temp_r0 == 0) {
            if ((TObjEnePanarms__sub_800DFB9C((void *) (M2C_FIELD(arg0, u8 **, 0x3E4))) != 0) || (TObjEnePanarms__sub_800DFB9C((void *) (M2C_FIELD(arg0, u8 **, 0x3E8))) != 0)) {
                M2C_FIELD(arg0, s32 *, 0x388) = (s32) ((f32) M2C_FIELD(arg0, s32 *, 0x388) + lbl_805DA498);
                return;
            }
            TObjEnePanarms__sub_800DE7EC((void *) (arg0));
            init_state__14TObjEnePanarmsFi((void *) (M2C_FIELD(arg0, u8 **, 0x3E4)));
            init_state__14TObjEnePanarmsFi((void *) (M2C_FIELD(arg0, u8 **, 0x3E8)));
            return;
        }
        if (temp_r0 < 0) {
            if ((TObjEnePanarms__sub_800DFB74((void *) (M2C_FIELD(arg0, u8 **, 0x3E4))) != 0) && (TObjEnePanarms__sub_800DFB74((void *) (M2C_FIELD(arg0, u8 **, 0x3E8))) != 0)) {
                if ((get_state_flag__14TObjEnePanarmsFPv((void *) (M2C_FIELD(arg0, u8 **, 0x3E4))) != 0) || (get_state_flag__14TObjEnePanarmsFPv((void *) (M2C_FIELD(arg0, u8 **, 0x3E8))) != 0)) {
                    M2C_FIELD(arg0, s32 *, 0x388) = -1;
                    return;
                }
                TObjEnePanarms__sub_800DED30((void*)((void *) (arg0)), (void*)((int) (0xB)));
                return;
            }
            if ((s32) M2C_FIELD(arg0, s32 *, 0x388) < -0x12C) {
                do_action_2__14TObjEnePanarmsFPv((void *) (M2C_FIELD(arg0, u8 **, 0x3E4)));
                do_action_2__14TObjEnePanarmsFPv((void *) (M2C_FIELD(arg0, u8 **, 0x3E8)));
                M2C_FIELD(arg0, s32 *, 0x388) = 0x384;
            }
        }
        break;
        }
    }
}

void TObjEnePanarms__sub_800DD368(u8 *arg0) {
    u8 *temp_r5;
    temp_r5 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x390));
    M2C_FIELD(temp_r5, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r5, s32 *, 0x18) & 0xFFFFFFFE);
    obj_clearFlags30((void *)((void *) (arg0)), (u32)((int) (0x40000)));
    obj_setFlags30((void *) (arg0), (int) (0x04000000));
    M2C_FIELD(arg0, s32 *, 0x3DC) = 0;
    M2C_FIELD(arg0, s32 *, 0x388) = 0x384;
    M2C_FIELD(arg0, s32 *, 0x3F8) = 1;
    TBoss3Volopt__sub_8022675C((M2C_UNK)((void *) (((s32)copy_target_state__14TObjEnePanarmsFPvPv((void *)((void *) (arg0)), (M2C_UNK)((int) (0x4003BC2E)))))), (void *)((void *) (arg0 + 0x38)), (M2C_UNK)((int) (0)), (M2C_UNK)((int) (0)));
    if (TObjEnePanarms__sub_800DFB44((s32)((int) (M2C_FIELD(arg0, s32 *, 0x3E4)))) == 0) {
        TObjEnePanarms__sub_800E1E14((int) (M2C_FIELD(arg0, s32 *, 0x3E4)));
    }
    if (TObjEnePanarms__sub_800DFB44((s32)((int) (M2C_FIELD(arg0, s32 *, 0x3E8)))) == 0) {
        TObjEnePanarms__sub_800E1E14((int) (M2C_FIELD(arg0, s32 *, 0x3E8)));
    }
}

void TObjEnePanarms__sub_800DD41C(u8 *arg0) {
    f32 temp_f1;
    temp_f1 = M2C_FIELD(arg0, f32 *, 0xC0);
    if ((temp_f1 >= TObjEnePanarms__data_805DA490) && (temp_f1 < lbl_805DA494)) {
        TObjEneDellBiter__sub_80087350((void *) (arg0 + 0x38), (int) (0xF0));
    }
    if (M2C_FIELD(arg0, s32 *, 0xB0) & 0x10) {
        TObjEnePanarms__sub_800DED30((void*)((void *) (arg0)), (void*)((int) (0xA)));
    }
}

void TObjEnePanarms__sub_800DD488(u8 *arg0) {
    u8 *temp_r5;
    temp_r5 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x390));
    M2C_FIELD(temp_r5, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r5, s32 *, 0x18) & 0xFFFFFFFE);
    obj_clearFlags30((void *)((void *) (arg0)), (u32)((int) (0x40000)));
    obj_setFlags30((void *) (arg0), (int) (0x04000000));
    TObjEnePanarms__sub_800DE430((s32)((void *) (arg0)), (s32)((int) (0x22)), (s32)((int) (0x3C)));
    TBoss3Volopt__sub_8022675C((M2C_UNK)((void *) (((s32)copy_target_state__14TObjEnePanarmsFPvPv((void *)((void *) (arg0)), (M2C_UNK)((int) (0x4003BC2D)))))), (void *)((void *) (arg0 + 0x3AC)), (M2C_UNK)((int) (0)), (M2C_UNK)((int) (0)));
    TBoss3Volopt__sub_8022675C((M2C_UNK)((void *) (((s32)copy_target_state__14TObjEnePanarmsFPvPv((void *)((void *) (arg0)), (M2C_UNK)((int) (0x4003BC2C)))))), (void *)((void *) (arg0 + 0x3C4)), (M2C_UNK)((int) (0)), (M2C_UNK)((int) (0)));
    set_field_b8__14TObjEnePanarmsFPvs((void *) (arg0), (int) (0xA));
}

void TObjEnePanarms__sub_800DD530(u8 *arg0) {
    s32 temp_r0;
    u32 temp_r3;
    if (M2C_FIELD(arg0, f32 *, 0xC0) >= TObjEnePanarms__data_805DA49C) {
        temp_r3 = M2C_FIELD(arg0, u32 *, 0x394);
        if (temp_r3 != 0) {
            request_destroy__11TBoss4Type2FUi(temp_r3);
            M2C_FIELD(arg0, u32 *, 0x394) = 0U;
        }
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x388) - 1;
    M2C_FIELD(arg0, s32 *, 0x388) = temp_r0;
    if (temp_r0 <= 0) {
        if (!(M2C_FIELD(arg0, s32 *, 0x3EC) & 1) && ((s32) M2C_FIELD(arg0, s32 *, 0x3F0) < 4)) {
            TObjEnePanarms__sub_800DED30((void*)((void *) (arg0)), (void*)((int) (0xD)));
            return;
        }
        TObjEnePanarms__sub_800DED30((void*)((void *) (arg0)), (void*)((int) (3)));
    }
}

void TObjEnePanarms__sub_800DD5C8(u8 *arg0) {
    s32 buffer_14[3];
    f32 buffer_8[3];
    s32 temp_r6;
    u8 *temp_r5;
    temp_r5 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x390));
    M2C_FIELD(temp_r5, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r5, s32 *, 0x18) | 1);
    obj_clearFlags30(arg0, 0x04040000U);
    fn_80086D50((void *) (arg0 + 0x3D0), (void *) (arg0 + 0x5C), (int) (0x109));
    temp_r6 = M2C_FIELD(arg0, s32 *, 0x60) - 0x4000;
    buffer_14[1] = 0;
    buffer_14[0] = temp_r6;
    buffer_14[2] = 0x4000;
    M2C_FIELD(arg0, s32 *, 0x394) = fn_800871A0((void *) (arg0 + 0x3D0), (void *) (&buffer_14[0]), (int) (0x108), (int) (temp_r6));
    buffer_8[1] = TObjEnePanarms__data_805DA4A0;
    buffer_8[0] = TBoss8Dragon__sub_803D64C0((int) (M2C_FIELD(arg0, s32 *, 0x60)));
    buffer_8[2] = TBoss8Dragon__sub_803D64DC((int) (M2C_FIELD(arg0, s32 *, 0x60)));
    create__22TObjEnePanarmsAtkColliFPvPvPvPv(arg0, arg0 + 0x3D0, &buffer_8[0], (void *)1);
    set_field_b8__14TObjEnePanarmsFPvs(arg0, 9);
    M2C_FIELD(arg0, s32 *, 0x388) = 0x5A;
}

void TObjEnePanarms__sub_800DD738(u8 *arg0) {
    u8 *temp_r5;
    temp_r5 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x390));
    M2C_FIELD(temp_r5, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r5, s32 *, 0x18) | 1);
    obj_clearFlags30(arg0, 0x04040000U);
    set_field_b8__14TObjEnePanarmsFPvs(arg0, 8);
}

void TObjEnePanarms__sub_800DD784(u8 *arg0) {
    s32 temp_r0;
    u32 temp_r3;
    if (M2C_FIELD(arg0, f32 *, 0xC0) >= TObjEnePanarms__data_805DA49C) {
        temp_r3 = M2C_FIELD(arg0, u32 *, 0x394);
        if (temp_r3 != 0) {
            request_destroy__11TBoss4Type2FUi(temp_r3);
            M2C_FIELD(arg0, u32 *, 0x394) = 0U;
        }
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x388) - 1;
    M2C_FIELD(arg0, s32 *, 0x388) = temp_r0;
    if (temp_r0 <= 0) {
        TObjEnePanarms__sub_800DED30((void*)((void *) (arg0)), (void*)((int) (3)));
    }
}

void TObjEnePanarms__sub_800DD7F4(u8 *arg0) {
    s32 buffer_14[3];
    f32 buffer_8[3];
    s32 temp_r6;
    u8 *temp_r5;
    temp_r5 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x390));
    M2C_FIELD(temp_r5, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r5, s32 *, 0x18) | 1);
    obj_clearFlags30(arg0, 0x04040000U);
    temp_r6 = M2C_FIELD(arg0, s32 *, 0x60) + 0x4000;
    buffer_14[1] = 0;
    buffer_14[0] = temp_r6;
    buffer_14[2] = 0x4000;
    M2C_FIELD(arg0, s32 *, 0x394) = fn_800871A0((void *) (arg0 + 0x3B8), (void *) (&buffer_14[0]), (int) (0x105), (int) (temp_r6));
    buffer_8[1] = TObjEnePanarms__data_805DA4A0;
    buffer_8[0] = TBoss8Dragon__sub_803D64C0((int) (M2C_FIELD(arg0, s32 *, 0x60)));
    buffer_8[2] = TBoss8Dragon__sub_803D64DC((int) (M2C_FIELD(arg0, s32 *, 0x60)));
    create__22TObjEnePanarmsAtkColliFPvPvPvPv(arg0, arg0 + 0x3B8, &buffer_8[0], NULL);
    set_field_b8__14TObjEnePanarmsFPvs(arg0, 7);
    M2C_FIELD(arg0, s32 *, 0x388) = 0x5A;
}

void TObjEnePanarms__sub_800DD954(u8 *arg0) {
    u8 *temp_r5;
    temp_r5 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x390));
    M2C_FIELD(temp_r5, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r5, s32 *, 0x18) | 1);
    obj_clearFlags30(arg0, 0x04040000U);
    set_field_b8__14TObjEnePanarmsFPvs(arg0, 6);
}

typedef struct Stack_800DDFDC Stack_800DDFDC;

#pragma push
#pragma opt_common_subs off
#pragma opt_propagation off
#pragma fp_contract on
typedef char RecoveredGlobal_800DD9A0_lbl_80494F4C_size[sizeof(RecoveredGlobal_800DD9A0_lbl_80494F4C) == 0x210 ? 1 : -1];
void TObjEnePanarms__sub_800DD9A0(u8 *arg0) {
    typedef char sp8_offset[(offsetof(Stack_800DD9A0, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_800DD9A0, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_800DD9A0, sp10) == 0x8) ? 1 : -1];
    typedef char sp14_offset[(offsetof(Stack_800DD9A0, sp14) == 0xC) ? 1 : -1];
    typedef char sp18_offset[(offsetof(Stack_800DD9A0, sp18) == 0x10) ? 1 : -1];
    Stack_800DD9A0 stack;
    f32 temp_f2;
    s32 temp_r0;
    M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) - 1);
    if ((s8) lbl_805D5280 == 0) {
        lbl_805D5280 = 1;
        lbl_805D527C = M2C_FIELD(&lbl_80494F4C.value, f32 *, 0x48);
    }
    temp_f2 = M2C_FIELD(arg0, f32 *, 0xC0);
    if ((temp_f2 >= lbl_805DA4A8) && (temp_f2 < (lbl_805DA4A8 + lbl_805D527C))) {
        VecCopy__FP3VecPC3Vec((void *) (&stack.sp14), (void *) (arg0 + 0x2FC));
        stack.sp18 += TObjEnePanarms__data_805DA49C;
        TObjEneDellBiter__sub_80087350((void *) (&stack.sp14), (int) (0xF0));
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x388);
    if (temp_r0 <= 0x78) {
        if (temp_r0 == 0x78) {
            stack.sp8 = (lbl_805DA4AC * M2C_FIELD(arg0, f32 *, 0x38)) + (lbl_805DA4AC * M2C_FIELD(arg0, f32 *, 0x3A0));
            stack.spC = M2C_FIELD(arg0, f32 *, 0x3C);
            stack.sp10 = (lbl_805DA4AC * M2C_FIELD(arg0, f32 *, 0x40)) + (lbl_805DA4AC * M2C_FIELD(arg0, f32 *, 0x3A8));
            spawn_ground_effect__10TObjPlayerFPvi((void *) (&stack.sp8), (int) (0x78));
            spawn_dead_spot_default__10TObjPlayerFii((void *) (&stack.sp8), (int) (6));
        }
        if ((s32) M2C_FIELD(arg0, s32 *, 0x388) == 0x5A) {
            M2C_FIELD(arg0, s32 *, 0x3E0) = 0;
        }
        M2C_FIELD(arg0, f32 *, 0x3C) = (f32) (M2C_FIELD(arg0, f32 *, 0x3C) - lbl_805DA4B0);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x388) <= 0) {
            queue_destruction__7TObjectFv((void *) (arg0));
        }
    }
}
#pragma pop

void TObjEnePanarms__sub_800DDFDC(u8 *arg0) {
  Stack_800DDFDC stack;
  f32 temp_f1;
  *((f32 *) (((s8 *) arg0) + 0x37C)) = (f32) ((*((f32 *) (((s8 *) arg0) + 0x37C))) + lbl_805DA4D8);
  TBoss4Zako__sub_803D8910((void *) (arg0 + 0x38), (void *) (arg0 + 0x378));
  if ((*((f32 *) (((s8 *) arg0) + 0x37C))) <= TObjEnePanarms__data_805DA4A0)
  {
    ;
    if ((*((f32 *) (((s8 *) arg0) + 0x3C))) <= (*((f32 *) (((s8 *) arg0) + 0x384))))
    {
      *((f32 *) (((s8 *) arg0) + 0x3C)) = *((f32 *) (((s8 *) arg0) + 0x384));
      TObjEneDellBiter__sub_80087350((void *) (arg0 + 0x38), (int) 0xF0);
      TObjEnePanarms__sub_800DED30((void*)((void *) arg0), (void*)((int) 3));
      return;
    }
  }
  *((s32 *) (((s8 *) arg0) + 0x388)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x388))) + 1);
  if ((!((*((s32 *) (((s8 *) arg0) + 0x388))) & 7)) && ((*((f32 *) (((s8 *) arg0) + 0x37C))) > TObjEnePanarms__data_805DA4A0))
  {
    VecCopy__FP3VecPC3Vec((void *) (&stack.sp8), (void *) (arg0 + 0x2FC));
    stack.spC = TObjEnePanarms__data_805DA49C + (*((f32 *) (((s8 *) arg0) + 0x384)));
    TObjEneDellBiter__sub_80087350((void *) (&stack.sp8), (int) 0xF0);
  }
}

void TObjEnePanarms__sub_800DE0B8(u8 *arg0) {
    u8 *temp_r5;
    M2C_FIELD(arg0, f32 *, 0x378) = (f32) TObjEnePanarms__data_805DA4A0;
    M2C_FIELD(arg0, f32 *, 0x37C) = (f32) lbl_805DA4DC;
    M2C_FIELD(arg0, f32 *, 0x380) = (f32) TObjEnePanarms__data_805DA4A0;
    M2C_FIELD(arg0, s32 *, 0x3E0) = 1;
    M2C_FIELD(arg0, s32 *, 0x3DC) = 1;
    temp_r5 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x390));
    M2C_FIELD(temp_r5, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r5, s32 *, 0x18) & 0xFFFFFFFE);
    obj_clearFlags30(arg0, 0x40000U);
    obj_setFlags30((void *)(arg0), (int)(0x04000000U));
}

void init_state__14TObjEnePanarmsFPv(u8 *arg0) {
    u8 *temp_r4;
    u8 *temp_r4_2;

    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x38), (void *) (arg0 + 0x50));
    TObjEnePanarms__sub_800DECC4((Obj_800DECC4 *)((void *) (arg0)));
    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) (lbl_805DA4E0 + M2C_FIELD(arg0, f32 *, 0x384));
    obj_setFlags30((void *) (arg0), (int) (0x04040000));
    temp_r4 = (unsigned char *) (M2C_FIELD(arg0, void **, 0x390));
    M2C_FIELD(temp_r4, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r4, s32 *, 0x18) & 0xFFFFFFFE);
    temp_r4_2 = (unsigned char *) (M2C_FIELD(arg0, void **, 0x390));
    M2C_FIELD(temp_r4_2, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r4_2, s32 *, 0x18) | 0x08000000);
    M2C_FIELD(arg0, s32 *, 0x3E0) = 0;
    M2C_FIELD(arg0, s32 *, 0x3DC) = 0;
    M2C_FIELD(arg0, s32 *, 0x388) = (s32) M2C_FIELD(arg0, s32 *, 0x478);
}

void try_activate__14TObjEnePanarmsFPv(void* p) { if (check_demo_mode__10TObjPlayerFv(p) == 0) { TObjEnePanarms__sub_800DED30((void*)(p), (void*)((void*)1)); } }
void TObjEnePanarms__sub_800DE2B0(void* p) { *(s32*)((char*)p + 0x3e0) = 1; *(s32*)((char*)p + 0x3dc) = 1; }
void TObjEnePanarms__sub_800DE2C0(void* p) { *(u32*)((char*)p + 0x30) &= 0xfffffeff; }

int TObjEnePanarms__sub_800DE2D0(void) { return 0; }

void set_state__14TObjEnePanarmsFPv(void* p) { if (*(int*)((char*)p + 0x374) != 4) { TObjEnePanarms__sub_800DED30((void*)(p), (void*)((void*)4)); } }

int TObjEnePanarms__sub_800DE390(void) { return 0; }

void TObjEnePanarms__sub_800DE430(s32 arg0, s32 arg1, s32 arg2) {
    Vec position;
    VecCopy__FP3VecPC3Vec((void *) (&position.x), (void *) (arg0 + 0x2FC));
    position.y += TObjEnePanarms__data_805DA4A4;
    fn_80086B64((void *) (&position.x), (void *) (arg0 + 0x5C), (int) (0x106), (void *) (arg1), (void *) (arg2));
}

void TObjEnePanarms__sub_800DECC4(Obj_800DECC4 *self) {
    Vec_800DECC4 v = self->pos;
    v.y += TObjEnePanarms__data_805DA4A4;
    if (TObjPlayer__sub_80156844(self, &v, (int)self->f248) != 0) {
        self->f384 = v.y;
    }
}

void TObjEnePanarms__sub_800DEEF8(void* p) { TObjPlayer__sub_803D9B2C(p); TOHangerMachine01__sub_803D9C00((char*)p + 0x38); TObjPlayer__sub_803D9214((void*)0, *(void**)((char*)p + 0x60)); set_global_param__8TObjFishFi(*(void**)((char*)p + 0x24)); TObjFish__sub_800E3074(*(void**)((char*)p + 0x39c)); draw__16TObjEneRe7BeruraFPv(p); clear_render_callback__8TObjFishFv(*(void**)((char*)p + 0x39c)); TObjPlayer__sub_803D9B78(); }

extern u32 TObjEnePanarms__data_805D5278;

void TObjEnePanarms__sub_800DF1B8(Obj_800DF1B8 *self) {
    s32 i;
    for (i = 0; i < 2; i++) {
        if (self->handles[i] != 0) {
            request_destroy__11TBoss4Type2FUi(self->handles[i]);
            self->handles[i] = 0;
        }
    }
}

void free_data__14TObjEnePanarmsFv(void) {
    if ((u32) TObjEnePanarms__data_805D5278 != 0U) {
        TLobby__sub_8001FE7C((void*)TObjEnePanarms__data_805D5278, 1);
        TObjEnePanarms__data_805D5278 = 0U;
    }
}

}
