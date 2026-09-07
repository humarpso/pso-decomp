#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_801520B8___vt__10TNpcPlayer { M2C_UNK value; u8 remaining[0x14]; };

extern "C" {
void TNpcPlayer__sub_801528C8(s32 arg0, s32 arg1);
void TNpcPlayer__sub_801528B8(s32 arg0, s32 arg1);
u8 * dt__10TNpcPlayerFPvs(void *, s16);
u16 get_npc_type__10TNpcPlayerFPv(void* p);
void send_item_pickup_request__10TObjPlayerFi(s32);
void __dl__7TObjectFPv(s32);
M2C_UNK __dt__7TObjectFv(void *, int);
u32 TPlayerBattleCtrl4P__sub_801BA74C(int);
extern RecoveredGlobal_801520B8___vt__10TNpcPlayer __vt__10TNpcPlayer;
u8 *__dt__10TNpcPlayerFv(u8 *arg0, s16 arg1);
}

extern "C" {

int TNpcPlayer__sub_801528A8(void);
s32 TNpcPlayer__sub_801528DC(void* p);
void copy__10TNpcPlayerFPvPv(void* p, void* q);
void ensure_rock_singleton__10TNpcPlayerFv(void);
s32 get_npc_state__10TNpcPlayerFPv(void* p);
u16 get_npc_type__10TNpcPlayerFPv(void* p);
s32 update_follow_target__10TNpcPlayerFPv(u8 *arg0);
M2C_UNK TNpcPlayer__sub_8014E090(void *, int);
s32 TNpcPlayer__sub_8014FF5C(void *);
s32 TNpcPlayer__sub_801500F4();
M2C_UNK TNpcPlayer__sub_801501A0(void *);
s32 TNpcPlayer__sub_80152978(void* p);
void TNpcPlayer__sub_80152A30(void);
int TNpcPlayer__sub_80152A78(void* a0 = 0);
int TNpcPlayer__sub_80152ACC(void*);
int TNpcPlayer__sub_80152B5C(void*);
int TNpcPlayer__sub_80152BEC(void*);
void TNpcPlayer__sub_80152D64(void* p);
int TObjPlayer__sub_80102CE0(void*);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
u32 alloc_buffer__11TOBoss4RockFPv(M2C_UNK);
void copy_transform__10TNpcPlayerFPvPv(void* p, void* q);
s32 get_action_state__10TNpcPlayerFPv(void* p);
s32 get_condition__10TNpcPlayerFPv(void* p);
void* init__10TNpcPlayerFPv(void* p);
void init_model__10TNpcPlayerFPv(void* p);
int read_be16_field2__10TObjPlayerFPv(void*);
void reset_fields_8c__10TNpcPlayerFPv(void* p);
void reset_model__10TNpcPlayerFPv(void* p);
void update__10TNpcPlayerFPv(void* p);
void update_lobby__10TNpcPlayerFPv(void* p);
void update_players__10TNpcPlayerFPv(void* p);
int update_players__6TLobbyFi(void*);

s32 update_follow_target__10TNpcPlayerFPv(u8 *arg0) {
    if (TNpcPlayer__sub_801500F4() != 0) {
        TNpcPlayer__sub_801501A0((void *) (arg0));
        if (TNpcPlayer__sub_8014FF5C((void *) (arg0)) != 0) {
            VecCopy__FP3VecPC3Vec((void *) (arg0 + 0xAC), (void *) (arg0 + 0xD0));
            if ((u32) M2C_FIELD(arg0, u32 *, 0x7C) != 2U) {
                TNpcPlayer__sub_8014E090((void *) (arg0), (int) (1));
            }
        } else {
            VecCopy__FP3VecPC3Vec((void *) (arg0 + 0xAC), (void *) (M2C_FIELD(M2C_FIELD(arg0, void **, 0x78), s32 *, 0x94) + 0x38));
        }
        return 1;
    }
    if ((M2C_FIELD(arg0, s32 *, 0x80) & 0x20) && ((u32) M2C_FIELD(arg0, u32 *, 0x7C) != 8U)) {
        TNpcPlayer__sub_8014E090((void *) (arg0), (int) (0));
    }
    return 0;
}

u8 *__dt__10TNpcPlayerFv(u8 *arg0, s16 arg1) {
    u32 temp_r3_3;
    u8 *temp_r3;
    u8 *temp_r3_2;
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__10TNpcPlayer.value;
        temp_r3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x74));
        if (temp_r3 != NULL) {
            dt__10TNpcPlayerFPvs(temp_r3, 1);
            M2C_FIELD(arg0, u8 **, 0x74) = NULL;
        }
        temp_r3_2 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x78));
        if (temp_r3_2 != NULL) {
            temp_r3_3 = TPlayerBattleCtrl4P__sub_801BA74C((int) (get_npc_type__10TNpcPlayerFPv((void*)(temp_r3_2))));
            if (temp_r3_3 != 0U) {
                send_item_pickup_request__10TObjPlayerFi((s32) temp_r3_3);
            }
            dt__10TNpcPlayerFPvs(M2C_FIELD(arg0, u8 **, 0x78), 1);
            M2C_FIELD(arg0, u8 **, 0x78) = NULL;
        }
        __dt__7TObjectFv((void *) (arg0), (int) (0));
        if (arg1 > 0) {
            __dl__7TObjectFPv((s32) arg0);
        }
    }
    return arg0;
}

