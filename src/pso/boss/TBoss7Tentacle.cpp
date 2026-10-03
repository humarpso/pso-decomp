#include "pso/TBoss7Tentacle.h"

TBoss7Tentacle::~TBoss7Tentacle() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct V_802F0A5C { f32 x, y, z; };

struct Ten_802F0A5C { u8 pad0[0x50]; V_802F0A5C v[14]; u32 w[14]; };

struct V_802EFF24 { f32 x, y, z; };

struct Node_802EFF24 { u8 pad0[8]; V_802EFF24 pos; u8 pad14[8]; s32 ang; u8 pad20[0x18]; };

struct Tent_802EFF24 { u8 pad0[0x50]; V_802EFF24 pos[14]; s32 ang[14]; };

extern "C" {
u8 TBoss7Tentacle__sub_802F0904(u8 *arg0);
void TBoss7Tentacle__sub_802F09FC(u8 *arg0);
void TBoss7Tentacle__sub_802F0A14(u8 *arg0);
void TBoss7Tentacle__sub_802F0A2C(u8 *arg0);
void TBoss7Tentacle__sub_802F0A44(u8 *arg0);
void TBoss7Tentacle__sub_802F0AF0(u8 *arg0);
void TBoss7Tentacle__sub_802F0B58(u8 *arg0);
void VecCopy__FP3VecPC3Vec(void *, void *);
void TBoss7Tentacle__sub_802F0A14(u8 *arg0);
void TBoss7Tentacle__sub_802F0B08(u8 *arg0, u8 *arg1, s32 arg2);
extern const float TBoss7Tentacle__data_805DEC00;
extern const float TBoss7Tentacle__data_805DEC04;
extern const f32 lbl_805DEC34;
extern const f32 lbl_805DEC38;
void TBoss7Tentacle__sub_802F00D4(u8 *arg0);
void VecCopy__FP3VecPC3Vec(void *, void *);
extern V_802F0A5C TBoss7Tentacle__data_80541838[];
extern u32 lbl_805418E0[];
void TBoss7Tentacle__sub_802F0A5C(Ten_802F0A5C *o);
M2C_UNK draw_effect__10TObjPlayerFv();
M2C_UNK TBoss7Tentacle__sub_803D8A6C(int, int, int, int);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK TObjPlayer__sub_803D9730(int, int);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK scale_current_matrix(void *);
M2C_UNK post_translate_matrix(void *);
M2C_UNK draw_chunk_object(void *);
M2C_UNK draw_model_motion(void *, int, f32);
M2C_UNK set_global_flag__10TObjPlayerFv();
M2C_UNK clear_global_state__10TObjPlayerFv();
extern M2C_UNK lbl_80474070[];
extern Node_802EFF24 lbl_80541528[];
void render__14TBoss7TentacleFv(u8 *arg0);
}

