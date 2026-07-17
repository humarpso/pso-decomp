#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void handle_tentacle_state_2__10TObjPlayerFPv(void* p);
void update_orga_flow_shot__10TObjPlayerFi(s32 arg0);
void approach_value_field200__10TObjPlayerFi(s32 arg0);
void TObjPlayer__sub_80126F3C(void);
int TBoss7Tentacle__sub_803D9BA0(void*);
int get_player_list__10TObjPlayerFv(void*);
M2C_UNK approach_value__20TItemEffOrgaFlowShotFPvff(s32, f32, f32);

void handle_tentacle_state_2__10TObjPlayerFPv(void* p) { if (get_player_list__10TObjPlayerFv(p) == 2) { TBoss7Tentacle__sub_803D9BA0((char*)p + 0x1f8); } }

extern const f32 lbl_805DADA0;
extern const f32 lbl_805DADA4;

void update_orga_flow_shot__10TObjPlayerFi(s32 arg0) {
    approach_value__20TItemEffOrgaFlowShotFPvff(arg0 + 0x200, lbl_805DADA0, lbl_805DADA4);
}

extern const f32 lbl_805DADA8;
extern const f32 lbl_805DADAC;

void approach_value_field200__10TObjPlayerFi(s32 arg0) {
    approach_value__20TItemEffOrgaFlowShotFPvff(arg0 + 0x200, lbl_805DADA8, lbl_805DADAC);
}

void TObjPlayer__sub_80126F3C(void) {  }

}
