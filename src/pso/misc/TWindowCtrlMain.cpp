#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
bool TWindowCtrlMain__sub_8024D868(u8 *arg0);
}

extern "C" {

int TWindowCtrlMain__sub_8024D838(void);
void TWindowCtrlMain__sub_8024D85C(void* p);
void TWindowCtrlMain__sub_8024D8A8(void* p);
void free_member__15TWindowCtrlMainFPv(void* p);
s32 get_main_menu_message__15TWindowCtrlMainFPv(void *arg0);
void render__15TWindowCtrlMainFv(void* p);
int run_task__15TWindowCtrlMainFv(void* p);
void update_child_2c__15TWindowCtrlMainFPv(void* p);
void update_field28__15TWindowCtrlMainFPv(void* p);
int TCameraCtrl__sub_80068EF0(void);
int TCameraCtrl__sub_80069024(void);
int TWindowCtrlMain__sub_8024CE24(void);
int TWindowCtrlMain__sub_8024D7C0(void*);
s32 TWindowMainMenu__sub_8024E3D4(void *);
s32 TWindowMainMenu__sub_8024E3E0(void *);
int begin_effect_render__13TParticleCtrlFv(void);
int end_effect_render__13TParticleCtrlFv(void);
int fn_802437C4(void*);
int open_submenu__15TWindowSubEquipFii(void*);
int render_nodes__7TObjectFv(void);
int reset_transform_state__10TObjPlayerFv(void*);
int send_and_handle__6TLobbyFPvii(void*);
int try_open_battle_menu__15TWindowMainMenuFPvs(void*);
int update_com_card__9TWindowDDFPv(void*);

void render__15TWindowCtrlMainFv(void* p) { reset_transform_state__10TObjPlayerFv(p); begin_effect_render__13TParticleCtrlFv(); TCameraCtrl__sub_80069024(); TWindowCtrlMain__sub_8024CE24(); render_nodes__7TObjectFv(); TCameraCtrl__sub_80068EF0(); end_effect_render__13TParticleCtrlFv(); }
int run_task__15TWindowCtrlMainFv(void* p) { return update_com_card__9TWindowDDFPv(p); }

int TWindowCtrlMain__sub_8024D838(void) { return TWindowCtrlMain__sub_8024D7C0((void*)(0)); }
void TWindowCtrlMain__sub_8024D85C(void* p) { *(s16*)((char*)p + 0x20) = 60; }

bool TWindowCtrlMain__sub_8024D868(u8 *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x20) <= 0;
}

void update_child_2c__15TWindowCtrlMainFPv(void* p) { void* m = *(void**)((char*)p + 0x2c); if (m) send_and_handle__6TLobbyFPvii(m); }
void TWindowCtrlMain__sub_8024D8A8(void* p) { void* m = *(void**)((char*)p + 0x34); if (m) fn_802437C4(m); }
void update_field28__15TWindowCtrlMainFPv(void* p) { void* m = *(void**)((char*)p + 0x28); if (m) open_submenu__15TWindowSubEquipFii(m); }
void free_member__15TWindowCtrlMainFPv(void* p) { void* m = *(void**)((char*)p + 0x28); if (m) try_open_battle_menu__15TWindowMainMenuFPvs(m); }
s32 get_main_menu_message__15TWindowCtrlMainFPv(void *arg0) {
    void *p = M2C_FIELD(arg0, void **, 0x28);
    if (p == 0) {
        return 0;
    }
    return TWindowMainMenu__sub_8024E3D4(p);
}

}
