#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
struct BaseM_80234C90_80233B38 { char pad[0x24]; };
struct VM_80234C90_80233B38 : BaseM_80234C90_80233B38 { virtual void m0(int); };

struct Stack_802340E4 {
    M2C_UNK sp8;
    u16 spC;
    s16 spE;
    s32 sp10;
    M2C_UNK sp14;
    u8 pad_18[0x8];
    s32 sp20;
};

struct RecoveredGlobal_80233B9C_lbl_804CC990 { M2C_UNK value; u8 remaining[0x14]; };
typedef char RecoveredGlobal_80233B9C_lbl_804CC990_size[sizeof(RecoveredGlobal_80233B9C_lbl_804CC990) == 0x18 ? 1 : -1];

struct RecoveredGlobal_80233D18_lbl_804CC9A8 {
    M2C_UNK value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_80233D18_lbl_804CC9D4 {
    M2C_UNK value;
    u8 remaining[0x34];
};

#include "pso/effect/TechniqueChargeEmitter.h"
extern "C" {
void TTecLuker__sub_80234F7C(void* p);
void TTecLuker__sub_80234F7C(void* p);
s32 TTecLuker__sub_80234F88(void* p);
s32 TTecLuker__sub_80234F88(void* p);
int TObjPlayer__sub_80019664(void);
void TTecLuker__sub_80234F90(void* p);
s32 TLobby__send_and_handle_60(s32);
int TObjPlayer__sub_80019664(void);
extern M2C_UNK lbl_80434088;
extern const f32 lbl_805D7D3C;
extern s32 lbl_805D5FC0;
extern s32 lbl_805D5D6C;
void TTecLuker__sub_80234F90(void* p);
void TTecLuker__sub_80235028(void* p);
void TTecLuker__sub_80235028(void* p);
void TTecLuker__sub_8023503C(void* p);
void TTecLuker__sub_8023503C(void* p);
void TTecLuker__sub_80235048(void* p);
void TTecLuker__sub_80235048(void* p);
int TTecLuker__sub_80235054(void* p);
int TTecLuker__sub_80235054(void* p);
void read_be16_field2__10TObjPlayerFPv(void *);
s32 bswap_16__FPUs(s32);
s32 bswap_32__FPUl(s32);
void TTecLuker__sub_80234FC4(void *arg0);
int fn_80235078(void *arg0);
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
void create__9TTecLukerFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3);
void TTecLuker__sub_80233E3C(u16 arg0);
void VecCopy__FP3VecPC3Vec(void *, void *);
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
void TTecLuker__sub_80234148(u8 *arg0, u16 arg1, s16 arg2, u8 *arg3, s32 arg4);
void VecCopy__FP3VecPC3Vec(void *, void *);
void TTecLuker__sub_80234F90(void* p);
void TTecLuker__sub_80235028(void* p);
void TTecLuker__sub_802340E4(u8 *arg0);
void VecCopy__FP3VecPC3Vec(void *, void *);
s32 TBoss3Volopt__sub_8022675C(int, void *, int, int);
s32 __ct__7TObjectFP7TObject(void *, void *);
extern M2C_UNK lbl_804CC990[];
u8 *TTecLuker__sub_80233B9C(u8 *arg0, s32 arg1, s32 arg2);
void VecCopy__FP3VecPC3Vec(void *, void *);
s32 obj_setFlags30(void *, int);
s32 reset_photon_effect__10TObjPlayerFPv(void *);
s32 TObjEneGibbles__sub_80156780(void *, void *, int);
s32 TObjPlayer__sub_801569F4(void *, void *);
void TTecLuker__sub_80234F68(void* p);
extern RecoveredGlobal_80233D18_lbl_804CC9A8 lbl_804CC9A8;
extern M2C_UNK lbl_804CC9D4[];
u8 *TTecLuker__sub_80233D18(u8 *arg0, s32 arg1, s32 arg2, s32 arg3);
bool TTecLuker__sub_8023401C(u8 *arg0);
extern u32 lbl_804CC988[];
void* TObjEneDellBiter__sub_80087350(float*,u32);
int check_flag_0x80__10TObjPlayerFPv(void*);
M2C_UNK queue_destruction__7TObjectFv(void *);
void TTecLuker__updateRecoveryTechniqueCharge(TechniqueChargeEmitter* state);
}

