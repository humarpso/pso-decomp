#include "pso/player/TObjPlayer.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Stack_801B6024 {
    M2C_UNK sp8;
    f32 spC;
    M2C_UNK sp10;
};

#include "types.h"

typedef struct Msg_801B6110 {
    u8 pad0[2];
    u16 slot;
    s32 andMask;
    s32 orMask;
} Msg_801B6110;

typedef struct Player_801B6110 {
    u8 pad0[0x30];
    s32 flags;
} Player_801B6110;

typedef struct Vec_801B5DDC { f32 x, y, z; } Vec_801B5DDC;

struct Hit_801B5DDC {
    u8 pad0[0x18];
    u32 flags;
    Vec_801B5DDC pos;
    u8 pad28[0x38 - 0x28];
};

struct Obj_801B5DDC {
    u8 pad0[0x38];
    Vec_801B5DDC pos;
    u8 pad44[0x308 - 0x44];
    Vec_801B5DDC f308;
};

struct Vec_801B5EA4 { f32 x, y, z; };

struct Pad_801B5EA4 { u8 pad[0x18]; };

struct Obj_801B5EA4 : Pad_801B5EA4 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual u32 v16(Vec_801B5EA4 *);
    u8 pad1c[0x38 - 0x1C];
    Vec_801B5EA4 pos;
    u8 pad44[0x308 - 0x44];
    Vec_801B5EA4 vel;
};