extern "C" {

void TBoss7Tentacle__sub_802F0918(void* p);
void TBoss7Tentacle__sub_802F09B4(void* p);
void TBoss7Tentacle__sub_802F09C8(void* a0);
void TBoss7Tentacle__sub_802F09EC(void* p);
void TBoss7Tentacle__sub_802F0AD0(void* a0);
void TBoss7Tentacle__sub_802F0B70(void* p);
void TBoss7Tentacle__sub_802F0B80(void* p);
void TObjPlayer__sub_802F0D2C(void);
void reset_state__14TBoss7TentacleFPv(void* a0);
void setup_state__14TBoss7TentacleFPv(void* a0);
void switch_state__14TBoss7TentacleFPv(void *arg0);

void render__14TBoss7TentacleFv(u8 *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 var_ctr;
    s32 var_r3;
    s32 var_r4;
    s32 var_r5;
    u8 *temp_r7;
    u8 *temp_r8;
    draw_effect__10TObjPlayerFv();
    push_matrix();
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x30);
    switch (temp_r0) {
    case 0:
        set_global_flag__10TObjPlayerFv();
        TObjPlayer__sub_803D9730((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x130)));
        rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x13C)));
        scale_current_matrix((void *) ((u8 *)(arg0) + 0x24));
        draw_model_motion((void *) (M2C_FIELD(arg0, M2C_UNK **, 0x1C)), (int) (M2C_FIELD(arg0, s32 *, 0x20)), (f32) (M2C_FIELD(arg0, f32 *, 0x134)));
        clear_global_state__10TObjPlayerFv();
        break;
    case 1:
    case 4:
    case 5:
        set_global_flag__10TObjPlayerFv();
        TObjPlayer__sub_803D9730((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x130)));
        TBoss7Tentacle__sub_803D8A6C((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x140)), (int) (M2C_FIELD(arg0, s32 *, 0x13C)), (int) (0));
        scale_current_matrix((void *) ((u8 *)(arg0) + 0x24));
        draw_model_motion((void *) (M2C_FIELD(arg0, M2C_UNK **, 0x1C)), (int) (M2C_FIELD(arg0, s32 *, 0x20)), (f32) (M2C_FIELD(arg0, f32 *, 0x134)));
        clear_global_state__10TObjPlayerFv();
        break;
    case 2:
        TObjPlayer__sub_803D9730((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x130)));
        TBoss7Tentacle__sub_803D8A6C((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x140)), (int) (M2C_FIELD(arg0, s32 *, 0x13C)), (int) (0));
        scale_current_matrix((void *) ((u8 *)(arg0) + 0x24));
        draw_chunk_object((void *) (M2C_FIELD(arg0, M2C_UNK **, 0x1C)));
        break;
    case 3:
        post_translate_matrix((void *) ((u8 *)(arg0) + 0x40));
        scale_current_matrix((void *) (lbl_80474070));
        TBoss7Tentacle__sub_803D8A6C((int) (0), (int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x13C)), (int) (M2C_FIELD(arg0, s32 *, 0x140)));
        for (var_ctr = 0; var_ctr < 14; var_ctr++) {
            lbl_80541528[var_ctr].pos.x = ((Tent_802EFF24 *)arg0)->pos[var_ctr].x;
            lbl_80541528[var_ctr].pos.y = ((Tent_802EFF24 *)arg0)->pos[var_ctr].y;
            lbl_80541528[var_ctr].pos.z = ((Tent_802EFF24 *)arg0)->pos[var_ctr].z;
            lbl_80541528[var_ctr].ang = ((Tent_802EFF24 *)arg0)->ang[var_ctr];
        }
        scale_current_matrix((void *) ((u8 *)(arg0) + 0x24));
        draw_chunk_object((void *) (lbl_80541528));
        break;
    }
    pop_matrix();
}

#pragma push
#pragma opt_common_subs off
void TBoss7Tentacle__sub_802F00D4(u8 *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x3C) & 2) {
        M2C_FIELD(arg0, f32 *, 0x2C) = (f32) (M2C_FIELD(arg0, f32 *, 0x2C) - lbl_805DEC34);
        if (M2C_FIELD(arg0, f32 *, 0x2C) < (*(const f32 *)&TBoss7Tentacle__data_805DEC04)) {
            M2C_FIELD(arg0, f32 *, 0x2C) = (f32) (*(const f32 *)&TBoss7Tentacle__data_805DEC04);
        }
    } else {
        M2C_FIELD(arg0, f32 *, 0x2C) = (f32) (M2C_FIELD(arg0, f32 *, 0x2C) + lbl_805DEC38);
        if (M2C_FIELD(arg0, f32 *, 0x2C) > (*(const f32 *)&TBoss7Tentacle__data_805DEC00)) {
            M2C_FIELD(arg0, f32 *, 0x2C) = (f32) (*(const f32 *)&TBoss7Tentacle__data_805DEC00);
        }
    }
}
#pragma pop

void switch_state__14TBoss7TentacleFPv(void *arg0) {
    s32 state = M2C_FIELD(arg0, s32 *, 0x34);
    if (state != (s32) M2C_FIELD(arg0, s32 *, 0x30)) {
        switch (state) {
        case 0:
            TBoss7Tentacle__sub_802F09EC((void*)(arg0));
            break;
        case 1:
            TBoss7Tentacle__sub_802F09C8((void*)(arg0));
            break;
        case 4:
            TBoss7Tentacle__sub_802F09B4((void*)(arg0));
            break;
        case 2:
            setup_state__14TBoss7TentacleFPv((void*)(arg0));
            break;
        case 3:
            reset_state__14TBoss7TentacleFPv((void*)(arg0));
            break;
        case 5:
            TBoss7Tentacle__sub_802F0918((void*)(arg0));
            break;
        }
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) M2C_FIELD(arg0, s32 *, 0x34);
    }
}

u8 TBoss7Tentacle__sub_802F0904(u8 *arg0) {
    return (u8) (M2C_FIELD(arg0, s32 *, 0x30) == 4);
}

void TBoss7Tentacle__sub_802F0918(void* p) { *(s32*)((char*)p + 0x13c) = 0; *(s32*)((char*)p + 0x140) = 16384; }

    extern const float TBoss7Tentacle__data_805DEC00;
    extern const float TBoss7Tentacle__data_805DEC04;
    extern const float lbl_805DEC48;
