#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_8023F1B8_lbl_804CCDA8 {
    M2C_UNK value;
    u8 remaining[0xB4];
};

struct RecoveredGlobal_8023F1B8_lbl_804CCE60 {
    M2C_UNK value;
    u8 remaining[0x34];
};

struct RecoveredGlobal_8023F1B8_main_task {
    M2C_UNK value;
    u8 remaining[0x30];
};

typedef s32 M2C_UNK;
struct Vec_8023F22C { f32 x, y, z; };

extern "C" {
s32 queue_destruction__7TObjectFv(void *);
s32 free_heap__13TParticleCtrlFv();
s32 clear_resource_load_tasks();
s32 TLobby__sub_800FD6A0(void *, int);
s32 render_tick__Fv();
s32 TLobby__sub_8022743C();
s32 refresh_render_state__6TLobbyFv();
s32 delete_all_task_children__9TMainTaskFv(void *);
extern RecoveredGlobal_8023F1B8_lbl_804CCDA8 lbl_804CCDA8;
extern RecoveredGlobal_8023F1B8_lbl_804CCE60 lbl_804CCE60;
extern RecoveredGlobal_8023F1B8_main_task main_task;
extern u32 lbl_805D63CC;
void TLobby__sub_8023F1B8(void);
void TCameraCtrl__sub_80069C94(Vec_8023F22C *, Vec_8023F22C *);
void TCameraCtrl__sub_8006A5EC(s32);
void TCameraCtrl__ct(void *, void *);
void init_heap__13TParticleCtrlFPv(s32);
void reset_keyboard_state__6TLobbyFv(void);
s32 is_area_transfer_pending(void);
void clear_callback_and_reset_keyboard__6TLobbyFv(void);
void TLobby__sub_800F8B20(void);
void invoke_callback__6TLobbyFv(void);
s32 clear_resource_load_tasks();
void TLobby__sub_800FD6F8(void *, s32);
void TObjLight__sub_80133A04(void *, s32);
void TKeyBoardControl__sub_801A66B8(void);
void TLobby__sub_801E2F44(s32, s32, s32);
void create_quad_sprites__13TParticleCtrlFv(void);
void load_floor_sound_bank(s32);
void *__nw__7TObjectFUl(u32);
void TWindowCtrlMain__ct(void *);
f32 TBoss8Dragon__sub_803D64C0(s32);
f32 TBoss8Dragon__sub_803D64DC(s32);
void TCameraCtrl__sub_803D6688(f32, f32);
extern Vec_8023F22C lbl_8044DCE8;
extern Vec_8023F22C lbl_8044DCF4;
extern RecoveredGlobal_8023F1B8_lbl_804CCDA8 lbl_804CCDA8;
extern RecoveredGlobal_8023F1B8_lbl_804CCE60 lbl_804CCE60;
extern u8 lbl_804A6F34[];
extern Vec_8023F22C TObjLight__data_80506320;
extern void *tl_camera;
extern u32 lbl_805D63CC;
extern const f32 lbl_805DC9B8;
extern const f32 lbl_805DC9BC;
void TObjLight__sub_8023F22C(void);
}

extern "C" {

typedef char RecoveredGlobal_8023F1B8_lbl_804CCDA8_size[sizeof(RecoveredGlobal_8023F1B8_lbl_804CCDA8) == 0xB8 ? 1 : -1];
typedef char RecoveredGlobal_8023F1B8_lbl_804CCE60_size[sizeof(RecoveredGlobal_8023F1B8_lbl_804CCE60) == 0x38 ? 1 : -1];
typedef char RecoveredGlobal_8023F1B8_main_task_size[sizeof(RecoveredGlobal_8023F1B8_main_task) == 0x34 ? 1 : -1];
void TLobby__sub_8023F1B8(void) {
    refresh_render_state__6TLobbyFv();
    TLobby__sub_8022743C();
    if ((u32) lbl_805D63CC != 0U) {
        queue_destruction__7TObjectFv((void *) (lbl_805D63CC));
        lbl_805D63CC = 0U;
    }
    delete_all_task_children__9TMainTaskFv((void *) (&main_task.value));
    TLobby__sub_800FD6A0((void *) (&lbl_804CCE60.value), (int) (0x38));
    TLobby__sub_800FD6A0((void *) (&lbl_804CCDA8.value), (int) (0xB8));
    free_heap__13TParticleCtrlFv();
    clear_resource_load_tasks();
    render_tick__Fv();
}
void TObjLight__sub_8023F22C(void) {
    s32 i;
    f32 c;
    void *p;
    TCameraCtrl__sub_803D6688(lbl_805DC9B8, lbl_805DC9B8);
    TLobby__sub_801E2F44(0, 0, 0);
    for (i = 0; i < 0x80; i++) {
    }
    TKeyBoardControl__sub_801A66B8();
    clear_resource_load_tasks();
    reset_keyboard_state__6TLobbyFv();
    TLobby__sub_800F8B20();
    TLobby__sub_800FD6F8(&lbl_804CCDA8.value, 0xb8);
    if (is_area_transfer_pending() != 0) {
        invoke_callback__6TLobbyFv();
        clear_callback_and_reset_keyboard__6TLobbyFv();
        reset_keyboard_state__6TLobbyFv();
        return;
    }
    TLobby__sub_800FD6F8(&lbl_804CCE60.value, 0x38);
    if (is_area_transfer_pending() != 0) {
        invoke_callback__6TLobbyFv();
        clear_callback_and_reset_keyboard__6TLobbyFv();
        reset_keyboard_state__6TLobbyFv();
        return;
    }
    clear_callback_and_reset_keyboard__6TLobbyFv();
    init_heap__13TParticleCtrlFPv(0x100000);
    TObjLight__sub_80133A04(lbl_804A6F34, 4);
    TObjLight__data_80506320.y = lbl_805DC9BC * TBoss8Dragon__sub_803D64C0(0x1555);
    c = TBoss8Dragon__sub_803D64DC(0x1555);
    TObjLight__data_80506320.x = c * TBoss8Dragon__sub_803D64C0(0x9000);
    TObjLight__data_80506320.z = c * TBoss8Dragon__sub_803D64DC(0x9000);
    p = __nw__7TObjectFUl(0x1d4);
    if (p != NULL) {
        TCameraCtrl__ct(p, tl_camera);
    }
    {
        Vec_8023F22C eye = lbl_8044DCE8;
        Vec_8023F22C at = lbl_8044DCF4;
        TCameraCtrl__sub_8006A5EC(9);
        TCameraCtrl__sub_80069C94(&eye, &at);
    }
    create_quad_sprites__13TParticleCtrlFv();
    p = __nw__7TObjectFUl(0x1c);
    if (p != NULL) {
        TWindowCtrlMain__ct(p);
    }
    lbl_805D63CC = 0;
    load_floor_sound_bank(0);
}

}
