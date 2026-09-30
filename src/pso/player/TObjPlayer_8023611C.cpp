#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Stack_80236290 {
    M2C_UNK sp8;
    u8 trailing_storage[0x8];
};

struct RecoveredGlobal_80236290_lbl_80516150 {
    M2C_UNK value;
    u8 remaining[0x84];
};

#include "pso/technique/TechniqueContact.h"

struct Vec_80236154 { f32 x, y, z; };

struct Contact_80236154 { u8 pad[0x18]; u32 flags; };

struct PlayerData_80236154 { u8 pad[0x30]; u32 flags; };

struct List_80236154 {
    PlayerData_80236154 *actors[16];
    Contact_80236154 *bodies[16];
    s32 count;
    u32 reserved84;
};

extern "C" {
s32 TObjPlayer__sub_80236378(void *, int, void *, void *);
void TObjPlayer__sub_80236728(u8 *arg0, s32 arg1);
s32 TObjPlayer__sub_802364D8(void *, int, void *, void *);
void TObjPlayer__sub_80236754(u8 *arg0, s32 arg1);
void TObjPlayer__sub_80236780(u8 *arg0, s32 arg1);
void TObjPlayer__sub_802367AC(u8 *arg0, s32 arg1);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
u32 find_actor_body_contact(void *, int, f32);
s32 TPlayerBattleCtrl4P__sub_801BA74C(int);
extern RecoveredGlobal_80236290_lbl_80516150 lbl_80516150;
extern const f32 lbl_805DC89C;
M2C_UNK *TObjPlayer__sub_80236290(s32 arg0, u32 arg1, s32 _w2, s32 _w3);
extern RecoveredGlobal_80236290_lbl_80516150 lbl_80516150;
void resetTechniqueContactQuery();
s32 VecCopy__FP3VecPC3Vec(void *, void *);
u32 find_actor_body_contact(void *, int, f32);
extern RecoveredGlobal_80236290_lbl_80516150 lbl_80516150;
void resetTechniqueContactQuery();
PlayerData_80236154 *get_player_data__10TObjPlayerFi(s32);
s32 get_game_mode__6TLobbyFv();
s32 get_lobby_flag__6TLobbyFv();
s32 get_global_state__14TOKeyMachine01Fv();
extern const f32 lbl_805DC898;
extern const f32 lbl_805DC89C;
s32 TObjPlayer__sub_80236154(void *self, int target, void *_w2, void *_w3);
}

