#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
int fn_80066F10(void);
int fn_802898EC(void);
int update_active_pillar__19TObjBoss5PillarDemoFv(void);
int TObjBoss5PillarDemo__sub_8028ACE4(void);
int forward_pillar_2B710__19TObjBoss5PillarCtrlFPv(void);
extern u32 lbl_805D4DE0;
void cleanup_boss5_pillars__6TLobbyFv(void);
}

extern "C" {

void cleanup_pillar_demo__6TLobbyFv(void);
M2C_UNK TLobby__sub_80066EC0();
M2C_UNK fn_802898E8();
M2C_UNK TObjBoss5PillarDemo__sub_8028AB38();
M2C_UNK TObjBoss5PillarDemo__sub_8028ACE0();
M2C_UNK update_pillar__19TObjBoss5PillarCtrlFPv();
void queue_destruction__7TObjectFv(void*);

extern u32 lbl_805D4DE0;

void cleanup_pillar_demo__6TLobbyFv(void) {
    if ((u32) lbl_805D4DE0 != 0U) {
        queue_destruction__7TObjectFv((void*)lbl_805D4DE0);
        lbl_805D4DE0 = 0U;
    }
    TObjBoss5PillarDemo__sub_8028ACE0();
    update_pillar__19TObjBoss5PillarCtrlFPv();
    fn_802898E8();
    TObjBoss5PillarDemo__sub_8028AB38();
    TLobby__sub_80066EC0();
}
void cleanup_boss5_pillars__6TLobbyFv(void) { fn_80066F10(); update_active_pillar__19TObjBoss5PillarDemoFv(); fn_802898EC(); forward_pillar_2B710__19TObjBoss5PillarCtrlFPv(); TObjBoss5PillarDemo__sub_8028ACE4(); (*(int *)&lbl_805D4DE0) = 0; }

}
