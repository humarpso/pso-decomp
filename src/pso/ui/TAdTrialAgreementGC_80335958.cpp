#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80335BD4_lbl_8050BEC0 { M2C_UNK value; u8 remaining[0x1C]; };
typedef char RecoveredGlobal_80335BD4_lbl_8050BEC0_size[sizeof(RecoveredGlobal_80335BD4_lbl_8050BEC0) == 0x20 ? 1 : -1];

struct RecoveredGlobal_80335BD4_lbl_8058D4C0 { M2C_UNK value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_80335BD4_lbl_8058D4C0_size[sizeof(RecoveredGlobal_80335BD4_lbl_8058D4C0) == 0x10 ? 1 : -1];

struct RecoveredGlobal_80335A58_lbl_8050E208 {
    M2C_UNK value;
    u8 remaining[0x1AC];
};

struct RecoveredGlobal_80335A58_lbl_8050E3B8 {
    M2C_UNK value;
    u8 remaining[0x1AC];
};

struct RecoveredGlobal_80335974_lbl_8050E208
{
  M2C_UNK value;
  u8 remaining[0x1AC];
};

struct RecoveredGlobal_80335974_lbl_8050E3B8
{
  M2C_UNK value;
  u8 remaining[0x1AC];
};

extern "C" {
u8 TAdTrialAgreementGC__sub_80335958(u8 *arg0);
s32 get_state_flag__9TMainTaskFv();
s32 copy_vec4__13TRaderMapCoreFPvPv(void *, void *);
s32 TCameraCtrl__sub_80068EF0();
s32 TCameraCtrl__sub_80069024();
s32 reset_transform_state__10TObjPlayerFv();
s32 init_xyz_limits__10TObjPlayerFv();
s32 begin_effect_render__13TParticleCtrlFv();
s32 end_effect_render__13TParticleCtrlFv();
s32 draw_with_camera__6TLobbyFiiif(int, int, int, f32);
s32 TAdTrialAgreementGC__sub_80335918(void *, void *, int);
s32 TAdTrialAgreementGC__sub_8033596C(void* p);
s32 get_record__6TLobbyFi(int);
s32 TLobby__sub_80336008();
s32 set_chunk_material_color(void *);
extern RecoveredGlobal_80335BD4_lbl_8050BEC0 lbl_8050BEC0;
extern RecoveredGlobal_80335BD4_lbl_8058D4C0 lbl_8058D4C0;
extern s32 lbl_805D5660;
extern s32 some_id_805c6f74;
extern const f32 lbl_805DF8B0;
void TAdTrialAgreementGC__sub_80335BD4(u8 *arg0);
s32 test_flag_4c__23TAdSinglePlyChrSelectGCFPv(void *, int);
s32 TWindowShortListCtrl__check_controller_button(int, int);
s32 dispatch_draw_command__22TAdMultiPlyChrSelectGCFiiii(int, int, int, int);
s32 apply_choice__20TWindowChoiceSettingFiiii(void *, int, int, int);
M2C_UNK play_sound_effect(int, int, int, int);
extern RecoveredGlobal_80335A58_lbl_8050E208 lbl_8050E208;
extern RecoveredGlobal_80335A58_lbl_8050E3B8 lbl_8050E3B8;
extern const f32 lbl_805DF8B4;
void TAdTrialAgreementGC__sub_80335A58(u8 *arg0);
f32 TBoss8Dragon__sub_803D64C0(s32);
s32 test_flag_4c__23TAdSinglePlyChrSelectGCFPv(void *, int);
s32 TWindowShortListCtrl__check_controller_button(int, int);
M2C_UNK play_sound_effect(int, int, int, int);
extern RecoveredGlobal_80335A58_lbl_8050E208 lbl_8050E208;
extern RecoveredGlobal_80335A58_lbl_8050E3B8 lbl_8050E3B8;
extern const f32 lbl_805DF8B4;
extern const f32 lbl_805DF8B8;
extern const f32 lbl_805DF8BC;
void update_title_prompt__19TAdTrialAgreementGCFPv(u8 *arg0);
}

extern "C" {

void *destroy_object_804EE458(void *arg0, s16 arg1);
s32 TAdTrialAgreementGC__sub_8033596C(void* p);
void run_state__19TAdTrialAgreementGCFPv(void *arg0);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

u8 TAdTrialAgreementGC__sub_80335958(u8 *arg0) {
    return (u8) (M2C_FIELD(arg0, s32 *, 0x24) == 2);
}

s32 TAdTrialAgreementGC__sub_8033596C(void* p) { return *(s32*)((char*)p + 0x20); }

typedef char RecoveredGlobal_80335A58_lbl_8050E208_size[sizeof(RecoveredGlobal_80335A58_lbl_8050E208) == 0x1B0 ? 1 : -1];
typedef char RecoveredGlobal_80335A58_lbl_8050E3B8_size[sizeof(RecoveredGlobal_80335A58_lbl_8050E3B8) == 0x1B0 ? 1 : -1];

typedef struct RecoveredGlobal_80335974_lbl_8050E208 RecoveredGlobal_80335974_lbl_8050E208;
typedef struct RecoveredGlobal_80335974_lbl_8050E3B8 RecoveredGlobal_80335974_lbl_8050E3B8;
void update_title_prompt__19TAdTrialAgreementGCFPv(u8 *arg0) {
  float new_var;
  if ((TWindowShortListCtrl__check_controller_button((int)((void *) (((u8 *) (&(*(RecoveredGlobal_80335974_lbl_8050E3B8 *)&lbl_8050E3B8).value)) + 0x20)), (int)((int) 8)) != 0) || (test_flag_4c__23TAdSinglePlyChrSelectGCFPv((void *) (((u8 *) (&(*(RecoveredGlobal_80335974_lbl_8050E208 *)&lbl_8050E208).value)) + 0x160), (int) 4) != 0))
  {
    play_sound_effect((int) 0x52D01, (int) 0, (int) 0, (int) 0);
    *((s32 *) (((s8 *) arg0) + 0x24)) = 1;
  }
  new_var = lbl_805DF8B4 + TBoss8Dragon__sub_803D64C0((s32) (lbl_805DF8B8 * ((f32) (((*((s32 *) (((s8 *) arg0) + 0x38))) % 120) * 3))));
  *((f32 *) (((s8 *) arg0) + 0x28)) = (f32) (new_var * lbl_805DF8BC);
}

void TAdTrialAgreementGC__sub_80335A58(u8 *arg0) {
    u8 *temp_r30;
    temp_r30 = (u8 *)&lbl_8050E3B8.value + 0x20;
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) lbl_805DF8B4;
    if ((dispatch_draw_command__22TAdMultiPlyChrSelectGCFiiii((int) (temp_r30), (int) (0x10), (int) (6), (int) (1)) != 0) || (apply_choice__20TWindowChoiceSettingFiiii((void *) ((u8 *)&lbl_8050E208.value + 0x160), (int) (0x10), (int) (6), (int) (1)) != 0)) {
        M2C_FIELD(arg0, s32 *, 0x20) = (s32) (M2C_FIELD(arg0, s32 *, 0x20) - 1);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x20) < 0) {
            M2C_FIELD(arg0, s32 *, 0x20) = 3;
        }
        play_sound_effect((int) (0x54100), (int) (0), (int) (0), (int) (0));
    }
    if ((dispatch_draw_command__22TAdMultiPlyChrSelectGCFiiii((int) (temp_r30), (int) (0x20), (int) (6), (int) (1)) != 0) || (apply_choice__20TWindowChoiceSettingFiiii((void *) ((u8 *)&lbl_8050E208.value + 0x160), (int) (0x20), (int) (6), (int) (1)) != 0)) {
        M2C_FIELD(arg0, s32 *, 0x20) = (s32) (M2C_FIELD(arg0, s32 *, 0x20) + 1);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x20) >= 4) {
            M2C_FIELD(arg0, s32 *, 0x20) = 0;
        }
        play_sound_effect((int) (0x54100), (int) (0), (int) (0), (int) (0));
    }
    if ((TWindowShortListCtrl__check_controller_button((int) (temp_r30), (int) (4)) != 0) || (test_flag_4c__23TAdSinglePlyChrSelectGCFPv((void *) ((u8 *)&lbl_8050E208.value + 0x160), (int) (4)) != 0)) {
        M2C_FIELD(arg0, s32 *, 0x24) = 2;
        play_sound_effect((int) (0x40042309), (int) (0), (int) (0), (int) (0));
    }
}

