#include "pso/TObject.h"
class TLogo : public TObject {
public:
    virtual void render();
    virtual ~TLogo();
};

TLogo::~TLogo() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

#include "pso/TMainTask.h"
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
#include "pso/TObject.h"
typedef s32 M2C_UNK;
struct V3_8013F5E8 { s32 x, y, z; };
struct V3_8013F6C4 { s32 x, y, z; };
extern "C" {
M2C_UNK TKeyBoardControl__sub_8000F90C(int);
M2C_UNK select_active_controller__11TCameraCtrlFc(int);
M2C_UNK TCameraCtrl__ct(u32, void *);
M2C_UNK reset_keyboard_state__6TLobbyFv();
s32 is_area_transfer_pending();
M2C_UNK clear_callback_and_reset_keyboard__6TLobbyFv();
M2C_UNK apply_phase_keyboard_mode();
M2C_UNK invoke_callback__6TLobbyFv();
M2C_UNK run_load_callback_table(void *, int);
M2C_UNK init_menu_scene_lights(void *, int);
M2C_UNK reset_controller_input_state();
M2C_UNK set_copy_clear_color_argb(int, int, int);
M2C_UNK create_quad_sprites__13TParticleCtrlFv();
M2C_UNK TWindowCtrlMain__ct(u32);
extern V3_8013F6C4 lbl_8043F138;
extern V3_8013F6C4 lbl_8043F144;
extern u8 lbl_804A6F34[];
}

extern "C" {
s32 TLobby__sub_800FD6A0(void *, int);
s32 render_tick__Fv();
s32 delete_all_task_children__9TMainTaskFv(void *);
void TLogo__sub_8013F5AC();
M2C_UNK TKeyBoardControl__sub_8000F9CC(int);
u32 __ct__10TAdADXlogoFv(void *, void *);
M2C_UNK queue_destruction__7TObjectFv(int);
u32 __ct__11TAdSEGAlogoFv(void *, void *);
u32 __ct__12TAdSoniclogoFv(void *, void *);
int TLogo__sub_8013F7E8(int);
int TLogo__sub_8013F7F0(int);
int TLogo__sub_8013F7F8(int);
s32 TLogo__sub_8013F800(void* p);
int TLogo__sub_8013F808(void);
s32 TLobby__sub_80145DB4(int);
u32 __nw__7TObjectFUl(int);
u32 TAdVIConfigGC__ct(void *, void *);
s32 check_progressive_ready__5TLogoFv();
u32 TAdTrialModemChkGC__ct(void *, void *);
void run_task__5TLogoFv(u8 *arg0);
M2C_UNK TKeyBoardControl__sub_8000F92C();
M2C_UNK TKeyBoardControl__sub_8000F9CC(int);
M2C_UNK set_active_camera_pose(void *, void *);
M2C_UNK activate_camera_mode(int);
s32 is_ready__22TQuestVmDownLoadServerFv();
M2C_UNK TLobby__sub_800FA464();
s8 func_801A5E54__Fv();
M2C_UNK TKeyBoardControl__sub_801A5EC4();
M2C_UNK controller_stuff__Fv();
s32 render_tick__Fv();
M2C_UNK update_sound_request_slots();
M2C_UNK func_803DCDFC__Fv();
extern V3_8013F5E8 lbl_8043F150;
extern V3_8013F5E8 lbl_8043F15C;
void TLogo__sub_8013F5E8(void);
}

