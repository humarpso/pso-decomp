#include "types.h"

extern "C" {
int load_boss5_common_assets(void);
int fn_802898EC(void);
int update_active_pillar__19TObjBoss5PillarDemoFv(void);
int TObjBoss5PillarDemo__sub_8028ACE4(void);
int forward_pillar_2B710__19TObjBoss5PillarCtrlFPv(void);
extern u32 boss5_ctrl_instance;
void cleanup_boss5_pillars__6TLobbyFv(void);
}

extern "C" {

void cleanup_pillar_demo__6TLobbyFv(void);
s32 TLobby__sub_80066EC0();
s32 fn_802898E8();
s32 TObjBoss5PillarDemo__sub_8028AB38();
s32 TObjBoss5PillarDemo__sub_8028ACE0();
s32 update_pillar__19TObjBoss5PillarCtrlFPv();
void queue_destruction__7TObjectFv(void*);

extern u32 boss5_ctrl_instance;

void cleanup_pillar_demo__6TLobbyFv(void) {
    if ((u32) boss5_ctrl_instance != 0U) {
        queue_destruction__7TObjectFv((void*)boss5_ctrl_instance);
        boss5_ctrl_instance = 0U;
    }
    TObjBoss5PillarDemo__sub_8028ACE0();
    update_pillar__19TObjBoss5PillarCtrlFPv();
    fn_802898E8();
    TObjBoss5PillarDemo__sub_8028AB38();
    TLobby__sub_80066EC0();
}
void cleanup_boss5_pillars__6TLobbyFv(void) { load_boss5_common_assets(); update_active_pillar__19TObjBoss5PillarDemoFv(); fn_802898EC(); forward_pillar_2B710__19TObjBoss5PillarCtrlFPv(); TObjBoss5PillarDemo__sub_8028ACE4(); (*(int *)&boss5_ctrl_instance) = 0; }

}
