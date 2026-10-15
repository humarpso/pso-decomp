#include "pso/TAdGameStartBackGC.h"

#include "types.h"

struct RecoveredGlobal_803074FC___vt__18TAdGameStartBackGC {
    s32 value;
    u8 remaining[0x14];
};

extern "C" {
void clear_equip_flags__10TObjPlayerFPvUi(void *, u32);
void TObjPlayer__sub_803075EC(u8 *arg0);
void __ct__7TObjectFP7TObject(void *, void *);
s32 get_instance__10TObjPlayerFv(void);
extern RecoveredGlobal_803074FC___vt__18TAdGameStartBackGC __vt__18TAdGameStartBackGC;
extern s32 TAdGameStartBackGC__class_name;
extern s32 game_start_background_texture_list;
extern const f32 lbl_805DF07C;
extern const f32 lbl_805DF084;
extern const f32 lbl_805DF088;
extern const f32 lbl_805DF08C;
extern const f32 lbl_805DF090;
extern const f32 lbl_805DF094;
extern const f32 lbl_805DF098;
extern const f32 lbl_805DF09C;
extern const f32 lbl_805DF0A0;
u8 *__ct__18TAdGameStartBackGCFv(u8 *arg0, u8 *arg1);
extern const f32 lbl_805DF07C;
extern const f32 lbl_805DF080;
void run_task__18TAdGameStartBackGCFv(u8 *arg0);
}