extern "C" {

void TTecLuker__sub_80233C18(void* p);
void TTecLuker__sub_80234F68(void* p);
void *__dt__9TTecLukerFPvs(void *arg0, s16 arg1);
void *__dt__9TTecLukerFv(void *arg0, s16 arg1);
void apply_all_players__9TTecLukerFv(void);
void create__9TTecLukerFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3);
void create_for_player__9TTecLukerFii(int arg0, s32 arg1);
void *destroy__9TTecLukerFPvs(void *arg0, s16 arg1);
s16 get_field_2__9TTecLukerFPv(void* p);
void init_fields__9TTecLukerFPvs(void *arg0, s16 arg1);
void update_player_target__9TTecLukerFPv(u8 *arg0);
s32 TLobby__send_and_handle_60(s32);
void TLobby__sub_80226294(void *);
M2C_UNK TObjEneGibbles__sub_80156720(void *);
s32 TObjLuker__sub_801A0F34(void *, M2C_UNK, f32);
M2C_UNK TObjPlayer__sub_80154A00(void *);
M2C_UNK TObjPlayer__sub_801B4A18(void *, M2C_UNK);
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
void *TTecLuker__ct(void *, void *, void *, void *, void *);
M2C_UNK TTecLuker__sub_802340A0(s32);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void *__nw__7TObjectFUl(int);
s32 bswap_16__FPUs(s32);
s32 bswap_32__FPUl(s32);
M2C_UNK destroy_particle_controller__10TObjPlayerFPvs(void *, M2C_UNK);
M2C_UNK destroy_technique_base__9TTecLukerFPvs(void *, M2C_UNK);
s32 is_split_screen();
M2C_UNK queue_destruction__7TObjectFv(void *);

extern M2C_UNK lbl_804CC990[];

void TTecLuker__updateRecoveryTechniqueCharge(TechniqueChargeEmitter* state) {
    ++state->age;
    if(state->age%10==0) {
        for(int i=0;i<2;++i)TObjEneDellBiter__sub_80087350(state->position,lbl_804CC988[i]);
    }
    if(!check_flag_0x80__10TObjPlayerFPv(state->actor))queue_destruction__7TObjectFv((void *)(state));
    else if(state->age>=180)queue_destruction__7TObjectFv((void *)(state));
}

void *destroy__9TTecLukerFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804CC990;
        TLobby__sub_80226294(M2C_FIELD(arg0, void **, 0x30));
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv((void *)(arg0));
        }
    }
    return arg0;
}

u8 *TTecLuker__sub_80233B9C(u8 *arg0, s32 arg1, s32 arg2) {
    __ct__7TObjectFP7TObject((void *) (arg0), (void *) (arg2));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_80233B9C_lbl_804CC990 *)&lbl_804CC990).value;
    M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
    VecCopy__FP3VecPC3Vec((void *)((void *) (arg0 + 0x20)), (void *)((int) (M2C_FIELD(arg0, s32 *, 0x1C) + 0x2FC)));
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = TBoss3Volopt__sub_8022675C((int) (0x4002BC20), (void *) (arg0 + 0x20), (int) (0), (int) (0));
    return arg0;
}

void TTecLuker__sub_80233C18(void* p) { *(s32*)((char*)p + 0xb0) = 1; }

extern const f32 lbl_805DC858;

void update_player_target__9TTecLukerFPv(u8 *arg0) {
    if (is_split_screen() != 0) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0xAC) != 0) {
            TObjPlayer__sub_801B4A18(arg0, -1);
            return;
        }
        if (TObjLuker__sub_801A0F34(arg0 + 0x38, 0, lbl_805DC858) != 0) {
            TObjPlayer__sub_801B4A18(arg0, -1);
        }
    } else {
        TObjPlayer__sub_801B4A18(arg0, -1);
    }
}

