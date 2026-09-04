#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

u16 TPlyPhotonChair__sub_8035B530(void* p);
void set_field90__15TPlyPhotonChairFPvs(void* p, s16 v);
void render__15TPlyPhotonChairFPvPv(void* p, void* a1);
void TPlyPhotonChair__sub_8035B56C(void* p, f32 v);
void set_state_ready__15TPlyPhotonChairFPv(void* p);
int TPlyPhotonChair__sub_8035B520(void* p);

int copy_vec4__13TRaderMapCoreFPvPv(void*, void*);

int TPlyPhotonChair__sub_8035B520(void* p) { return *(u32*)((char*)p + 0x94) == 0; }
u16 TPlyPhotonChair__sub_8035B530(void* p) { return *(u16*)((char*)p + 0x90); }
void set_field90__15TPlyPhotonChairFPvs(void* p, s16 v) { *(s16*)((char*)p + 0x90) = v; }
void render__15TPlyPhotonChairFPvPv(void* p, void* a1) { copy_vec4__13TRaderMapCoreFPvPv(a1, p); }
void TPlyPhotonChair__sub_8035B56C(void* p, f32 v) { *(f32*)((char*)p + 0x14) = v; }
void set_state_ready__15TPlyPhotonChairFPv(void* p) { *(s32*)((char*)p + 0x18) = 2; }

}
#else
#if PSO_CLASS_PACKAGE == 0x80142524
#include "types.h"