extern "C" {
s32 TObjPlayer__sub_801B58DC(u8 *arg0);
s32 is_flag_400_set__10TObjPlayerFPv();
s32 TObjPlayer__sub_801B58DC(u8 *arg0);
s32 refresh_effect__10TObjPlayerFi(s32 arg0);
s32 TWindowActionPalette__sub_801C1C80(s32, s32);
s32 TObjPlayer__sub_801B5920(s32 arg0, s32 arg1);
s32 refresh_effect__10TObjPlayerFi(s32 arg0);
s32 TWindowActionPalette__sub_801C1C80(s32, s32);
void TObjPlayer__sub_801B5990(s32 arg0, s32 arg1);
s32 refresh_effect__10TObjPlayerFi(s32 arg0);
M2C_UNK update_party_cursors__10TObjPlayerFii(s32, s32);
void TObjPlayer__sub_801B59C4(s32 arg0);
M2C_UNK TWindowActionPalette__sub_801C1CA8(s32, s32, s32, s32, s32);
void TObjPlayer__sub_801B59F8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
M2C_UNK TWindowActionPalette__sub_801C1CFC(s32, s32, s32, s32);
void TObjPlayer__sub_801B5A44(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
M2C_UNK TWindowActionPalette__sub_801C1D7C(s32, s32, s32);
void TObjPlayer__sub_801B5A88(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 refresh_effect__10TObjPlayerFi(s32 arg0);
M2C_UNK TWindowActionPalette__sub_801C1DB8(s32, s32);
s32 TObjPlayer__sub_801B5AC4(s32 arg0, s32 arg1);
s32 refresh_effect__10TObjPlayerFi(s32 arg0);
M2C_UNK TWindowActionPalette__sub_801C1E1C(s32, s32);
void TObjPlayer__sub_801B5AF8(s32 arg0, s32 arg1);
u8 *csnVectorUnder(M2C_UNK *, void *, M2C_UNK);
M2C_UNK TObjPlayer__sub_801BE918(void *, s32, M2C_UNK *, M2C_UNK *);
void TObjPlayer__sub_801B6024(u8 *arg0);
s32 TObjPlayer__sub_801B5AC4(s32 arg0, s32 arg1);
s32 TObjPlayer__sub_801B5874(u8 *arg0);
Player_801B6110 *get_player_by_client_id(s32);
void bswap_body_dwords__10TObjPlayerFi(void *);
void copy_pair_fields__10TObjPlayerFPvPv(void *, void *);
void TObjPlayer__sub_801C0C04(void *);
s32 validate_6x2E_set_or_clear_player_flags(void *);
void handle_6x2E_set_or_clear_player_flags(void *arg0);
s32 TObjPlayer__sub_801559D0(Obj_801B5DDC *, Obj_801B5DDC *, Vec_801B5DDC *, Hit_801B5DDC *);
f32 TObjPlayer__sub_803D89C0(Vec_801B5DDC *, Vec_801B5DDC *);
extern const f32 TObjPlayer__data_805DC278;
s32 TObjPlayer__sub_801B5DDC(Obj_801B5DDC *self);
M2C_UNK TObjPlayer__sub_8001053C(void *);
s32 TObjPlayer__sub_801B50C0(void *, f32 *);
u32 TObjPlayer__sub_801B7298(void *);
s32 TObjPlayer__sub_801BE8F4(void *, M2C_UNK, M2C_UNK);
s32 TObjPlayer__sub_801B5EA4(Obj_801B5EA4 *arg0);
}

extern "C" {

int TObjPlayer__sub_801B57E8(void);
void action_enable_if_present__10TObjPlayerFPv(void* p);
int check_flag_100__10TObjPlayerFPv(void* p);
s32 get_camera_field__10TObjPlayerFPv(void *arg0);
int has_valid_handle__10TObjPlayerFPv(void* p);
void init_parts__10TObjPlayerFPv(void* p);
s32 is_matching_id__10TObjPlayerFPvs(void *arg0, s16 arg1);
s32 refresh_effect__10TObjPlayerFi(s32 arg0);
void release_attached_resource__10TObjPlayerFPv(void* p);
void reset_equip_slots__10TObjPlayerFPv(void* p);
void update_ground_contact__10TObjPlayerFi(s32 arg0);
s32 TObjPlayer__sub_80019248();
int TObjPlayer__sub_8011E204(void*, void*);
int TObjPlayer__sub_801C1B38(void*);
int TObjPlayer__sub_801C1B60(void*);
s32 TObjPlayer__sub_801C1F50(s32);
int check_flag__10TObjPlayerFPvi(void*, int);
s32 fn_8002AE08(u16);
int fn_8019DD14(void*, void*);
int fn_8019DD24(void*, void*);
s32 fn_801C1E44(s32);
s32 fn_801C1E48(s32);
s32 fn_801C1E50(s32);
M2C_UNK fn_801C1E74(s32);
M2C_UNK fn_801C1EA4(s32);
M2C_UNK fn_801C1EC4(s32);
M2C_UNK fn_801C1EF4(s32);
int get_player_rank__18TChallenge4PResultFPv(void*);
int get_player_result__18TChallenge4PResultFPv(void*, void*);
s32 is_cursor_clear__11TMainCursorFPv(void *);
s32 is_flag_b0_4__10TObjPlayerFPv();
int is_handle_valid__10TObjPlayerFPv(void*);
s32 obj_getField1c(s32);
int set_state_flags__10TObjPlayerFPvUi(void*, void*);
s32 try_ground_action__10TObjPlayerFPvi(s32, s32);

int has_valid_handle__10TObjPlayerFPv(void* p) { return is_handle_valid__10TObjPlayerFPv(*(void**)((char*)p + 0x380)); }
int check_flag_100__10TObjPlayerFPv(void* p) { return check_flag__10TObjPlayerFPvi(p, 256); }
void init_parts__10TObjPlayerFPv(void* p) { fn_8019DD24((char*)p + 0x550, (void*)1030); get_player_rank__18TChallenge4PResultFPv(p); TObjPlayer__sub_8011E204(p, (void*)256); }
void reset_equip_slots__10TObjPlayerFPv(void* p) { fn_8019DD14((char*)p + 0x550, (void*)1030); get_player_result__18TChallenge4PResultFPv(p, (void*)0); get_player_result__18TChallenge4PResultFPv(p, (void*)1); get_player_result__18TChallenge4PResultFPv(p, (void*)2); get_player_result__18TChallenge4PResultFPv(p, (void*)3); set_state_flags__10TObjPlayerFPvUi(p, (void*)256); }
s32 get_camera_field__10TObjPlayerFPv(void *arg0) {
    void *p = M2C_FIELD(arg0, void **, 0x424);
    if (p != 0) {
        return is_cursor_clear__11TMainCursorFPv(p);
    }
    return 0;
}
void release_attached_resource__10TObjPlayerFPv(void* p) { void* m = *(void**)((char*)p + 0x424); if (m) TObjPlayer__sub_801C1B38(m); }
void action_enable_if_present__10TObjPlayerFPv(void* p) { void* m = *(void**)((char*)p + 0x424); if (m) TObjPlayer__sub_801C1B60(m); }

int TObjPlayer__sub_801B57E8(void) { return 0; }

s32 TObjPlayer__sub_801B5874(u8 *arg0) {
    if (M2C_FIELD(arg0, u32 *, 0x424) == 0U) {
        return 0;
    }
    switch ((u16) TObjPlayer__sub_801B5AC4((s32) arg0, 0)) {
    case 0:
    case 2:
        return 0;
    case 1:
    default:
        return 0;
    }
}

s32 TObjPlayer__sub_801B58DC(u8 *arg0) {
    if (((u32) M2C_FIELD(arg0, u32 *, 0x424) != 0U) && (((u16)TObjPlayer__sub_801B5AC4((s32)((void *)((void *)(arg0))), (s32)((int)((int) (0))))) != 0)) {
        return 1;
    }
    return 0;
}

#pragma push
#pragma fp_contract on
s32 TObjPlayer__sub_801B5920(s32 arg0, s32 arg1) {
    if (arg1 == 1) {
        if (is_flag_400_set__10TObjPlayerFPv() != 0) {
            return 1;
        }
        if (TObjPlayer__sub_801B58DC((u8 *)(arg0)) != 0) {
            return 1;
        }
        goto block_5;
    }
block_5:
    return TWindowActionPalette__sub_801C1C80(refresh_effect__10TObjPlayerFi(arg0), arg1);
}
#pragma pop

#pragma push
#pragma fp_contract on
void TObjPlayer__sub_801B5990(s32 arg0, s32 arg1) {
    TWindowActionPalette__sub_801C1C80(refresh_effect__10TObjPlayerFi(arg0), arg1);
}
#pragma pop

#pragma push
#pragma fp_contract on
void TObjPlayer__sub_801B59C4(s32 arg0) {
    update_party_cursors__10TObjPlayerFii(refresh_effect__10TObjPlayerFi(arg0), arg0);
}
#pragma pop

#pragma push
#pragma scheduling off
void TObjPlayer__sub_801B59F8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    TWindowActionPalette__sub_801C1CA8((s32)((TObjPlayer*)arg0)->select_action_palette(arg1), arg2, arg3, arg4, arg5);
}
#pragma pop

#pragma push
#pragma scheduling off
void TObjPlayer__sub_801B5A44(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    TWindowActionPalette__sub_801C1CFC((s32)((TObjPlayer*)arg0)->select_action_palette(arg1), arg2, arg3, arg4);
}
#pragma pop

#pragma push
#pragma scheduling off
void TObjPlayer__sub_801B5A88(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    TWindowActionPalette__sub_801C1D7C((s32)((TObjPlayer*)arg0)->select_action_palette(arg1), arg2, arg3);
}
#pragma pop

#pragma push
#pragma fp_contract on
s32 TObjPlayer__sub_801B5AC4(s32 arg0, s32 arg1) {
    return TWindowActionPalette__sub_801C1DB8(refresh_effect__10TObjPlayerFi(arg0), arg1);
}
#pragma pop

#pragma push
#pragma fp_contract on
void TObjPlayer__sub_801B5AF8(s32 arg0, s32 arg1) {
    TWindowActionPalette__sub_801C1E1C(refresh_effect__10TObjPlayerFi(arg0), arg1);
}
#pragma pop

}

TObjPlayer::ActionPalette* TObjPlayer::select_action_palette(int secondary) {
    if (secondary == 1) {
        return (ActionPalette*)fn_801C1E48((s32)action_palettes);
    }
    return (ActionPalette*)fn_801C1E44((s32)action_palettes);
}

extern "C" {
s32 refresh_effect__10TObjPlayerFi(s32 arg0) {
    if (TObjPlayer__sub_801C1F50(arg0 + 0x4AC) != 0) {
        if (fn_801C1E50(arg0 + 0x500) != 0) {
            return fn_801C1E44(arg0 + 0x500);
        }
        return fn_801C1E48(arg0 + 0x500);
    }
    return fn_801C1E44(arg0 + 0x500);
}

void update_ground_contact__10TObjPlayerFi(s32 arg0) {
    if (TObjPlayer__sub_80019248() != 0) {
        if (try_ground_action__10TObjPlayerFPvi(arg0 + 0x550, fn_8002AE08(obj_getField1c(arg0))) != 0) {
            fn_801C1EF4(arg0 + 0x500);
            if (TObjPlayer__sub_801C1F50(arg0 + 0x4AC) != 0) {
                fn_801C1EC4(arg0 + 0x500);
            }
        } else {
            fn_801C1EA4(arg0 + 0x500);
            if (TObjPlayer__sub_801C1F50(arg0 + 0x4AC) != 0) {
                fn_801C1E74(arg0 + 0x500);
            }
        }
        TObjPlayer__sub_801B59C4((s32)((s32)(arg0)));
    }
}

s32 TObjPlayer__sub_801B5DDC(Obj_801B5DDC *self) {
    Vec_801B5DDC pos;
    Vec_801B5DDC diff;
    Hit_801B5DDC hit;
    pos.x = self->pos.x + self->f308.x;
    pos.y = TObjPlayer__data_805DC278;
    pos.z = self->pos.z + self->f308.z;
    if (TObjPlayer__sub_801559D0(self, self, &pos, &hit) != 0) {
        if (hit.flags & 0x100) {
            return 0;
        }
        diff.x = pos.x - hit.pos.x;
        diff.y = TObjPlayer__data_805DC278;
        diff.z = pos.z - hit.pos.z;
        if (TObjPlayer__sub_803D89C0(&diff, &self->f308) < TObjPlayer__data_805DC278) {
            return 1;
        }
    }
    return 0;
}

s32 TObjPlayer__sub_801B5EA4(Obj_801B5EA4 *arg0) {
    Vec_801B5EA4 p;
    p.x = arg0->pos.x + arg0->vel.x;
    p.y = arg0->pos.y + arg0->vel.y;
    p.z = arg0->pos.z + arg0->vel.z;
    if (arg0->v16(&p) == 0U) {
        TObjPlayer__sub_8001053C(arg0);
        return 1;
    }
    if (TObjPlayer__sub_801B7298(arg0) != 0U) {
        TObjPlayer__sub_8001053C(arg0);
        return 2;
    }
    if ((TObjPlayer__sub_801BE8F4(arg0, 0, 0x380000) != 0) && (TObjPlayer__sub_801BE8F4(arg0, 0, 0x01C00000) != 0)) {
        TObjPlayer__sub_8001053C(arg0);
        return 4;
    }
    if (TObjPlayer__sub_801B50C0(arg0, &p.x) != 0) {
        TObjPlayer__sub_8001053C(arg0);
        return 3;
    }
    return 0;
}

void TObjPlayer__sub_801B6024(u8 *arg0) {
    Stack_801B6024 stack;
    s32 temp_r0;
    u8 *temp_r3;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x6AC) - 1;
    M2C_FIELD(arg0, s32 *, 0x6AC) = temp_r0;
    if (temp_r0 < 0) {
        M2C_FIELD(arg0, s32 *, 0x6AC) = 0xF;
    }
    TObjPlayer__sub_801BE918(arg0, M2C_FIELD(arg0, s32 *, 0x6AC), &stack.sp8, &stack.sp10);
    stack.spC = M2C_FIELD(arg0, f32 *, 0x3C);
    temp_r3 = csnVectorUnder(&stack.sp8, arg0 + 0x120, 0x41);
    if (temp_r3 != NULL) {
        M2C_FIELD(arg0, f32 *, 0x38) = (f32) M2C_FIELD(M2C_FIELD(temp_r3, void **, 4), f32 *, 0);
        M2C_FIELD(arg0, f32 *, 0x3C) = (f32) M2C_FIELD(M2C_FIELD(temp_r3, void **, 4), f32 *, 4);
        M2C_FIELD(arg0, f32 *, 0x40) = (f32) M2C_FIELD(M2C_FIELD(temp_r3, void **, 4), f32 *, 8);
    }
}

s32 is_matching_id__10TObjPlayerFPvs(void *arg0, s16 arg1) {
    if ((is_flag_b0_4__10TObjPlayerFPv() != 0) && (arg1 == (s16) M2C_FIELD(arg0, s16 *, 0xBC))) {
        return 1;
    }
    return 0;
}
void handle_6x2E_set_or_clear_player_flags(void *arg0) {
    Msg_801B6110 m;
    Player_801B6110 *p;
    TObjPlayer__sub_801C0C04(&m);
    copy_pair_fields__10TObjPlayerFPvPv(&m, arg0);
    bswap_body_dwords__10TObjPlayerFi(&m);
    if (validate_6x2E_set_or_clear_player_flags(&m) != 0) {
        p = get_player_by_client_id(m.slot);
        if (p != NULL) {
            p->flags = p->flags & m.andMask;
            p->flags = p->flags | m.orMask;
        }
    }
}

}
