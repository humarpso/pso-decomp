#include "pso/TFontSmallHelp.h"

struct HelpTextPlayerState {
    u8 unresolved_00[0x84C];
    Vec position;
    u8 unresolved_858[0x558];
    u32 identity;
};
typedef char HelpTextPlayerPosition[offsetof(HelpTextPlayerState, position) == 0x84C ? 1 : -1];
typedef char HelpTextPlayerIdentity[offsetof(HelpTextPlayerState, identity) == 0xDB0 ? 1 : -1];

extern "C" {
void queue_destruction__7TObjectFv(TObject *);
void disallow_rendering__7TObjectFv(TObject *);
TObject *get_instance__15TWindowCtrlMainFv();
HelpTextPlayerState *get_player_by_client_id(u32);
void VecCopy__FP3VecPC3Vec(Vec *, const Vec *);
void TFontSmallHelp__sub_800FC424(TFontSmallHelp *, u32);
void set_help_text__14TFontSmallHelpFPvUi(TFontSmallHelp *, u32);
extern const char *lbl_805D2B20;
}

void TFontSmallHelp::run_task() {
    HelpTextPlayerState *player = get_player_by_client_id(player_id);
    if (player == NULL) {
        queue_destruction__7TObjectFv(this);
        return;
    }
    if (owner_identity != player->identity) {
        queue_destruction__7TObjectFv(this);
        return;
    }
    VecCopy__FP3VecPC3Vec(&position, &player->position);
    age_ticks += 1;
    s32 lifetime = lifetime_ticks;
    if (lifetime > 0 && age_ticks >= lifetime) {
        disallow_rendering__7TObjectFv(this);
        queue_destruction__7TObjectFv(this);
    }
}

TFontSmallHelp::~TFontSmallHelp() {}

TFontSmallHelp::TFontSmallHelp(u32 player, u32 text_color, s32 lifetime, u32 text_id)
    : TObject(get_instance__15TWindowCtrlMainFv()) {
    m_name = lbl_805D2B20;
    HelpTextPlayerState *owner = get_player_by_client_id(player);
    if (owner == NULL) {
        disallow_rendering__7TObjectFv(this);
        queue_destruction__7TObjectFv(this);
        return;
    }
    player_id = player;
    VecCopy__FP3VecPC3Vec(&position, &owner->position);
    owner_identity = owner->identity;
    TFontSmallHelp__sub_800FC424(this, text_color);
    age_ticks = 0;
    lifetime_ticks = lifetime;
    set_help_text__14TFontSmallHelpFPvUi(this, text_id);
}
