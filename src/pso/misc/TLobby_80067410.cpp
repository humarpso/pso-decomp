#include "types.h"
#include "pso/misc/TLobby.h"
#include "pso/boss/TObjBoss5PillarDemo.h"

extern "C" {
void load_boss5_common_assets(void);
void fn_802898EC(void);
void TObjBoss5PillarDemo__sub_8028ACE4(void);
int forward_pillar_2B710__19TObjBoss5PillarCtrlFv(void);
extern u32 boss5_ctrl_instance;
void TLobby__sub_80066EC0(void);
void fn_802898E8(void);
void TObjBoss5PillarDemo__sub_8028AB38(void);
void TObjBoss5PillarDemo__sub_8028ACE0(void);
s32 update_pillar__19TObjBoss5PillarCtrlFv();
void queue_destruction__7TObjectFv(void*);

void TLobby::cleanup_pillar_demo() {
    if ((u32) boss5_ctrl_instance != 0U) {
        queue_destruction__7TObjectFv((void*)boss5_ctrl_instance);
        boss5_ctrl_instance = 0U;
    }
    TObjBoss5PillarDemo__sub_8028ACE0();
    update_pillar__19TObjBoss5PillarCtrlFv();
    fn_802898E8();
    TObjBoss5PillarDemo__sub_8028AB38();
    TLobby__sub_80066EC0();
}
void TLobby::cleanup_boss5_pillars() { load_boss5_common_assets(); TObjBoss5PillarDemo::update_active_pillar(); fn_802898EC(); forward_pillar_2B710__19TObjBoss5PillarCtrlFv(); TObjBoss5PillarDemo__sub_8028ACE4(); (*(int *)&boss5_ctrl_instance) = 0; }

}
