#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjEnePanarms__sub_800E1C8C(void *arg0, s32 arg1, s32 arg2);

void TObjEnePanarms__sub_800E1C8C(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x39C) = arg1;
    M2C_FIELD(arg0, s32 *, 0x3A0) = arg2;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x8002AE74
#include "types.h"

extern "C" {

void bswap_6x12_packet__10TObjPlayerFPv(void* p);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
int read_be16_field2__10TObjPlayerFPv(void*);
void bswap_dragon_boss_fields__10TObjPlayerFPv(void* p);
void bswap_stats__10TObjPlayerFPv(void* p);
void send_6x12_packet__10TObjPlayerFPv(void* p);
int TLobby__send_and_handle_60(void*);
f32 get_random_float__21TObjEneMe3ShinowaRealFv(void);
f64 TWindowSubComCard__sub_803A24E4();
int get_flag_b4__21TObjEneMe3ShinowaRealFPv(void* p);
int test_card_flag_2__12TBoss8DragonFPv(void* p);
void set_speed__12TBoss8DragonFPvf(void* p, f32 v);
void set_field_b8__14TObjEnePanarmsFPvs(void* p, s16 v);
void set_field_dc__10TObjPlayerFPvi(void* p, s32 v);
void set_field_d8__10TObjPlayerFPvi(void* p, s32 v);
void reset_lobby_model__10TObjPlayerFPv(void* p);
void reset_type__10TObjPlayerFPv(void* p);
void set_type__10TObjPlayerFPvi(void* p, s32 v);
void set_type_dragon__10TObjPlayerFPv(void* p);
int test_card_flag__19TWindowKeyBoardHardFii(void*, int);

void set_field_b8__14TObjEnePanarmsFPvs(void* p, s16 v) { *(s16*)((char*)p + 0xb8) = v; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800DCEB8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_spin__14TObjEnePanarmsFPv(void *arg0);
M2C_UNK TObjEnePanarms__sub_800DED30(void *, s32);

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
        TObjEnePanarms__sub_800DED30(arg0, 7);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800DD080
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_timed_action__14TObjEnePanarmsFPv(u8 *arg0);
M2C_UNK TObjEnePanarms__sub_800DED30(void *, M2C_UNK);
s32 TObjEnePanarms__sub_800DFB44(s32);
M2C_UNK copy_target_state__14TObjEnePanarmsFPvPv(void *, M2C_UNK);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, void *, M2C_UNK, M2C_UNK);

void update_timed_action__14TObjEnePanarmsFPv(u8 *arg0) {
    s32 temp_r0;

    if ((TObjEnePanarms__sub_800DFB44(M2C_FIELD(arg0, s32 *, 0x3E4)) != 0) || (TObjEnePanarms__sub_800DFB44(M2C_FIELD(arg0, s32 *, 0x3E8)) != 0)) {
        TObjEnePanarms__sub_800DED30(arg0, 0xA);
        return;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x388) - 1;
    M2C_FIELD(arg0, s32 *, 0x388) = temp_r0;
    if (temp_r0 <= 0) {
        TObjEnePanarms__sub_800DED30(arg0, 0xC);
        return;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x388) == 0x13) {
        TBoss3Volopt__sub_8022675C(copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x4003BC32), arg0 + 0x38, 0, 0);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800DE1E4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_state__14TObjEnePanarmsFPv(u8 *arg0);
M2C_UNK TObjEnePanarms__sub_800DECC4(void *);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK obj_setFlags30(void *, int, f32);

extern const f32 lbl_805DA4E0;

void init_state__14TObjEnePanarmsFPv(u8 *arg0) {
    u8 *temp_r4;
    u8 *temp_r4_2;

    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x38), (void *) (arg0 + 0x50));
    TObjEnePanarms__sub_800DECC4((void *) (arg0));
    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) (lbl_805DA4E0 + M2C_FIELD(arg0, f32 *, 0x384));
    obj_setFlags30((void *) (arg0), (int) (0x04040000), (f32) (lbl_805DA4E0));
    temp_r4 = (unsigned char *) (M2C_FIELD(arg0, void **, 0x390));
    M2C_FIELD(temp_r4, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r4, s32 *, 0x18) & 0xFFFFFFFE);
    temp_r4_2 = (unsigned char *) (M2C_FIELD(arg0, void **, 0x390));
    M2C_FIELD(temp_r4_2, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r4_2, s32 *, 0x18) | 0x08000000);
    M2C_FIELD(arg0, s32 *, 0x3E0) = 0;
    M2C_FIELD(arg0, s32 *, 0x3DC) = 0;
    M2C_FIELD(arg0, s32 *, 0x388) = (s32) M2C_FIELD(arg0, s32 *, 0x478);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800DE270
