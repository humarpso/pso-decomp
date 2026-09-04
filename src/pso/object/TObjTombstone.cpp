#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render__13TObjTombstoneFv(s32 arg0);
s32 TWindowSubStatusDisp__sub_8006F190(M2C_UNK);
M2C_UNK TObjTombstone__sub_80075340(s32);
M2C_UNK TObjTombstone__sub_800753DC(s32);
M2C_UNK update_render_flags__13TObjTombstoneFPv(s32);
s32 check_height_ready__13TObjTombstoneFPv();

void render__13TObjTombstoneFv(s32 arg0) {
    s32 temp_r3;

    if (check_height_ready__13TObjTombstoneFPv() != 0) {
        update_render_flags__13TObjTombstoneFPv(arg0);
        temp_r3 = TWindowSubStatusDisp__sub_8006F190(-1);
        switch (temp_r3) {
        case 2:
        case 3:
            TObjTombstone__sub_80075340(arg0);
            break;
        default:
            TObjTombstone__sub_800753DC(arg0);
            break;
        }
    }
}

}
#else
#if PSO_CLASS_PACKAGE == 0x80074F58
#include "types.h"

extern "C" {

void copy_matrix__13TObjTombstoneFPvPv(void* p, void* q);

void copy_matrix__13TObjTombstoneFPvPv(void* p, void* q) { *(f32*)((char*)p + 0x0) = *(f32*)((char*)q + 0x0); *(f32*)((char*)p + 0x4) = *(f32*)((char*)q + 0x4); *(f32*)((char*)p + 0x8) = *(f32*)((char*)q + 0x8); *(f32*)((char*)p + 0xc) = *(f32*)((char*)q + 0xc); *(f32*)((char*)p + 0x10) = *(f32*)((char*)q + 0x10); *(f32*)((char*)p + 0x14) = *(f32*)((char*)q + 0x14); *(f32*)((char*)p + 0x18) = *(f32*)((char*)q + 0x18); *(f32*)((char*)p + 0x1c) = *(f32*)((char*)q + 0x1c); *(f32*)((char*)p + 0x20) = *(f32*)((char*)q + 0x20); *(f32*)((char*)p + 0x24) = *(f32*)((char*)q + 0x24); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80075764
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_render_flags__13TObjTombstoneFPv(u8 *arg0);
M2C_UNK PPCSync();
M2C_UNK TOComputerMachine01__sub_8023DDC8(void *, int, int, int, int);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjBoss2Tunnel__sub_803DB470(void *);
M2C_UNK set_global_param__8TObjFishFi(int);
M2C_UNK TObjPlayer__sub_803D9214(int, int);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();

extern u32 TObjTombstone__data_805D4E48;
extern s32 lbl_805D4E4C;

void update_render_flags__13TObjTombstoneFPv(u8 *arg0) {
    u8 *temp_r3;
    s32 *temp_r4;

    if ((u32) TObjTombstone__data_805D4E48 != 0U) {
        if ((s32) lbl_805D4E4C == 0) {
            TOComputerMachine01__sub_8023DDC8((void *) (M2C_FIELD(M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), void **, 0x2C), void **, 0x30), s32 *, 4)), (int) (-8), (int) (0), (int) (0), (int) (1));
            lbl_805D4E4C = 1;
            PPCSync();
        }
        temp_r3 = (unsigned char *) (M2C_FIELD(M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), void **, 0x2C), void **, 0x30), void **, 0x30));
        temp_r4 = M2C_FIELD(temp_r3, s32 **, 0x30);
        if (M2C_FIELD(arg0, s32 *, 0x230) & 0x10) {
            M2C_FIELD(temp_r3, s32 *, 0) = (s32) (M2C_FIELD(temp_r3, s32 *, 0) & 0xFFFFFFF7);
            *temp_r4 |= 8;
        } else {
            M2C_FIELD(temp_r3, s32 *, 0) = (s32) (M2C_FIELD(temp_r3, s32 *, 0) | 8);
            *temp_r4 &= 0xFFFFFFF7;
        }
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x38));
        TObjPlayer__sub_803D9214((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
        set_global_param__8TObjFishFi((int) (M2C_FIELD(arg0, s32 *, 0x24)));
        TObjBoss2Tunnel__sub_803DB470((void *) (M2C_FIELD(arg0, void **, 0x34)));
        TObjPlayer__sub_803D9B78();
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80075854
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 check_all_players_active__13TObjTombstoneFv(void);
s32 check_height_ready__13TObjTombstoneFPv(void *arg0);
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
s32 TWindowCtrlMain__sub_8024CE58();

s32 obj_testFlags30(u32, M2C_UNK);

s32 check_all_players_active__13TObjTombstoneFv(void) {
    s32 var_r31;
    u32 temp_r3;

    if (TWindowCtrlMain__sub_8024CE58() == 0) {
        return 0;
    }
    var_r31 = 0;
loop_3:
    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(var_r31);
    if ((temp_r3 != 0U) && (obj_testFlags30(temp_r3, 0x02000000) != 0)) {
        return 0;
    }
    var_r31 += 1;
    if (var_r31 >= 4) {
        return 1;
    }
    goto loop_3;
}

extern f32 lbl_805D91A4;

s32 check_height_ready__13TObjTombstoneFPv(void *arg0) {
    if (check_all_players_active__13TObjTombstoneFv() == 0) {
        return 0;
    }
    return (u32)__cntlzw(M2C_FIELD(arg0, f32 *, 0xB0) > lbl_805D91A4) >> 5;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80075DA8
#include "types.h"

extern "C" {

void init_parts__13TObjTombstoneFPv(void* p);
int TObjTombstone__sub_80075A00(void*);
int TObjTombstone__sub_80075AE8(void*);
int TObjTombstone__sub_80075B5C(void*);
int TObjTombstone__sub_80075BE0(void*);
int TObjTombstone__sub_80075C60(void*);
int TObjTombstone__sub_80075CB4(void*);

void init_parts__13TObjTombstoneFPv(void* p) { TObjTombstone__sub_80075CB4(p); TObjTombstone__sub_80075C60(p); TObjTombstone__sub_80075BE0(p); TObjTombstone__sub_80075B5C(p); TObjTombstone__sub_80075AE8(p); TObjTombstone__sub_80075A00(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80076218
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__dt__13TObjTombstoneFv(void *arg0, s16 arg1);
void run_task__13TObjTombstoneFv(void *arg0);
f32 TObjTombstone__sub_8007598C(void *);
M2C_UNK TObjTombstone__sub_80075DFC(void *);
s32 TObjTombstone__sub_80076098(void *);
M2C_UNK TObjTombstone__sub_80076190(void *);
void __dl__7TObjectFPv(void *);
s32 check_owner__13TObjTombstoneFPv();
void destroy_particle_controller__10TObjPlayerFPvs(void *, int);
M2C_UNK queue_destruction__7TObjectFv(void *);

extern s32 lbl_805D4E4C;

void run_task__13TObjTombstoneFv(void *arg0) {
    if (check_owner__13TObjTombstoneFPv() != 0) {
        queue_destruction__7TObjectFv(arg0);
        return;
    }
    M2C_FIELD(arg0, f32 *, 0xB0) = TObjTombstone__sub_8007598C(arg0);
    TObjTombstone__sub_80076190(arg0);
    if (TObjTombstone__sub_80076098(arg0) != 0) {
        TObjTombstone__sub_80075DFC(arg0);
    }
    M2C_FIELD(arg0, s32 *, 0x230) = (s32) (M2C_FIELD(arg0, s32 *, 0x230) + 1);
    lbl_805D4E4C = 0;
}

extern M2C_UNK __vt__13TObjTombstone[];

void *__dt__13TObjTombstoneFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TObjTombstone;
        destroy_particle_controller__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800762F0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void setup__13TObjTombstoneFPvii(u8 *arg0, s32 arg1, s32 arg2);
s32 TObjFish__sub_8001EDB0(s32, M2C_UNK);
s32 TObjFish__sub_8001EDC4(s32, M2C_UNK);
M2C_UNK TObjTombstone__sub_80076390(void *, s32);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK fn_80074E04(s32, void *);

extern s32 TObjTombstone__data_805D4E48;
extern const f32 TObjTombstone__data_805D9174;

void setup__13TObjTombstoneFPvii(u8 *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x24) = TObjFish__sub_8001EDB0(TObjTombstone__data_805D4E48, 0);
    M2C_FIELD(arg0, s32 *, 0x34) = TObjFish__sub_8001EDC4(TObjTombstone__data_805D4E48, 0);
    M2C_FIELD(arg0, s32 *, 0xAC) = arg1;
    TObjTombstone__sub_80076390(arg0 + 0xC0, arg2);
    VecCopy__FP3VecPC3Vec(arg0 + 0x38, arg0 + 0xD0);
    M2C_FIELD(arg0, s32 *, 0x60) = (s32) (M2C_FIELD(arg0, s32 *, 0xAC) << 0xD);
    M2C_FIELD(arg0, f32 *, 0xB0) = (f32) TObjTombstone__data_805D9174;
    M2C_FIELD(arg0, f32 *, 0xB4) = (f32) TObjTombstone__data_805D9174;
    M2C_FIELD(arg0, f32 *, 0xB8) = (f32) TObjTombstone__data_805D9174;
    M2C_FIELD(arg0, f32 *, 0xBC) = (f32) TObjTombstone__data_805D9174;
    M2C_FIELD(arg0, s32 *, 0x230) = 0;
    fn_80074E04(M2C_FIELD(arg0, s32 *, 0xAC), arg0 + 0x38);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800764E0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *init__13TObjTombstoneFPviii(void *arg0, s32 arg1, s32 arg2, s32 arg3);
M2C_UNK init_parts__13TObjTombstoneFPv(void *);
M2C_UNK setup__13TObjTombstoneFPvii(void *, s32, s32);
M2C_UNK TObjPlayer__sub_801569F4();

extern M2C_UNK __vt__13TObjTombstone[];
extern s32 lbl_805D289C;
extern u32 TObjTombstone__data_805D4E48;
extern s32 lbl_805D53A0;
extern s32 TLobby__data_805D53AC;

void *init__13TObjTombstoneFPviii(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    TObjPlayer__sub_801569F4();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TObjTombstone;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D289C;
    if ((u32) TObjTombstone__data_805D4E48 == 0U) {
        return arg0;
    }
    setup__13TObjTombstoneFPvii(arg0, arg2, arg3);
    init_parts__13TObjTombstoneFPv(arg0);
    M2C_FIELD(arg0, s32 *, 0x234) = 0;
    if ((s32) lbl_805D53A0 != (s32) TLobby__data_805D53AC) {
        M2C_FIELD(arg0, s32 *, 0x234) = 1;
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80076578
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void destroy__13TObjTombstoneFv(void);
M2C_UNK TObjTombstone__sub_80074FAC();
void TLobby__sub_8001FE7C(void*, int);

extern u32 TObjTombstone__data_805D4E48;

void destroy__13TObjTombstoneFv(void) {
    if ((u32) TObjTombstone__data_805D4E48 != 0U) {
        TLobby__sub_8001FE7C((void*)TObjTombstone__data_805D4E48, 1);
        TObjTombstone__data_805D4E48 = 0U;
        TObjTombstone__sub_80074FAC();
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8007666C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void * create__13TObjTombstoneFPvPvPv(void *arg0, void *arg1, void *arg2);
void *__nw__7TObjectFUl(int);
void *init__13TObjTombstoneFPviii(void *, void *, void *, void *);

void * create__13TObjTombstoneFPvPvPv(void *arg0, void *arg1, void *arg2) {
    void *o;
    o = __nw__7TObjectFUl(0x238);
    if (o != NULL) {
        o = init__13TObjTombstoneFPviii(o, arg0, arg1, arg2);
    }
    return o;
}

}
#endif
#endif