void TAdTrialAgreementGC__sub_80335BD4(u8 *arg0) {
    s32 temp_r0;
    s32 temp_r31;
    s32 var_r31;
    if (get_state_flag__9TMainTaskFv() != 0) {
        begin_effect_render__13TParticleCtrlFv();
        TCameraCtrl__sub_80069024();
        lbl_805D5660 = some_id_805c6f74;
        copy_vec4__13TRaderMapCoreFPvPv((void *) (&lbl_8050BEC0.value), (void *) (&lbl_8058D4C0.value));
        if ((s32) M2C_FIELD(arg0, s32 *, 0x24) == 0) {
            some_id_805c6f74 |= 0x10;
            set_chunk_material_color((void *) (arg0 + 0x28));
            TLobby__sub_80336008();
            draw_with_camera__6TLobbyFiiif((int) (get_record__6TLobbyFi((int) (0xA))), (int) (0xA), (int) (0x22), (f32) (lbl_805DF8B0));
        }
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x24);
        if ((temp_r0 == 1) || (temp_r0 == 2)) {
            var_r31 = 0xB;
            do {
                TAdTrialAgreementGC__sub_80335918((void *) (arg0), (void *) (var_r31), (int) (var_r31));
                var_r31 += 1;
            } while (var_r31 != 0xF);
            TLobby__sub_80336008();
            init_xyz_limits__10TObjPlayerFv();
            temp_r31 = TAdTrialAgreementGC__sub_8033596C((void*)((void *) (arg0)));
            if ((s32) M2C_FIELD(arg0, s32 *, 0x24) == 1) {
                TAdTrialAgreementGC__sub_80335918((void *) (arg0), (void *) (temp_r31 + 0xF), (int) (0xF));
                TAdTrialAgreementGC__sub_80335918((void *) (arg0), (void *) (temp_r31 + 0x13), (int) (0x13));
                TAdTrialAgreementGC__sub_80335918((void *) (arg0), (void *) (temp_r31 + 0x17), (int) (0x17));
            }
            if ((s32) M2C_FIELD(arg0, s32 *, 0x24) == 2) {
                TAdTrialAgreementGC__sub_80335918((void *) (arg0), (void *) (temp_r31 + 0x1B), (int) (0x1B));
                TAdTrialAgreementGC__sub_80335918((void *) (arg0), (void *) (temp_r31 + 0x1F), (int) (0x1F));
                TAdTrialAgreementGC__sub_80335918((void *) (arg0), (void *) (temp_r31 + 0x23), (int) (0x23));
            }
            reset_transform_state__10TObjPlayerFv();
        }
        copy_vec4__13TRaderMapCoreFPvPv((void *) (&lbl_8058D4C0.value), (void *) (&lbl_8050BEC0.value));
        some_id_805c6f74 = lbl_805D5660;
        TCameraCtrl__sub_80068EF0();
        end_effect_render__13TParticleCtrlFv();
    }
}

void run_state__19TAdTrialAgreementGCFPv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x24);
    switch (temp_r0) {
    case 0:
        update_title_prompt__19TAdTrialAgreementGCFPv((u8 *)(arg0));
        break;
    case 1:
        TAdTrialAgreementGC__sub_80335A58((u8 *)(arg0));
        break;
    case 2:
        break;
    }
    M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) + 1);
}

extern M2C_UNK lbl_804EE458[];

void *destroy_object_804EE458(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804EE458;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