extern M2C_UNK lbl_804CC9D4[];

void *__dt__9TTecLukerFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804CC9D4;
        TObjPlayer__sub_80154A00(arg0);
        TObjEneGibbles__sub_80156720(arg0);
        M2C_FIELD(arg0, s32 *, 0xB0) = 0;
        destroy_particle_controller__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv((void *)(arg0));
        }
    }
    return arg0;
}

typedef char RecoveredGlobal_80233D18_lbl_804CC9A8_size[sizeof(RecoveredGlobal_80233D18_lbl_804CC9A8) == 0x2C ? 1 : -1];
typedef char RecoveredGlobal_80233D18_lbl_804CC9D4_size[sizeof(RecoveredGlobal_80233D18_lbl_804CC9D4) == 0x38 ? 1 : -1];
u8 *TTecLuker__sub_80233D18(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    TObjPlayer__sub_801569F4((void *) (arg0), (void *) (arg2));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_80233D18_lbl_804CC9D4 *)&lbl_804CC9D4).value;
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x38), (void *) (arg1));
    TObjEneGibbles__sub_80156780((void *) (arg0), (void *) (&lbl_804CC9A8.value), (int) (1));
    obj_setFlags30((void *) (arg0), (int) (0x40000000));
    reset_photon_effect__10TObjPlayerFPv((void *) (arg0));
    TTecLuker__sub_80234F68((void*)((void *) (arg0 + 0x98)));
    M2C_FIELD(arg0, s32 *, 0xB0) = 0;
    M2C_FIELD(arg0, s32 *, 0xAC) = arg3;
    return arg0;
}

void apply_all_players__9TTecLukerFv(void) {
    s32 var_r31;
    u32 temp_r3;

    var_r31 = 0;
    do {
        temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C((s32)(var_r31));
        if (temp_r3 != 0U) {
            TTecLuker__sub_802340A0(temp_r3 + 0x830);
        }
        var_r31 += 1;
    } while (var_r31 < 4);
}

void create_for_player__9TTecLukerFii(int arg0, s32 arg1) {
    u32 r = TPlayerBattleCtrl4P__sub_801BA74C((s32)((u16)arg0));
    if (r != 0U) {
        create__9TTecLukerFPvPvPvPv((void *)(r), (void *)(arg1), (void *)(arg1), (void *)(0xA));
    }
}

void TTecLuker__sub_80233E3C(u16 arg0) {
    u8 *temp_r3;
    temp_r3 = (u8 *)(((s32)TPlayerBattleCtrl4P__sub_801BA74C((s32)((u32) arg0))));
    if (temp_r3 != NULL) {
        create__9TTecLukerFPvPvPvPv(temp_r3, temp_r3 + 0x38, temp_r3 + 0x2FC, NULL);
    }
}

bool TTecLuker__sub_8023401C(u8 *arg0) {
    return M2C_FIELD(arg0, s16 *, 2) != 0;
}

void init_fields__9TTecLukerFPvs(void *arg0, s16 arg1) {
    M2C_FIELD(arg0, s16 *, 0) = arg1;
    M2C_FIELD(arg0, s16 *, 2) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
}

void TTecLuker__sub_802340E4(u8 *arg0) {
    Stack_802340E4 stack;
    TTecLuker__sub_80235028((void*)((void *) (&stack.sp8)));
    stack.spC = M2C_FIELD(arg0, u16 *, 0);
    stack.sp10 = M2C_FIELD(arg0, s32 *, 4);
    stack.spE = M2C_FIELD(arg0, s16 *, 2);
    VecCopy__FP3VecPC3Vec((void *) (&stack.sp14), (void *) (arg0 + 8));
    stack.sp20 = M2C_FIELD(arg0, s32 *, 0x14);
    TTecLuker__sub_80234F90((void*)((void *) (&stack.sp8)));
}