extern "C" {

void play_sound_with_arg__15TPlyPhotonChairFPvPv(void* p, void* a1);

int TPlyPhotonChair__sub_801426C0(void*, void*);
int set_global_pair__10TObjPlayerFii(void*, void*);
int TObjPlayer__sub_803DED84(void*);

void play_sound_with_arg__15TPlyPhotonChairFPvPv(void* p, void* a1) { TPlyPhotonChair__sub_801426C0(p, (void*)2064); set_global_pair__10TObjPlayerFii((void*)-1, (void*)2048); TObjPlayer__sub_803DED84(a1); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80142568
#include "types.h"

extern "C" {

void play_sound__15TPlyPhotonChairFPv(void* p);
void update_parts__15TPlyPhotonChairFPv(void* p);
void update_parts2__15TPlyPhotonChairFPv(void* p);
int TPlyPhotonChair__sub_801426C0(void*, void*);
int restore_state__15TPlyPhotonChairFv(void*);
int TPlyPhotonChair__sub_801426DC(void*);
int TPlyPhotonChair__sub_8014270C(void*);
int TPlyPhotonChair__sub_80142720(void*);
int TPlyPhotonChair__sub_80142734(void*);
int save_state__15TPlyPhotonChairFv(void*);
int set_global_pair__10TObjPlayerFii(void*, void*);
int TObjPlayer__sub_803DED84(void*);

void play_sound__15TPlyPhotonChairFPv(void* p) { TPlyPhotonChair__sub_801426C0(p, (void*)2064); set_global_pair__10TObjPlayerFii((void*)-1, (void*)2048); TObjPlayer__sub_803DED84(p); }

void update_parts__15TPlyPhotonChairFPv(void* p) { TPlyPhotonChair__sub_8014270C(p); TPlyPhotonChair__sub_801426DC(p); restore_state__15TPlyPhotonChairFv(p); }

void update_parts2__15TPlyPhotonChairFPv(void* p) { save_state__15TPlyPhotonChairFv(p); TPlyPhotonChair__sub_80142734(p); TPlyPhotonChair__sub_80142720(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801426D0
#include "types.h"

extern "C" {

void restore_state__15TPlyPhotonChairFv(void);

    extern int lbl_805D566C;
    extern int some_id_805c6f74;
void restore_state__15TPlyPhotonChairFv(void) { some_id_805c6f74 = lbl_805D566C; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80142764
#include "types.h"

extern "C" {

void save_state__15TPlyPhotonChairFv(void);

    extern int lbl_805D566C;
    extern int some_id_805c6f74;
void save_state__15TPlyPhotonChairFv(void) { lbl_805D566C = some_id_805c6f74; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80142770
#include "types.h"

extern "C" {

void TPlyPhotonChair__sub_80142770(void);
void TPlyPhotonChair__sub_80142774(void);

void TPlyPhotonChair__sub_80142770(void) {  }
void TPlyPhotonChair__sub_80142774(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80143888
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *destroy__15TPlyPhotonChairFPvs(void *arg0, s16 arg1);
M2C_UNK TPlyPhotonChair__sub_801438E0(void *, s16);
M2C_UNK __dl__FPv(void *);

extern M2C_UNK lbl_804A7478[];

void *destroy__15TPlyPhotonChairFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 4) = lbl_804A7478;
        TPlyPhotonChair__sub_801438E0(arg0, 0);
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801438E0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TPlyPhotonChair__sub_801438E0(void *arg0, s16 arg1);
M2C_UNK __dl__FPv(void *);

extern M2C_UNK lbl_804A7488[];

void *TPlyPhotonChair__sub_801438E0(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 4) = lbl_804A7488;
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80143928
#include "types.h"

extern "C" {

f32 get_float_c__15TPlyPhotonChairFPv(void* p);
s32 TPlyPhotonChair__sub_80143930(void* p);
s32 get_id__15TPlyPhotonChairFPv(void* p);
void activate__15TPlyPhotonChairFPv(void* p);

f32 get_float_c__15TPlyPhotonChairFPv(void* p) { return *(f32*)((char*)p + 0xc); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80143930
#include "types.h"

extern "C" {

f32 get_float_c__15TPlyPhotonChairFPv(void* p);
s32 TPlyPhotonChair__sub_80143930(void* p);
s32 get_id__15TPlyPhotonChairFPv(void* p);
void activate__15TPlyPhotonChairFPv(void* p);

s32 TPlyPhotonChair__sub_80143930(void* p) { return *(s32*)((char*)p + 0x8); }
s32 get_id__15TPlyPhotonChairFPv(void* p) { return *(s32*)((char*)p + 0x0); }
void activate__15TPlyPhotonChairFPv(void* p) { *(s32*)((char*)p + 0x18) = 1; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801BEC44
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_max_level__10TObjPlayerFv();
s32 clamp_index_to_max__10TObjPlayerFi(s32);
void set_flag_2000000__10TObjPlayerFPv(void *arg0);
void set_flag_02000000__10TObjPlayerFPv(void *arg0);
int TFontSmallLobby__sub_801C0228(void*);
int check_flag_4__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_801BE6E4(void* p);
int set_flag_4000__10TObjPlayerFPv(void* p);
int clear_flag_4000__10TObjPlayerFPv(void* p);
void set_battle_flag__10TObjPlayerFPvi(void* p, s32 v);
s32 get_anim_id__10TObjPlayerFPv(void* p);
int check_flag_0x40000000__10TObjPlayerFPv(void* p);
void clear_flag_0x2__10TObjPlayerFPv(void* p);
int is_action_active__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801BE784(void* p, u8 v);
u8 get_battle_mode__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801BE794(void* p, u8 v);
u8 get_byte_339__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801BE7A4(void* p, u8 v);
u8 get_mag_level__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801BE7B4(void* p, u8 v);
int TObjPlayer__sub_801BE7BC(void* p);
void TObjPlayer__sub_801BE7E0(void* p, u8 v);
int get_equip_flags__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801BE80C(void* p, u8 v);
int get_inventory_state__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801BE838(void* p, u8 v);
int get_field_374_state__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801BE864(void* p, u8 v);
int get_field_374__10TObjPlayerFPv(void* p);
void set_move_mode__10TObjPlayerFPvi(void* p, s32 v);
void set_input_mode__10TObjPlayerFPvi(void* p, s32 v);
void set_action_flag_2__10TObjPlayerFPv(void* p);
int check_flag_48__10TObjPlayerFPv(void* p);
int is_status_locked__10TObjPlayerFPv(void* p);
int is_status_flag_200__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_801BEABC(void* p);
int start_freeze_self__10TObjPlayerFPv(void* p);
void set_floor__10TObjPlayerFPvi(void* p, s32 v);
void set_floor_index__10TObjPlayerFPvi(void* p, s32 v);
s32 TObjPlayer__sub_801BEB0C(void* p);
int unregister_sub__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801BEB34(void* p, s32 v);
u8 TObjPlayer__sub_801BEB3C(void* p);
u8 TObjPlayer__sub_801BEB44(void* p);
u8 TObjPlayer__sub_801BEB4C(void* p);
void set_play_time__10TObjPlayerFPvi(void* p, s32 v);
void TObjPlayer__sub_801BEB5C(void* p);
int TObjPlayer__sub_801BEB68(void* p);
u8 TObjPlayer__sub_801BEB8C(void* p);
int query_field374__10TObjPlayerFPv(void* p);
u8 TObjPlayer__sub_801BEBB8(void* p);
int query_flags_374__10TObjPlayerFPv(void* p);
u8 TObjPlayer__sub_801BEBE4(void* p);
int get_quest_status__10TObjPlayerFPv(void* p);
u8 TObjPlayer__sub_801BEC10(void* p);
int get_field_0x374__10TObjPlayerFPv(void* p);
u8 TObjPlayer__sub_801BEC3C(void* p);
int is_mounted__15TPlyPhotonChairFPv(void* p);
int check_flag__10TObjPlayerFPvi(void*, int);
int TObjPlayer__sub_8011E204(void*, int);
int set_state_flags__10TObjPlayerFPvUi(void*, int);
int TObjPlayer__sub_80154A00(void*);
int end_camera_pan__10TObjPlayerFPv(void*);
int start_freeze__10TObjPlayerFPv(void*);
int TObjPlayer__sub_801BED70(void*);
int TObjPlayer__sub_801BED78(void*);
int TObjPlayer__sub_801BED80(void*);
int TObjPlayer__sub_801BED88(void*);
int TObjPlayer__sub_801BED90(void*);
int TObjPlayer__sub_801BED98(void*);
int TObjPlayer__sub_801BEDA0(void*);
int TObjPlayer__sub_801BEDA8(void*);
int TObjPlayer__sub_801BEDB0(void*);
int TObjPlayer__sub_801BEDB8(void*);

int is_mounted__15TPlyPhotonChairFPv(void* p) { return (*(u32*)((char*)p + 0x334) >> 26) & 0x1; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8035B2A4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_static_model__15TPlyPhotonChairFv(void);
void TLobby__sub_8001FE7C(void*, int);

extern u32 TPlyPhotonChair__data_805D6F40;

void free_static_model__15TPlyPhotonChairFv(void) {
    if ((u32) TPlyPhotonChair__data_805D6F40 != 0U) {
        TLobby__sub_8001FE7C((void*)TPlyPhotonChair__data_805D6F40, 1);
        TPlyPhotonChair__data_805D6F40 = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8035B340
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__15TPlyPhotonChairFv(void *arg0, s16 arg1);
void destroy__15TPlyPhotonChairFPvs(void *, int);
void __dl__7TObjectFPv(void *);
void destroy__11TMainCursorFPvs(void *, int);
void destroy_particle__13TParticleCtrlFPvs(void *, int);

extern M2C_UNK __vt__15TPlyPhotonChair[];

void *__dt__15TPlyPhotonChairFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__15TPlyPhotonChair;
        destroy__11TMainCursorFPvs((s8 *)arg0 + 0xD0, -1);
        destroy__15TPlyPhotonChairFPvs((s8 *)arg0 + 0xB4, -1);
        destroy__15TPlyPhotonChairFPvs((s8 *)arg0 + 0x98, -1);
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8035B580
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void sync_field10_from_child__15TPlyPhotonChairFPv(void *arg0);

extern const f64 lbl_80479800;

void sync_field10_from_child__15TPlyPhotonChairFPv(void *arg0) {
    void *temp_r4;

    temp_r4 = M2C_FIELD(arg0, void **, 8);
    if (temp_r4 != NULL) {
        M2C_FIELD(arg0, f32 *, 0x10) = (f32) M2C_FIELD(temp_r4, u32 *, 4);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8035B5BC
#include "types.h"

extern "C" {

void set_field_8__15TPlyPhotonChairFPvi(void* p, s32 v);
void set_type__15TPlyPhotonChairFPvi(void* p, s32 v);

void set_field_8__15TPlyPhotonChairFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x8) = v; }
void set_type__15TPlyPhotonChairFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x0) = v; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8035B5CC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *init__15TPlyPhotonChairFPv(void *arg0);
void TPlyPhotonChair__sub_8035B610(void *);
void TPlyPhotonChair__sub_8035B630(void *);

extern M2C_UNK lbl_804A7478[];

void *init__15TPlyPhotonChairFPv(void *arg0) {
    TPlyPhotonChair__sub_8035B630(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x4) = lbl_804A7478;
    TPlyPhotonChair__sub_8035B610(arg0);
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8035B610
#include "types.h"

extern "C" {

void TPlyPhotonChair__sub_8035B610(void* a0);

    extern const float lbl_805E012C;
void TPlyPhotonChair__sub_8035B610(void* a0) { *(int*)((char*)a0 + 0x8) = 0; *(float*)((char*)a0 + 0xc) = lbl_805E012C; *(float*)((char*)a0 + 0x10) = lbl_805E012C; *(float*)((char*)a0 + 0x14) = lbl_805E012C; *(int*)((char*)a0 + 0x18) = 0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8035B66C
#include "types.h"

extern "C" {

void TPlyPhotonChair__sub_8035B66C(void* p);

void TPlyPhotonChair__sub_8035B66C(void* p) { *(s32*)((char*)p + 0x0) = 0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8035B678
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_instance__15TPlyPhotonChairFv(void);
void TLobby__sub_8001FE7C(void*, int);

extern u32 lbl_805D6F48;

void free_instance__15TPlyPhotonChairFv(void) {
    if ((u32) lbl_805D6F48 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D6F48, 1);
        lbl_805D6F48 = 0U;
    }
}

}
#endif
#endif