void reset_state__14TBoss7TentacleFPv(void* a0) { *(int*)((char*)a0 + 0x13c) = 0; *(int*)((char*)a0 + 0x140) = 0; *(int*)((char*)a0 + 0x38) = 0; TBoss7Tentacle__sub_802F0A5C((Ten_802F0A5C *)(a0)); *(float*)((char*)a0 + 0x158) = lbl_805DEC48; *(int*)((char*)a0 + 0x164) = 0; *(float*)((char*)a0 + 0x15c) = TBoss7Tentacle__data_805DEC04; *(float*)((char*)a0 + 0x160) = TBoss7Tentacle__data_805DEC00; }

    extern int TBoss7Tentacle__data_8047407C[];
void setup_state__14TBoss7TentacleFPv(void* a0) { *(int*)((char*)a0 + 0x13c) = TBoss7Tentacle__data_8047407C[*(int*)((char*)a0 + 0x4c)]; *(int*)((char*)a0 + 0x140) = 16384; *(int*)((char*)a0 + 0x38) = 0; }

void TBoss7Tentacle__sub_802F09B4(void* p) { *(s32*)((char*)p + 0x13c) = 0; *(s32*)((char*)p + 0x140) = 16384; }

    extern int TBoss7Tentacle__data_8047407C[];
void TBoss7Tentacle__sub_802F09C8(void* a0) { *(int*)((char*)a0 + 0x13c) = TBoss7Tentacle__data_8047407C[*(int*)((char*)a0 + 0x4c)]; *(int*)((char*)a0 + 0x140) = 0; }

void TBoss7Tentacle__sub_802F09EC(void* p) { *(s32*)((char*)p + 0x140) = 0; *(s32*)((char*)p + 0x13c) = 0; }

void TBoss7Tentacle__sub_802F09FC(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x34) = 3;
    M2C_FIELD(arg0, s32 *, 0x3C) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C) & 0xFFFFFFFD);
}

void TBoss7Tentacle__sub_802F0A14(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x34) = 2;
    M2C_FIELD(arg0, s32 *, 0x3C) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C) & 0xFFFFFFFD);
}

void TBoss7Tentacle__sub_802F0A2C(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x34) = 4;
    M2C_FIELD(arg0, s32 *, 0x3C) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C) & 0xFFFFFFFD);
}

    extern const float lbl_805DEC5C;

void TBoss7Tentacle__sub_802F0A44(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, s32 *, 0x3C) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C) & 0xFFFFFFFD);
}

void TBoss7Tentacle__sub_802F0A5C(Ten_802F0A5C *o) {
    s32 i;
    for (i = 0; i < 14; i++) {
        VecCopy__FP3VecPC3Vec(&o->v[i], &TBoss7Tentacle__data_80541838[i]);
        o->w[i] = lbl_805418E0[i];
    }
}

void TBoss7Tentacle__sub_802F0AD0(void* a0) { *(float*)((char*)a0 + 0x138) = lbl_805DEC5C; *(int*)((char*)a0 + 0x144) = 3038; *(int*)((char*)a0 + 0x140) = 0; *(int*)((char*)a0 + 0x34) = 0; }

void TBoss7Tentacle__sub_802F0AF0(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x34) = 5;
    M2C_FIELD(arg0, s32 *, 0x3C) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C) & 0xFFFFFFFD);
}

void TBoss7Tentacle__sub_802F0B08(u8 *arg0, u8 *arg1, s32 arg2) {
    s32 var_r5;
    var_r5 = arg2;
    if ((var_r5 <= 0) || (var_r5 >= 0x258)) {
        var_r5 = 0x78;
    }
    M2C_FIELD(arg0, s32 *, 0x168) = var_r5;
    VecCopy__FP3VecPC3Vec(arg0 + 0x14C, arg1);
    TBoss7Tentacle__sub_802F0A14((u8 *)(arg0));
}

void TBoss7Tentacle__sub_802F0B58(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x34) = 1;
    M2C_FIELD(arg0, s32 *, 0x3C) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C) & 0xFFFFFFFD);
}

void TBoss7Tentacle__sub_802F0B70(void* p) { *(u32*)((char*)p + 0x3c) |= 0x2; }
void TBoss7Tentacle__sub_802F0B80(void* p) { *(u32*)((char*)p + 0x3c) &= 0xfffffffd; }

void TObjPlayer__sub_802F0D2C(void) {  }

}