void copy__10TNpcPlayerFPvPv(void* p, void* q) { *(u16*)((char*)p + 0x0) = *(u16*)((char*)q + 0x0); *(u16*)((char*)p + 0x2) = *(u16*)((char*)q + 0x2); *(u32*)((char*)p + 0x4) = *(u32*)((char*)q + 0x4); *(f32*)((char*)p + 0x8) = *(f32*)((char*)q + 0x8); *(f32*)((char*)p + 0xc) = *(f32*)((char*)q + 0xc); *(f32*)((char*)p + 0x10) = *(f32*)((char*)q + 0x10); *(f32*)((char*)p + 0x14) = *(f32*)((char*)q + 0x14); *(f32*)((char*)p + 0x18) = *(f32*)((char*)q + 0x18); *(f32*)((char*)p + 0x1c) = *(f32*)((char*)q + 0x1c); *(u8*)((char*)p + 0x20) = *(u8*)((char*)q + 0x20); *(u8*)((char*)p + 0x21) = *(u8*)((char*)q + 0x21); *(u8*)((char*)p + 0x22) = *(u8*)((char*)q + 0x22); *(u8*)((char*)p + 0x23) = *(u8*)((char*)q + 0x23); *(f32*)((char*)p + 0x24) = *(f32*)((char*)q + 0x24); }

extern u32 lbl_805D5860;

void ensure_rock_singleton__10TNpcPlayerFv(void) {
    if ((u32) lbl_805D5860 == 0U) {
        lbl_805D5860 = alloc_buffer__11TOBoss4RockFPv(0x1400);
    }
}

int TNpcPlayer__sub_801528A8(void) { return 0; }

void TNpcPlayer__sub_801528B8(s32 arg0, s32 arg1) {
    M2C_FIELD((arg0 + (arg1 * 2)), s16 *, 0) = 0;
}

void TNpcPlayer__sub_801528C8(s32 arg0, s32 arg1) {
    s32 temp_r5;
    temp_r5 = arg1 * 2;
    M2C_FIELD((arg0 + temp_r5), s16 *, 0) = M2C_FIELD((arg0 + temp_r5), s16 *, 0) + 1;
}

s32 TNpcPlayer__sub_801528DC(void* p) { return *(s32*)((char*)p + 0x84); }
s32 get_npc_state__10TNpcPlayerFPv(void* p) { return *(s32*)((char*)p + 0x7c); }
u16 get_npc_type__10TNpcPlayerFPv(void* p) { return *(u16*)((char*)p + 0x8a); }

}