extern "C" {

s32 TLogo__sub_8013F800(void* p);
int TLogo__sub_8013F808(void);
void *__ct__5TLogoFv(void *arg0);
s32 fn_8013F264(void* p);
s32 fn_8013F288(void* p);
void render__5TLogoFv(void);
void __ct__7TObjectFP7TObject(void *);

s32 fn_8013F264(void* p) { return fn_8013F288((void*)((char*)p + 0x98)); }
s32 fn_8013F288(void* p) { return *(s32*)((char*)p + 0x0); }
void render__5TLogoFv(void) {  }

extern void *__vt__5TLogo[];
extern void *lbl_805D2CC8;

extern "C" {
void TCameraCtrl__sub_8006A35C(); void reset__11TCameraCtrlFv(); void TCameraCtrl__sub_800693F4(); void TCameraCtrl__sub_80069318();
void update_keyboard_menu__6TLobbyFv(); void free_keyboard_soft_resources__6TLobbyFv();
void register_texture_f256_ad_pic_2(); void free_global__23TAdSinglePlyChrSelectGCFv();
void register_texture_f256_backtext(); void free_singleton_805D65C0__23TAdSinglePlyChrSelectGCFv();
void register_texture_logo_e(); void free_held_object__5TLogoFv(); void TLogo__sub_8001C364(); void TLogo__sub_8001C360();
void TWindowCtrlMain__sub_8024D838(); void TWindowCtrlMain__sub_8024D690(); void TLogo__sub_80019A2C(); void TLogo__sub_80019A28();
void __dt__5TLogoFv(); void render_shadows__7TObjectFv();
void *lbl_804A72D8[18] = {
    (void *)TCameraCtrl__sub_8006A35C, (void *)reset__11TCameraCtrlFv,
    (void *)TCameraCtrl__sub_800693F4, (void *)TCameraCtrl__sub_80069318,
    (void *)update_keyboard_menu__6TLobbyFv, (void *)free_keyboard_soft_resources__6TLobbyFv,
    (void *)register_texture_f256_ad_pic_2, (void *)free_global__23TAdSinglePlyChrSelectGCFv,
    (void *)register_texture_f256_backtext, (void *)free_singleton_805D65C0__23TAdSinglePlyChrSelectGCFv,
    (void *)register_texture_logo_e, (void *)free_held_object__5TLogoFv,
    (void *)TLogo__sub_8001C364, (void *)TLogo__sub_8001C360,
    (void *)TWindowCtrlMain__sub_8024D838, (void *)TWindowCtrlMain__sub_8024D690,
    (void *)TLogo__sub_80019A2C, (void *)TLogo__sub_80019A28,
};
void *__vt__5TLogo[6] = {
    0, 0,
    (void *)__dt__5TLogoFv,
    (void *)run_task__5TLogoFv,
    (void *)render__5TLogoFv,
    (void *)render_shadows__7TObjectFv,
};
}
void run_task__5TLogoFv(u8 *arg0) {
    u32 temp_r0;
    u32 var_r0;
    u32 var_r0_2;
    u32 var_r0_3;
    u32 var_r0_4;
    u32 var_r0_5;
    u32 var_r0_6;
    u32 var_r0_7;
    u32 var_r0_8;
    temp_r0 = M2C_FIELD(arg0, u32 *, 0x20);
    switch (temp_r0) {
    case 0:
        if (check_progressive_ready__5TLogoFv() != 0) {
            if (((s32)TLogo__sub_8013F808()) != 0) {
                var_r0 = __nw__7TObjectFUl((int) (0x4C));
                if (var_r0 != 0U) {
                    var_r0 = TAdVIConfigGC__ct((void *)var_r0, arg0);
                }
                M2C_FIELD(arg0, u32 *, 0x24) = var_r0;
                M2C_FIELD(arg0, u32 *, 0x20) = 1U;
                return;
            }
            var_r0_2 = __nw__7TObjectFUl((int) (0x20));
            if (var_r0_2 != 0U) {
                var_r0_2 = __ct__11TAdSEGAlogoFv((void *)var_r0_2, arg0);
            }
            M2C_FIELD(arg0, u32 *, 0x2C) = var_r0_2;
            M2C_FIELD(arg0, u32 *, 0x20) = 4U;
            return;
        }
        var_r0_3 = __nw__7TObjectFUl((int) (0x20));
        if (var_r0_3 != 0U) {
            var_r0_3 = __ct__11TAdSEGAlogoFv((void *)var_r0_3, arg0);
        }
        M2C_FIELD(arg0, u32 *, 0x2C) = var_r0_3;
        M2C_FIELD(arg0, u32 *, 0x20) = 4U;
        return;
    case 1:
        if (((u32) M2C_FIELD(arg0, u32 *, 0x24) != 0U) && (TLogo__sub_8013F800((void*)(M2C_FIELD(arg0, void **, 0x24))) != 0)) {
            var_r0_4 = __nw__7TObjectFUl((int) (0x20));
            if (var_r0_4 != 0U) {
                var_r0_4 = __ct__11TAdSEGAlogoFv((void *)var_r0_4, arg0);
            }
            M2C_FIELD(arg0, u32 *, 0x2C) = var_r0_4;
            M2C_FIELD(arg0, u32 *, 0x20) = 4U;
            return;
        }
        break;
    case 2:
        if (TLobby__sub_80145DB4((int) (1)) == 0) {
            var_r0_5 = __nw__7TObjectFUl((int) (0x30));
            if (var_r0_5 != 0U) {
                var_r0_5 = TAdTrialModemChkGC__ct((void *)var_r0_5, arg0);
            }
            M2C_FIELD(arg0, u32 *, 0x28) = var_r0_5;
            M2C_FIELD(arg0, u32 *, 0x20) = 3U;
            return;
        }
        var_r0_6 = __nw__7TObjectFUl((int) (0x20));
        if (var_r0_6 != 0U) {
            var_r0_6 = __ct__11TAdSEGAlogoFv((void *)var_r0_6, arg0);
        }
        M2C_FIELD(arg0, u32 *, 0x2C) = var_r0_6;
        M2C_FIELD(arg0, u32 *, 0x20) = 4U;
        return;
    case 4:
        if (((s32)TLogo__sub_8013F7F8((int)((int) (M2C_FIELD(arg0, u32 *, 0x2C))))) != 0) {
            queue_destruction__7TObjectFv((int) (M2C_FIELD(arg0, u32 *, 0x2C)));
            M2C_FIELD(arg0, u32 *, 0x2C) = 0U;
            var_r0_7 = __nw__7TObjectFUl((int) (0x20));
            if (var_r0_7 != 0U) {
                var_r0_7 = __ct__12TAdSoniclogoFv((void *)var_r0_7, arg0);
            }
            M2C_FIELD(arg0, u32 *, 0x30) = var_r0_7;
            M2C_FIELD(arg0, u32 *, 0x20) = 5U;
            return;
        }
        break;
    case 5:
        if (((s32)TLogo__sub_8013F7F0((int)((int) (M2C_FIELD(arg0, u32 *, 0x30))))) != 0) {
            queue_destruction__7TObjectFv((int) (M2C_FIELD(arg0, u32 *, 0x30)));
            M2C_FIELD(arg0, u32 *, 0x30) = 0U;
            var_r0_8 = __nw__7TObjectFUl((int) (0x20));
            if (var_r0_8 != 0U) {
                var_r0_8 = __ct__10TAdADXlogoFv((void *)var_r0_8, arg0);
            }
            M2C_FIELD(arg0, u32 *, 0x34) = var_r0_8;
            M2C_FIELD(arg0, u32 *, 0x20) = 6U;
            return;
        }
        break;
    case 6:
        if (((s32)TLogo__sub_8013F7E8((int)((int) (M2C_FIELD(arg0, u32 *, 0x34))))) != 0) {
            queue_destruction__7TObjectFv((int) (M2C_FIELD(arg0, u32 *, 0x34)));
            M2C_FIELD(arg0, u32 *, 0x34) = 0U;
            M2C_FIELD(arg0, u32 *, 0x20) = 7U;
            return;
        }
        break;
    case 7:
        TKeyBoardControl__sub_8000F9CC((int) (0xA));
        break;
    }
}

void *__ct__5TLogoFv(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = (M2C_UNK *)__vt__5TLogo;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D2CC8;
    M2C_FIELD(arg0, u32 *, 0x20) = 0;
    M2C_FIELD(arg0, u32 *, 0x24) = 0;
    M2C_FIELD(arg0, u32 *, 0x28) = 0;
    M2C_FIELD(arg0, u32 *, 0x2C) = 0;
    M2C_FIELD(arg0, u32 *, 0x30) = 0;
    M2C_FIELD(arg0, u32 *, 0x34) = 0;
    return arg0;
}

    extern int lbl_805D49D0;

void TLogo__sub_8013F5AC() {
    delete_all_task_children__9TMainTaskFv(&main_task);
    TLobby__sub_800FD6A0(lbl_804A72D8, sizeof(lbl_804A72D8));
    render_tick__Fv();
}

void TLogo__sub_8013F5E8(void) {
    func_803DCDFC__Fv();
    V3_8013F5E8 a = lbl_8043F150;
    V3_8013F5E8 b = lbl_8043F15C;
    activate_camera_mode(9);
    set_active_camera_pose(&a, &b);
    controller_stuff__Fv();
    TKeyBoardControl__sub_801A5EC4();
    main_task.some_empty_func();
    main_task.run_task();
    main_task.render();
    main_task.render_screen_overlay();
    TLobby__sub_800FA464();
    update_sound_request_slots();
    if (func_801A5E54__Fv() != 0) {
        TKeyBoardControl__sub_8000F92C();
    }
    if (is_ready__22TQuestVmDownLoadServerFv() != 0) {
        TKeyBoardControl__sub_8000F9CC(0);
    }
    render_tick__Fv();
}

void TLogo__sub_8013F6C4(void) {
    s32 i;
    u32 p;

    set_copy_clear_color_argb(0, 0, 0);
    reset_controller_input_state();
    for (i = 0; i < 0x80; i++) {
    }
    init_menu_scene_lights(lbl_804A6F34, 4);
    p = __nw__7TObjectFUl(0x1D4);
    if (p != 0) {
        TCameraCtrl__ct(p, tl_camera);
    }
    V3_8013F6C4 a = lbl_8043F138;
    V3_8013F6C4 b = lbl_8043F144;
    select_active_controller__11TCameraCtrlFc(9);
    set_active_camera_pose(&a, &b);
    TKeyBoardControl__sub_8000F90C(1);
    apply_phase_keyboard_mode();
    run_load_callback_table(lbl_804A72D8, sizeof(lbl_804A72D8));
    if (is_area_transfer_pending() != 0) {
        invoke_callback__6TLobbyFv();
        clear_callback_and_reset_keyboard__6TLobbyFv();
        reset_keyboard_state__6TLobbyFv();
        return;
    }
    clear_callback_and_reset_keyboard__6TLobbyFv();
    create_quad_sprites__13TParticleCtrlFv();
    p = __nw__7TObjectFUl(0x38);
    if (p != 0) {
        ((void *(*)(u32, void *))__ct__5TLogoFv)(p, tl_01);
    }
    p = __nw__7TObjectFUl(0x1C);
    if (p != 0) {
        TWindowCtrlMain__ct(p);
    }
}

int TLogo__sub_8013F7E8(int _w0) {  return lbl_805D49D0; }

    extern int lbl_805D4A50;
int TLogo__sub_8013F7F0(int _w0) {  return lbl_805D4A50; }

    extern int lbl_805D4A40;
int TLogo__sub_8013F7F8(int _w0) {  return lbl_805D4A40; }

s32 TLogo__sub_8013F800(void* p) { return *(s32*)((char*)p + 0x48); }

    extern int lbl_805D4090;
int TLogo__sub_8013F808(void) {  return lbl_805D4090; }

}