extern "C" {

void render__18TAdGameStartBackGCFv(void* p);
void render_background_status__18TAdGameStartBackGCFPv(u8 *arg0);
s32 draw_textured_quad_at_depth(void *, f32);
s32 begin_screen_draw(int);
s32 set_draw_texture_and_color(int, int);
s32 get_player__20TWindowSubStatusDispFv();
int get_state_flag__9TMainTaskFv(void*);
int init_xyz_limits__10TObjPlayerFv(void);
int reset_transform_state__10TObjPlayerFv(void);
s32 set_global_param__8TObjFishFi(void *);

extern s32 game_start_background_texture_list;
extern const f32 lbl_805DF078;

void render_background_status__18TAdGameStartBackGCFPv(u8 *arg0) {
    begin_screen_draw((int) (1));
    set_global_param__8TObjFishFi((void *) (game_start_background_texture_list));
    set_draw_texture_and_color((int) (0), (int) ((*(s32 *)((s8 *)arg0 + 0x78) << 0x18) | 0xFF0000 | 0xFFFF));
    draw_textured_quad_at_depth((void *) (arg0 + 0x3C), (f32) (lbl_805DF078));
    get_player__20TWindowSubStatusDispFv();
}

void render__18TAdGameStartBackGCFv(void* p) { if (get_state_flag__9TMainTaskFv(p) != 1) { init_xyz_limits__10TObjPlayerFv(); render_background_status__18TAdGameStartBackGCFPv((u8 *)(p)); reset_transform_state__10TObjPlayerFv(); } }

#pragma push
#pragma fp_contract on
typedef char RecoveredGlobal_803074FC___vt__18TAdGameStartBackGC_size[sizeof(RecoveredGlobal_803074FC___vt__18TAdGameStartBackGC) == 0x18 ? 1 : -1];

#pragma push
#pragma fp_contract on
void run_task__18TAdGameStartBackGCFv(u8 *arg0) {
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    s32 temp_r4;
    s32 var_r0;
    *(s32 *)((s8 *)arg0 + 0x7C) = (s32) (*(s32 *)((s8 *)arg0 + 0x7C) + 1);
    temp_r4 = *(s32 *)((s8 *)arg0 + 0x7C);
    if (temp_r4 < 0xA) {
        *(f32 *)((s8 *)arg0 + 0x6C) = (f32) -((lbl_805DF080 * (f32) temp_r4) - lbl_805DF07C);
        *(f32 *)((s8 *)arg0 + 0x70) = (f32) -((lbl_805DF080 * (f32) *(s32 *)((s8 *)arg0 + 0x7C)) - lbl_805DF07C);
    } else if (temp_r4 > 0x1C) {
        *(s32 *)((s8 *)arg0 + 0x78) = (s32) (*(s32 *)((s8 *)arg0 + 0x78) - 0x19);
        var_r0 = *(s32 *)((s8 *)arg0 + 0x78);
        if (var_r0 < 0) {
            var_r0 = 0;
        }
        *(s32 *)((s8 *)arg0 + 0x78) = var_r0;
    }
    temp_f2 = *(f32 *)((s8 *)arg0 + 0x64);
    *(f32 *)((s8 *)arg0 + 0x3C) = (f32) ((*(f32 *)((s8 *)arg0 + 0x6C) * (*(f32 *)((s8 *)arg0 + 0x1C) - temp_f2)) + temp_f2);
    temp_f2_2 = *(f32 *)((s8 *)arg0 + 0x68);
    *(f32 *)((s8 *)arg0 + 0x40) = (f32) ((*(f32 *)((s8 *)arg0 + 0x70) * (*(f32 *)((s8 *)arg0 + 0x20) - temp_f2_2)) + temp_f2_2);
    temp_f2_3 = *(f32 *)((s8 *)arg0 + 0x64);
    *(f32 *)((s8 *)arg0 + 0x44) = (f32) ((*(f32 *)((s8 *)arg0 + 0x6C) * (*(f32 *)((s8 *)arg0 + 0x24) - temp_f2_3)) + temp_f2_3);
    temp_f2_4 = *(f32 *)((s8 *)arg0 + 0x68);
    *(f32 *)((s8 *)arg0 + 0x48) = (f32) ((*(f32 *)((s8 *)arg0 + 0x70) * (*(f32 *)((s8 *)arg0 + 0x28) - temp_f2_4)) + temp_f2_4);
}
#pragma pop

TAdGameStartBackGC::~TAdGameStartBackGC() {}
u8 *__ct__18TAdGameStartBackGCFv(u8 *arg0, u8 *arg1) {
    f32 temp_f5;
    f32 temp_f5_2;
    __ct__7TObjectFP7TObject(arg0, arg1);
    *(s32 **)((s8 *)arg0 + 0x18) = &__vt__18TAdGameStartBackGC.value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TAdGameStartBackGC__class_name;
    *(f32 *)((s8 *)arg0 + 0x5C) = (f32) lbl_805DF084;
    *(f32 *)((s8 *)arg0 + 0x60) = (f32) lbl_805DF088;
    *(s32 *)((s8 *)arg0 + 0x78) = 0xFF;
    *(s32 *)((s8 *)arg0 + 0x7C) = -1;
    *(f32 *)((s8 *)arg0 + 0x6C) = (f32) lbl_805DF07C;
    *(f32 *)((s8 *)arg0 + 0x70) = (f32) lbl_805DF07C;
    game_start_background_texture_list = get_instance__10TObjPlayerFv();
    *(f32 *)((s8 *)arg0 + 0x1C) = (f32) *(f32 *)((s8 *)arg0 + 0x5C);
    *(f32 *)((s8 *)arg0 + 0x20) = (f32) *(f32 *)((s8 *)arg0 + 0x60);
    *(f32 *)((s8 *)arg0 + 0x24) = (f32) (lbl_805DF08C + *(f32 *)((s8 *)arg0 + 0x5C));
    *(f32 *)((s8 *)arg0 + 0x28) = (f32) (lbl_805DF090 + *(f32 *)((s8 *)arg0 + 0x60));
    temp_f5 = *(f32 *)((s8 *)arg0 + 0x1C);
    *(f32 *)((s8 *)arg0 + 0x64) = (f32) ((lbl_805DF094 * (*(f32 *)((s8 *)arg0 + 0x24) - temp_f5)) + temp_f5);
    temp_f5_2 = *(f32 *)((s8 *)arg0 + 0x20);
    *(f32 *)((s8 *)arg0 + 0x68) = (f32) ((lbl_805DF094 * (*(f32 *)((s8 *)arg0 + 0x28) - temp_f5_2)) + temp_f5_2);
    *(f32 *)((s8 *)arg0 + 0x4C) = (f32) lbl_805DF098;
    *(f32 *)((s8 *)arg0 + 0x50) = (f32) lbl_805DF09C;
    *(f32 *)((s8 *)arg0 + 0x54) = (f32) lbl_805DF0A0;
    *(f32 *)((s8 *)arg0 + 0x58) = (f32) lbl_805DF094;
    return arg0;
}
#pragma pop

void TObjPlayer__sub_803075EC(u8 *arg0) {
    *(s32 *)((s8 *)arg0 + 0x1F8) = 5;
    clear_equip_flags__10TObjPlayerFPvUi(arg0, 0x800U);
}

}