void TTecLuker__sub_80234148(u8 *arg0, u16 arg1, s16 arg2, u8 *arg3, s32 arg4) {
    u8 *temp_r3;
    M2C_FIELD(arg0, u16 *, 0) = arg1;
    M2C_FIELD(arg0, s16 *, 2) = arg2;
    VecCopy__FP3VecPC3Vec(arg0 + 8, arg3);
    M2C_FIELD(arg0, s32 *, 4) = arg4;
    if (arg1 <= 4U) {
        temp_r3 = (u8 *)(((s32)TPlayerBattleCtrl4P__sub_801BA74C((s32)((u32) arg1))));
        if (temp_r3 != NULL) {
            M2C_FIELD(arg0, s32 *, 0x14) = (s32) M2C_FIELD(temp_r3, s32 *, 0x60);
        }
    }
}

void create__9TTecLukerFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3) {
    void *o;
    o = __nw__7TObjectFUl(0x110);
    if (o != NULL) {
        TTecLuker__ct(o, arg0, arg1, arg2, arg3);
    }
}

extern void* __vt__9TTecLuker[];

void *__dt__9TTecLukerFv(void *arg0, s16 arg1) {
    s32 temp_cr0_eq;
    void *temp_r3;

    if (arg0 != NULL) {
        M2C_FIELD(arg0, void **, 0x18) = (void *) __vt__9TTecLuker;
        if ((u32) M2C_FIELD(arg0, u32 *, 0xF8) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0xF8));
            M2C_FIELD(arg0, u32 *, 0xF8) = 0U;
        }
        temp_r3 = M2C_FIELD(arg0, void **, 0xEC);
        if (temp_r3 != NULL) {
            if (temp_r3 != NULL) {
                ((struct VM_80234C90_80233B38 *) temp_r3)->m0(1);
            }
            M2C_FIELD(arg0, void **, 0xEC) = NULL;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0xF0) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0xF0));
            M2C_FIELD(arg0, u32 *, 0xF0) = 0U;
        }
        M2C_FIELD(arg0, u32 *, 0xF0) = 0U;
        destroy_technique_base__9TTecLukerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv((void *)(arg0));
        }
    }
    return arg0;
}

void TTecLuker__sub_80234F68(void* p) { *(s32*)((char*)p + 0x0) = 6; }
s16 get_field_2__9TTecLukerFPv(void* p) { return *(s16*)((char*)p + 0x2); }

void TTecLuker__sub_80234F7C(void* p) { *(s32*)((char*)p + 0xb0) = 0; }

s32 TTecLuker__sub_80234F88(void* p) { return *(s32*)((char*)p + 0xb0); }

void TTecLuker__sub_80234F90(void* p) { TTecLuker__sub_80234FC4((void *)((void*)(p))); TLobby__send_and_handle_60((s32)(p)); }

void TTecLuker__sub_80234FC4(void *arg0) {
    read_be16_field2__10TObjPlayerFPv(arg0);
    bswap_16__FPUs((s32)((void *)((char *)arg0 + 4)));
    bswap_16__FPUs((s32)((void *)((char *)arg0 + 6)));
    bswap_16__FPUs((s32)((void *)((char *)arg0 + 8)));
    bswap_32__FPUl((s32)((void *)((char *)arg0 + 12)));
    bswap_32__FPUl((s32)((void *)((char *)arg0 + 16)));
    bswap_32__FPUl((s32)((void *)((char *)arg0 + 20)));
    bswap_32__FPUl((s32)((void *)((char *)arg0 + 24)));
}

void TTecLuker__sub_80235028(void* p) { *(u8*)((char*)p + 0x0) = 104; *(u8*)((char*)p + 0x1) = 7; }

void TTecLuker__sub_8023503C(void* p) { *(s32*)((char*)p + 0x38) = 1; }

void TTecLuker__sub_80235048(void* p) { *(s32*)((char*)p + 0x38) = 0; }

int TTecLuker__sub_80235054(void* p) { return fn_80235078((void *)((char*)p + 0x4)); }
int fn_80235078(void *arg0) {
    return (u8) (M2C_FIELD(arg0, s32 *, 0x0) == 2);
}

}