#include "types.h"

extern "C" {

int check_demo_mode__10TObjPlayerFv(void*);
int TObjEnePanarms__sub_800DED30(void*, void*);
void try_activate__14TObjEnePanarmsFPv(void* p);
void set_state__14TObjEnePanarmsFPv(void* p);
void TObjEnePanarms__sub_800DE2B0(void* p);
void TObjEnePanarms__sub_800DE2C0(void* p);

void try_activate__14TObjEnePanarmsFPv(void* p) { if (check_demo_mode__10TObjPlayerFv(p) == 0) { TObjEnePanarms__sub_800DED30(p, (void*)1); } }
void TObjEnePanarms__sub_800DE2B0(void* p) { *(s32*)((char*)p + 0x3e0) = 1; *(s32*)((char*)p + 0x3dc) = 1; }
void TObjEnePanarms__sub_800DE2C0(void* p) { *(u32*)((char*)p + 0x30) &= 0xfffffeff; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800DE360
#include "types.h"

extern "C" {

int check_demo_mode__10TObjPlayerFv(void*);
int TObjEnePanarms__sub_800DED30(void*, void*);
void try_activate__14TObjEnePanarmsFPv(void* p);
void set_state__14TObjEnePanarmsFPv(void* p);
void TObjEnePanarms__sub_800DE2B0(void* p);
void TObjEnePanarms__sub_800DE2C0(void* p);

void set_state__14TObjEnePanarmsFPv(void* p) { if (*(int*)((char*)p + 0x374) != 4) { TObjEnePanarms__sub_800DED30(p, (void*)4); } }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800DEEF8
#include "types.h"

extern "C" {

void TObjEnePanarms__sub_800DEEF8(void* p);
int TOHangerMachine01__sub_803D9C00(void*);
int draw__16TObjEneRe7BeruraFPv(void*);
int clear_render_callback__8TObjFishFv(void*);
int TObjFish__sub_800E3074(void*);
int TObjPlayer__sub_803D9214(void*, void*);
int TObjPlayer__sub_803D9B2C(void*);
int TObjPlayer__sub_803D9B78(void);
int set_global_param__8TObjFishFi(void*);

void TObjEnePanarms__sub_800DEEF8(void* p) { TObjPlayer__sub_803D9B2C(p); TOHangerMachine01__sub_803D9C00((char*)p + 0x38); TObjPlayer__sub_803D9214((void*)0, *(void**)((char*)p + 0x60)); set_global_param__8TObjFishFi(*(void**)((char*)p + 0x24)); TObjFish__sub_800E3074(*(void**)((char*)p + 0x39c)); draw__16TObjEneRe7BeruraFPv(p); clear_render_callback__8TObjFishFv(*(void**)((char*)p + 0x39c)); TObjPlayer__sub_803D9B78(); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800DF5FC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_data__14TObjEnePanarmsFv(void);
void TLobby__sub_8001FE7C(void*, int);

extern u32 TObjEnePanarms__data_805D5278;

void free_data__14TObjEnePanarmsFv(void) {
    if ((u32) TObjEnePanarms__data_805D5278 != 0U) {
        TLobby__sub_8001FE7C((void*)TObjEnePanarms__data_805D5278, 1);
        TObjEnePanarms__data_805D5278 = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800DF6E0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 create__14TObjEnePanarmsFi(s32 arg0);
s32 TObjControl__ct(s32, s32);
s32 TObjEnePanarms__ct(s32, s32, s32);
s32 __nw__7TObjectFUl(M2C_UNK);

extern s32 tl_04;

s32 create__14TObjEnePanarmsFi(s32 arg0) {
    s32 var_r31;
    s32 var_r4;

    var_r31 = __nw__7TObjectFUl(0x47C);
    if (var_r31 != 0) {
        var_r4 = __nw__7TObjectFUl(0x20);
        if (var_r4 != 0) {
            var_r4 = TObjControl__ct(var_r4, tl_04);
        }
        var_r31 = TObjEnePanarms__ct(var_r31, var_r4, arg0);
    }
    return var_r31;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800DFB00
#include "types.h"

extern "C" {

int fn_8002AE64(void*);
int fn_800660B8(void*);
int TObjPlayer__sub_80143198(void*, void*);
int get_state_flag__14TObjEnePanarmsFPv(void* p);
int TObjEnePanarms__sub_800DFBC4(void* p);

void init__14TObjEnePanarmsFPvPv(void* p, void* a1) { fn_800660B8(p); TObjPlayer__sub_80143198(p, a1); fn_8002AE64(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800DFB68
#include "types.h"

extern "C" {

int fn_8002AE64(void*);
int fn_800660B8(void*);
int TObjPlayer__sub_80143198(void*, void*);
int get_state_flag__14TObjEnePanarmsFPv(void* p);
int TObjEnePanarms__sub_800DFBC4(void* p);

int get_state_flag__14TObjEnePanarmsFPv(void* p) { return (*(u32*)((char*)p + 0x30) >> 4) & 0x1; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800DFBC4
#include "types.h"

extern "C" {

int fn_8002AE64(void*);
int fn_800660B8(void*);
int TObjPlayer__sub_80143198(void*, void*);
int get_state_flag__14TObjEnePanarmsFPv(void* p);
int TObjEnePanarms__sub_800DFBC4(void* p);

int TObjEnePanarms__sub_800DFBC4(void* p) { return (*(u32*)((char*)p + 0x30) >> 4) & 0x1; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800DFCD8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_action_timer__14TObjEnePanarmsFPv(void *arg0);
M2C_UNK set_field_b8__14TObjEnePanarmsFPvs(void *, M2C_UNK);
M2C_UNK TObjEnePanarms__sub_800E1C98(void *, M2C_UNK);
s32 TObjPlayer__sub_80141F84(s32, s32);
s32 TObjPlayer__sub_801423A4(s32, s32, M2C_UNK);

void update_action_timer__14TObjEnePanarmsFPv(void *arg0) {
    s32 temp_r0;
    s32 temp_r3;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x3B4) - 1;
    M2C_FIELD(arg0, s32 *, 0x3B4) = temp_r0;
    if (temp_r0 < 0) {
        TObjEnePanarms__sub_800E1C98(arg0, 2);
        return;
    }
    temp_r3 = M2C_FIELD(arg0, s32 *, 0x60);
    M2C_FIELD(arg0, s32 *, 0x60) = TObjPlayer__sub_801423A4(M2C_FIELD(arg0, s32 *, 0x60), M2C_FIELD(arg0, s32 *, 0x3D4), 0x888);
    if (TObjPlayer__sub_80141F84(temp_r3, M2C_FIELD(arg0, s32 *, 0x60)) == 0) {
        set_field_b8__14TObjEnePanarmsFPvs(arg0, 0);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800DFD54
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_attack_state__14TObjEnePanarmsFPv(void *arg0);
s32 TBoss4Type2__sub_80141FA8(s32, s32);
M2C_UNK set_field_b8__14TObjEnePanarmsFPvs(void *, M2C_UNK);
s32 TObjPlayer__sub_80141F84(s32, s32, void *);

extern const f32 TObjEnePanarms__data_805DA524;

void init_attack_state__14TObjEnePanarmsFPv(void *arg0) {
    void *temp_r5;

    temp_r5 = M2C_FIELD(arg0, void **, 0x37C);
    M2C_FIELD(temp_r5, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r5, s32 *, 0x18) | 1);
    M2C_FIELD(arg0, s32 *, 0x384) = 1;
    M2C_FIELD(arg0, s32 *, 0x388) = 1;
    M2C_FIELD(arg0, f32 *, 0x3B0) = (f32) TObjEnePanarms__data_805DA524;
    M2C_FIELD(arg0, s32 *, 0x3B4) = 0x3C;
    M2C_FIELD(arg0, s32 *, 0x3C4) = 1;
    if (TObjPlayer__sub_80141F84(M2C_FIELD(arg0, s32 *, 0x60), M2C_FIELD(arg0, s32 *, 0x3D4), temp_r5) < 0x2000) {
        if (TBoss4Type2__sub_80141FA8(M2C_FIELD(arg0, s32 *, 0x60), M2C_FIELD(arg0, s32 *, 0x3D4)) >= 0) {
            M2C_FIELD(arg0, s32 *, 0x60) = (s32) (M2C_FIELD(arg0, s32 *, 0x3D4) - 0x2000);
        } else {
            M2C_FIELD(arg0, s32 *, 0x60) = (s32) (M2C_FIELD(arg0, s32 *, 0x3D4) + 0x2000);
        }
    }
    M2C_FIELD(arg0, s32 *, 0xB0) = (s32) (M2C_FIELD(arg0, s32 *, 0xB0) & 0xFFFFFFFE);
    set_field_b8__14TObjEnePanarmsFPvs(arg0, 2);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800DFF44
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_move_timer__14TObjEnePanarmsFPv(u8 *arg0);
s32 TObjEnePanarms__sub_800DFB44(s32);
M2C_UNK TObjEnePanarms__sub_800E1C98(void *, M2C_UNK);
M2C_UNK copy_target_state__14TObjEnePanarmsFPvPv(void *, M2C_UNK);
s32 TObjPlayer__sub_801423A4(s32, s32, M2C_UNK);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, void *, M2C_UNK, M2C_UNK);

void update_move_timer__14TObjEnePanarmsFPv(u8 *arg0) {
    s32 temp_r0;

    if ((TObjEnePanarms__sub_800DFB44(M2C_FIELD(arg0, s32 *, 0x3A0)) != 0) || (M2C_FIELD(arg0, s32 *, 0xB0) & 0x10)) {
        TObjEnePanarms__sub_800E1C98(arg0, 0xA);
        return;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x3B4) - 1;
    M2C_FIELD(arg0, s32 *, 0x3B4) = temp_r0;
    if (temp_r0 == 0) {
        TBoss3Volopt__sub_8022675C(copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x4003B72F), arg0 + 0x38, 0, 0);
    }
    M2C_FIELD(arg0, s32 *, 0x60) = TObjPlayer__sub_801423A4(M2C_FIELD(arg0, s32 *, 0x60), M2C_FIELD(arg0, s32 *, 0x3D4) - 0x800, 0x200);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800E03DC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_attack__14TObjEnePanarmsFPv(u8 *arg0);
void init_attack_state2__14TObjEnePanarmsFPv(void* a0);
M2C_UNK TObjEnePanarms__sub_800E1608(void *, s32);
u8 *TPhotonMylla__sub_80154CB4(u16);
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32, f32);
int set_field_b8__14TObjEnePanarmsFPvs(void*, int);
M2C_UNK TObjEnePanarms__sub_800E1C98(void *, M2C_UNK);
M2C_UNK copy_target_state__14TObjEnePanarmsFPvPv(void *, M2C_UNK);
s32 TObjPlayer__sub_801423A4(s32, s32, M2C_UNK);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, void *, M2C_UNK, M2C_UNK);

extern s32 lbl_8043CDA0[];
extern const f64 TObjEnePanarms__data_8043CDD0;
extern const f32 TObjEnePanarms__data_805DA544;

void update_attack__14TObjEnePanarmsFPv(u8 *arg0) {
    f32 temp_f3;
    s32 temp_r0;
    u8 *temp_r3;

    temp_r3 = TPhotonMylla__sub_80154CB4((u16) M2C_FIELD(arg0, s32 *, 0x3B8));
    if ((temp_r3 == NULL) || (M2C_FIELD(temp_r3, s32 *, 0x30) & 0x02000800)) {
        TObjEnePanarms__sub_800E1C98(arg0, 2);
        return;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x3B4) - 1;
    M2C_FIELD(arg0, s32 *, 0x3B4) = temp_r0;
    if (temp_r0 == 0) {
        TObjEnePanarms__sub_800E1608(arg0, M2C_FIELD(arg0, s32 *, 0x3B8));
        TBoss3Volopt__sub_8022675C(copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x4003B72F), arg0 + 0x38, 0, 0);
    }
    if (M2C_FIELD(arg0, f32 *, 0xC0) < TObjEnePanarms__data_805DA544) {
        temp_f3 = M2C_FIELD(temp_r3, f32 *, 0x38);
        M2C_FIELD(arg0, s32 *, 0x60) = TObjPlayer__sub_801423A4(M2C_FIELD(arg0, s32 *, 0x60), lbl_8043CDA0[M2C_FIELD(arg0, s32 *, 0x380)] + (s32) (TObjEnePanarms__data_8043CDD0 * get_ad_end_text_start__10TObjPlayerFv(temp_f3 - M2C_FIELD(arg0, f32 *, 0x38), M2C_FIELD(temp_r3, f32 *, 0x40) - M2C_FIELD(arg0, f32 *, 0x40), temp_f3)), 0x200);
    }
    if (M2C_FIELD(arg0, s32 *, 0xB0) & 0x10) {
        TObjEnePanarms__sub_800E1C98(arg0, 0xA);
    }
}

    extern const float TObjEnePanarms__data_805DA524;
void init_attack_state2__14TObjEnePanarmsFPv(void* a0) {
    int *r7 = *(int**)((char*)a0 + 0x37c);
    r7[6] = r7[6] | 0x1;
    *(int*)((char*)a0 + 0x384) = 1;
    *(int*)((char*)a0 + 0x388) = 1;
    *(float*)((char*)a0 + 0x3b0) = TObjEnePanarms__data_805DA524;
    *(int*)((char*)a0 + 0x3b4) = 12;
    *(int*)((char*)a0 + 0xb0) = (*(int*)((char*)a0 + 0xb0) & 0xfffffffe);
    set_field_b8__14TObjEnePanarmsFPvs(a0, 3);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800E066C
#include "types.h"

extern "C" {

void init_action__14TObjEnePanarmsFPv(void* a0);
void set_field_b8__14TObjEnePanarmsFPvs(void*, s32);
void TObjEnePanarms__sub_800E2EF0(void*, s32, s32);

    extern const float TObjEnePanarms__data_805DA524;
void init_action__14TObjEnePanarmsFPv(void* a0) {
    void* t = *(void**)((char*)a0 + 0x37c);
    *(int*)((char*)t + 0x18) = (*(int*)((char*)t + 0x18) | 0x1);
    TObjEnePanarms__sub_800E2EF0(a0, 0xf, 0x1e);
    *(int*)((char*)a0 + 0x384) = 1;
    *(int*)((char*)a0 + 0x388) = 1;
    *(float*)((char*)a0 + 0x3b0) = TObjEnePanarms__data_805DA524;
    *(int*)((char*)a0 + 0xb0) = (*(int*)((char*)a0 + 0xb0) & 0xfffffffe);
    set_field_b8__14TObjEnePanarmsFPvs(a0, 2);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800E092C
#include "types.h"

extern "C" {

void TObjEnePanarms__sub_800E092C(void);

void TObjEnePanarms__sub_800E092C(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800E0B6C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void apply_effect_if_flagged__14TObjEnePanarmsFPv(void *arg0);
M2C_UNK TObjEnePanarms__sub_800E1C98(void *, s32);

void apply_effect_if_flagged__14TObjEnePanarmsFPv(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0xB0) & 0x10) {
        TObjEnePanarms__sub_800E1C98(arg0, M2C_FIELD(arg0, s32 *, 0x374));
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800E0C50
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_hit_state__14TObjEnePanarmsFPv(void *arg0);
s32 TObjEnePanarms__sub_800DFB44(s32);
M2C_UNK TObjEnePanarms__sub_800E1C98(void *, M2C_UNK);

void update_hit_state__14TObjEnePanarmsFPv(void *arg0) {
    if (TObjEnePanarms__sub_800DFB44(M2C_FIELD(arg0, s32 *, 0x3A0)) != 0) {
        TObjEnePanarms__sub_800E1C98(arg0, 2);
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 0xB0) & 0x10) {
        TObjEnePanarms__sub_800E1C98(arg0, 0);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800E13DC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void start_action__14TObjEnePanarmsFPv(void *arg0);
void handle_split_flag__14TObjEnePanarmsFPv(void *arg0);
void init_split__14TObjEnePanarmsFPv(void *arg0);
M2C_UNK TObjEnePanarms__sub_800E1B50();
M2C_UNK set_field_b8__14TObjEnePanarmsFPvs(void *, M2C_UNK);
M2C_UNK TObjEnePanarms__sub_800E1C98(void *, M2C_UNK);
M2C_UNK TObjEnePanarms__sub_800E2DE4(void *, M2C_UNK);
M2C_UNK TObjEnePanarms__sub_800E2EF0(void *, M2C_UNK, M2C_UNK);

void start_action__14TObjEnePanarmsFPv(void *arg0) {
    void *temp_r4;

    TObjEnePanarms__sub_800E2EF0(arg0, 0xF, 0x3C);
    temp_r4 = M2C_FIELD(arg0, void **, 0x37C);
    M2C_FIELD(temp_r4, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r4, s32 *, 0x18) | 1);
    M2C_FIELD(arg0, s32 *, 0x388) = 1;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x374) == 1) {
        M2C_FIELD(arg0, s32 *, 0xB0) = (s32) (M2C_FIELD(arg0, s32 *, 0xB0) | 1);
    } else {
        M2C_FIELD(arg0, s32 *, 0xB0) = (s32) (M2C_FIELD(arg0, s32 *, 0xB0) & 0xFFFFFFFE);
    }
    set_field_b8__14TObjEnePanarmsFPvs(arg0, 0);
}

void handle_split_flag__14TObjEnePanarmsFPv(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0xB0) & 0x10) {
        TObjEnePanarms__sub_800E1B50();
        TObjEnePanarms__sub_800E1C98(arg0, 2);
    }
}

void init_split__14TObjEnePanarmsFPv(void *arg0) {
    s16 temp_r5;
    void *temp_r7;

    temp_r7 = M2C_FIELD(arg0, void **, 0x37C);
    M2C_FIELD(temp_r7, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r7, s32 *, 0x18) & 0xFFFFFFFE);
    M2C_FIELD(arg0, s32 *, 0x384) = 1;
    M2C_FIELD(arg0, s32 *, 0x388) = 0;
    temp_r5 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x39C), s16 *, 0x32C);
    M2C_FIELD(arg0, s16 *, 0x32C) = (s16) ((s32) (temp_r5 + 1) / 2);
    M2C_FIELD(arg0, s32 *, 0x3BC) = (s32) M2C_FIELD(arg0, s16 *, 0x32C);
    M2C_FIELD(arg0, s32 *, 0x3C0) = 0;
    TObjEnePanarms__sub_800E2DE4(arg0, 0x10);
    M2C_FIELD(arg0, s32 *, 0xB0) = (s32) (M2C_FIELD(arg0, s32 *, 0xB0) | 1);
    set_field_b8__14TObjEnePanarmsFPvs(arg0, 9);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800E158C
#include "types.h"

extern "C" {

void reset_state__14TObjEnePanarmsFPv(void* a0);

    extern const float TObjEnePanarms__data_805DA524;
void reset_state__14TObjEnePanarmsFPv(void* a0) { *(int*)((char*)*(int*)((char*)a0 + 0x37c) + 0x18) = (*(int*)((char*)*(int*)((char*)a0 + 0x37c) + 0x18) & 0xfffffffe); *(float*)((char*)a0 + 0x3b0) = TObjEnePanarms__data_805DA524; *(int*)((char*)a0 + 0x384) = 0; *(int*)((char*)a0 + 0x388) = 0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800E1D38
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
struct Base_800E1D38 { char pad[0x18]; };
struct VObj_800E1D38 : Base_800E1D38 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17();
    virtual void m18();
    virtual void m19();
    virtual void m20();
    virtual void m21();
    virtual void m22();
    virtual void m23();
    virtual void m24();
    virtual void m25();
    virtual void m26();
    virtual void m27();
    virtual void m28();
    virtual void m29();
    virtual void m30();
    virtual void m31();
    virtual void m32();
    virtual void m33();
    virtual void m34();
    virtual void m35();
    virtual void m36();
    virtual void m37();
    virtual void m38();
    virtual void m39();
    virtual void m40();
    virtual void m41();
    virtual void m42();
    virtual void m43();
    virtual void m44();
    virtual void m45();
    virtual void m46();
    virtual void m47();
    virtual void m48();
    virtual void m49();
    virtual void m50();
    virtual void m51();
    virtual void m52();
    virtual void m53();
    virtual void m54();
    virtual void m55();
    virtual void m56();
    virtual void m57();
    virtual void m58();
    virtual void m59();
    virtual void m60();
    virtual void m61();
};

extern "C" {

void TObjEnePanarms__sub_800E1D38(void *arg0);

void TObjEnePanarms__sub_800E1D38(void *arg0) {
    struct VObj_800E1D38 *o = (struct VObj_800E1D38 *)arg0;
    o->m61();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800E1D64
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjEnePanarms__sub_800E1A44();
int TObjEnePanarms__sub_800E1D94(void* p);
int do_action_2__14TObjEnePanarmsFPv(void* p);
void TObjEnePanarms__sub_800E1E64(void* p);
int TObjEnePanarms__sub_800E1C98(void*, int);

void reset_split__14TObjEnePanarmsFPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x378) != 0) {
        TObjEnePanarms__sub_800E1C98((void*)(arg0), 0);
    }
}
int TObjEnePanarms__sub_800E1D94(void* p) { return TObjEnePanarms__sub_800E1C98(p, 5); }
int do_action_2__14TObjEnePanarmsFPv(void* p) { return TObjEnePanarms__sub_800E1C98(p, 2); }
void init_state__14TObjEnePanarmsFi(s32 arg0) {
    TObjEnePanarms__sub_800E1A44();
    TObjEnePanarms__sub_800E1C98((void*)(arg0), 3);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800E1E64
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjEnePanarms__sub_800E1A44();
int TObjEnePanarms__sub_800E1D94(void* p);
int do_action_2__14TObjEnePanarmsFPv(void* p);
void TObjEnePanarms__sub_800E1E64(void* p);
int TObjEnePanarms__sub_800E1C98(void*, int);

void TObjEnePanarms__sub_800E1E64(void* p) { *(u32*)((char*)p + 0x30) &= 0xfffffeff; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800E1F98
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_linked_effect__14TObjEnePanarmsFPv(u8 *arg0);
M2C_UNK TBoss1Dragon__sub_8014220C(void *, void *, void *);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *, f32);
M2C_UNK TOMonitorMachine01__sub_803D8B5C(int, f32, f32, f32);
M2C_UNK TObjBoss2Tunnel__sub_803D929C(int, int);
M2C_UNK TObjContainerIdo__sub_803D96A8(int, void *);
M2C_UNK TObjPlayer__sub_800F09E8(int);
s32 TObjPlayer__sub_80156844(void *, void *, void *);
M2C_UNK TObjPlayer__sub_803D9214(int, int);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);

extern const f32 TObjEnePanarms__data_805DA530;
extern const f32 lbl_805DA58C;
extern const f32 lbl_805DA590;

void update_linked_effect__14TObjEnePanarmsFPv(u8 *arg0) {
    struct { u8 b[0x10]; } sp10;
    s32 spC;
    s32 sp8;
    f32 temp_f1;
    s32 temp_r0;

    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x3A4), (void *) (arg0 + 0x3E0));
    if (TObjPlayer__sub_80156844((void *) (arg0), (void *) (arg0 + 0x3A4), (void *) (&sp10)) != 0) {
        TObjPlayer__sub_803D9B2C();
        temp_f1 = M2C_FIELD(arg0, f32 *, 0x3A8);
        M2C_FIELD(arg0, f32 *, 0x3A8) = (f32) (temp_f1 + lbl_805DA58C);
        TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x3A4), (f32) (temp_f1));
        TBoss1Dragon__sub_8014220C((void *) (&sp10), (void *) (&spC), (void *) (&sp8));
        TObjBoss2Tunnel__sub_803D929C((int) (0), (int) (sp8));
        TObjPlayer__sub_803D9214((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
        TObjContainerIdo__sub_803D96A8((int) (0), (void *) (spC + 0x4000));
        TOMonitorMachine01__sub_803D8B5C((int) (0), (f32) (lbl_805DA590), (f32) (lbl_805DA590), (f32) (TObjEnePanarms__data_805DA530));
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x378);
        if ((temp_r0 != 7) && (temp_r0 != 8)) {
            TObjPlayer__sub_800F09E8((int) (0));
        }
        TObjPlayer__sub_803D9B78();
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800E206C
#include "types.h"

extern "C" {

void draw__14TObjEnePanarmsFPv(void* p);
int TOHangerMachine01__sub_803D9C00(void*);
int draw__16TObjEneRe7BeruraFPv(void*);
int clear_render_callback__8TObjFishFv(void*);
int TObjFish__sub_800E3074(void*);
int TObjPlayer__sub_803D9214(void*, void*);
int TObjPlayer__sub_803D9B2C(void*);
int TObjPlayer__sub_803D9B78(void);
int set_global_param__8TObjFishFi(void*);

void draw__14TObjEnePanarmsFPv(void* p) { TObjPlayer__sub_803D9B2C(p); TOHangerMachine01__sub_803D9C00((char*)p + 0x38); TObjPlayer__sub_803D9214((void*)0, *(void**)((char*)p + 0x60)); set_global_param__8TObjFishFi(*(void**)((char*)p + 0x24)); TObjFish__sub_800E3074(*(void**)((char*)p + 0x3dc)); draw__16TObjEneRe7BeruraFPv(p); clear_render_callback__8TObjFishFv(*(void**)((char*)p + 0x3dc)); TObjPlayer__sub_803D9B78(); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800E28F4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 create_bara__14TObjEnePanarmsFii(s32 arg0, s32 arg1);
s32 TObjControl__ct(s32, s32);
s32 TObjEnePanBARA__ct(s32, s32, s32, s32);
s32 __nw__7TObjectFUl(M2C_UNK);

extern s32 tl_04;

s32 create_bara__14TObjEnePanarmsFii(s32 arg0, s32 arg1) {
    s32 var_r31;
    s32 var_r4;

    var_r31 = __nw__7TObjectFUl(0x470);
    if (var_r31 != 0) {
        var_r4 = __nw__7TObjectFUl(0x20);
        if (var_r4 != 0) {
            var_r4 = TObjControl__ct(var_r4, tl_04);
        }
        var_r31 = TObjEnePanBARA__ct(var_r31, var_r4, arg0, arg1);
    }
    return var_r31;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800E2DF4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 is_phase_12__14TObjEnePanarmsFPv(void *arg0);
u8 check_can_attack__14TObjEnePanarmsFPv(void *arg0);
u8 TObjEnePanarms__sub_800E2E54(void *arg0);
u8 TObjEnePanarms__sub_800E2E68(void *arg0);
u8 is_below_half_hp__14TObjEnePanarmsFPv(void *arg0);
s32 TObjEnePanarms__sub_800DFB44(s32);

u8 is_phase_12__14TObjEnePanarmsFPv(void *arg0) {
    return (u8) (M2C_FIELD(arg0, s32 *, 0x378) == 0xC);
}

u8 check_can_attack__14TObjEnePanarmsFPv(void *arg0) {
    int var_r31;

    var_r31 = 0;
    if (((s32) M2C_FIELD(arg0, s32 *, 0x3C4) == 0) && (TObjEnePanarms__sub_800DFB44(M2C_FIELD(arg0, s32 *, 0x3A0)) != 0)) {
        var_r31 = 1;
    }
    return (u8) var_r31;
}

u8 TObjEnePanarms__sub_800E2E54(void *arg0) {
    return (u8) (M2C_FIELD(arg0, s32 *, 0x378) == 0xD);
}

u8 TObjEnePanarms__sub_800E2E68(void *arg0) {
    return (u8) (M2C_FIELD(arg0, s32 *, 0x378) == 0xE);
}

u8 is_below_half_hp__14TObjEnePanarmsFPv(void *arg0) {
    s32 var_r31;

    var_r31 = 0;
    if (((s32) M2C_FIELD(arg0, s32 *, 0x380) == 0) && (TObjEnePanarms__sub_800DFB44(M2C_FIELD(arg0, s32 *, 0x3A0)) == 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x3C0) == 0) && ((s16) M2C_FIELD(arg0, s16 *, 0x32C) <= (s32) ((s32) M2C_FIELD(arg0, s32 *, 0x3BC) / 2))) {
        var_r31 = 1;
    }
    return var_r31;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800F5E90
#include "types.h"

extern "C" {

int get_enemy_name__14TObjEnePanarmsFPv(void* p);
void copy_target_state__14TObjEnePanarmsFPvPv(void* p, void* a1);
int TObjPlayer__sub_800F06B4(void*, void*);
int enemy_name_for_rt_index(void*);

int get_enemy_name__14TObjEnePanarmsFPv(void* p) { return enemy_name_for_rt_index(*(void**)((char*)p + 0x370)); }
void copy_target_state__14TObjEnePanarmsFPvPv(void* p, void* a1) { TObjPlayer__sub_800F06B4(a1, *(void**)((char*)p + 0x370)); }

}
#endif
#endif