extern "C" {

void* get_pos_ptr__10TObjPlayerFPv(void* p);
s32 is_valid_and_active__10TObjPlayerFUi(u32 arg0);
s32 TObjPlayer__sub_80019570();

s32 is_valid_and_active__10TObjPlayerFUi(u32 arg0) {
    if (arg0 == 0U) {
        return 0;
    }
    if (TObjPlayer__sub_80019570()) {
        return 1;
    }
    return 0;
}

typedef char RecoveredGlobal_80236290_lbl_80516150_size[sizeof(RecoveredGlobal_80236290_lbl_80516150) == 0x88 ? 1 : -1];

struct RecoveredGlobal_80236290_lbl_80516150;
s32 TObjPlayer__sub_80236154(void *self, int target, void *_w2, void *_w3) {
    Vec_80236154 pos;
    f32 range;
    s32 i;
    PlayerData_80236154 *pd;
    Contact_80236154 *c;
    if (get_global_state__14TOKeyMachine01Fv() == 0xE) {
        range = lbl_805DC898;
    } else {
        range = lbl_805DC89C;
    }
    VecCopy__FP3VecPC3Vec(&pos, (u8 *)self + 0x20);
    resetTechniqueContactQuery();
    if ((u32)target == 0) {
        return (s32)&lbl_80516150;
    }
    VecCopy__FP3VecPC3Vec((u8 *)target + 0x38, &pos);
    for (i = get_game_mode__6TLobbyFv(); i < get_lobby_flag__6TLobbyFv(); i++) {
        pd = get_player_data__10TObjPlayerFi(i);
        if (pd != 0 && (pd->flags & 0x20000000)) {
            c = (Contact_80236154 *)find_actor_body_contact((void *)target, (int)pd, range);
            if (c != 0 && ((c->flags & 1) || !(c->flags & 0x02000000))) {
                ((List_80236154 *)&lbl_80516150)->bodies[((List_80236154 *)&lbl_80516150)->count] = c;
                ((List_80236154 *)&lbl_80516150)->actors[((List_80236154 *)&lbl_80516150)->count] = pd;
                if (++((List_80236154 *)&lbl_80516150)->count >= 16) {
                    ((List_80236154 *)&lbl_80516150)->count = 15;
                    break;
                }
            }
        }
    }
    return (s32)&lbl_80516150;
}

M2C_UNK *TObjPlayer__sub_80236290(s32 arg0, u32 arg1, s32 _w2, s32 _w3) {
    Stack_80236290 stack;
    s32 temp_r0;
    s32 temp_r3;
    s32 var_r29;
    u32 temp_r3_2;
    VecCopy__FP3VecPC3Vec((void *) (&stack.sp8), (void *) (arg0 + 0x20));
    resetTechniqueContactQuery();
    if (arg1 == 0U) {
        return &lbl_80516150.value;
    }
    VecCopy__FP3VecPC3Vec((void *) (arg1 + 0x38), (void *) (&stack.sp8));
    var_r29 = 0;
loop_3:
    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C((int) (var_r29));
    if ((temp_r3 != 0) && (temp_r3_2 = find_actor_body_contact((void *) (arg1), (int) (temp_r3), (f32) (lbl_805DC89C)), ((temp_r3_2 == 0U) == 0)) && (M2C_FIELD(((u8 *)&lbl_80516150.value + (M2C_FIELD(&lbl_80516150.value, s32 *, 0x80) * 4)), u32 *, 0x40) = temp_r3_2, M2C_FIELD(&lbl_80516150.value, M2C_UNK *, (M2C_FIELD(&lbl_80516150.value, s32 *, 0x80) * 4)) = temp_r3, temp_r0 = M2C_FIELD(&lbl_80516150.value, s32 *, 0x80) + 1, M2C_FIELD(&lbl_80516150.value, s32 *, 0x80) = temp_r0, ((temp_r0 < 0x10) == 0))) {
        M2C_FIELD(&lbl_80516150.value, s32 *, 0x80) = 0xF;
    } else {
        var_r29 += 1;
        if (var_r29 < 4) {
            goto loop_3;
        }
    }
    return &lbl_80516150.value;
}

void TObjPlayer__sub_80236728(u8 *arg0, s32 arg1) {
    TObjPlayer__sub_80236378((void *) (arg0), (int) (M2C_FIELD(arg0, s32 *, 0xE8)), (void *) (arg0 + 0xBC), (void *) (arg1));
}

void TObjPlayer__sub_80236754(u8 *arg0, s32 arg1) {
    TObjPlayer__sub_802364D8((void *) (arg0), (int) (M2C_FIELD(arg0, s32 *, 0xE8)), (void *) (arg0 + 0xBC), (void *) (arg1));
}

void TObjPlayer__sub_80236780(u8 *arg0, s32 arg1) {
    TObjPlayer__sub_80236154((void *)((void *) (arg0)), (int)((int) (M2C_FIELD(arg0, s32 *, 0xdc))), (void *)((void *) (arg0 + 0xb0)), (void *)((void *) (arg1)));
}

void TObjPlayer__sub_802367AC(u8 *arg0, s32 arg1) {
    TObjPlayer__sub_80236290((s32)((void *) (arg0)), (u32)((int) (M2C_FIELD(arg0, s32 *, 0xdc))), (s32)((void *) (arg0 + 0xb0)), (s32)((void *) (arg1)));
}

void resetTechniqueContactQuery() {
    for (s32 i=0;i<16;++i) {
        (*(TechniqueContactList *)&lbl_80516150).actors[i]=0;
        (*(TechniqueContactList *)&lbl_80516150).bodies[i]=0;
    }
    (*(TechniqueContactList *)&lbl_80516150).count=0;
}

void* get_pos_ptr__10TObjPlayerFPv(void* p) { return (char*)p + 0x78; }

}
