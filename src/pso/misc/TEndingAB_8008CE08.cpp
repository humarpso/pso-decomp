#include "pso/TEndingAB.h"

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8008CE80___vt__9TEndingAB { M2C_UNK value; u8 remaining[0x14]; };
typedef char RecoveredGlobal_8008CE80___vt__9TEndingAB_size[sizeof(RecoveredGlobal_8008CE80___vt__9TEndingAB) == 0x18 ? 1 : -1];

extern "C" {
s32 TKeyBoardControl__sub_8000F828(void);
void init_float_table__9TEndingABFPv(void *);
void __ct__7TObjectFP7TObject(void *, void *);
extern RecoveredGlobal_8008CE80___vt__9TEndingAB __vt__9TEndingAB;
extern s32 lbl_805D2958;
extern s32 TEndingAB__fade_sequence_state;
u8 *__ct__9TEndingABFv(u8 *arg0, u8 *arg1);
s32 fn_8001A988(void);
void bind_gvm_texture_list(void *, void *);
extern u8 lbl_8043988C[];
extern u8 lbl_804398A4[];
extern u8 lbl_804398B8[];
extern u8 lbl_804398CC[];
extern u8 ending_wall_texture_table[];
extern u32 ending_ab_wall_texture_list;
extern s32 game_difficulty_selection;
void bind_ending_wall_textures__6TSceneFv(void);
}

extern "C" {

void destroy_instance__9TEndingABFv(void);
int run_task__9TEndingABFv(void* p);
void TLobby__sub_803DA16C(void*);
int advance_fade_sequence__9TEndingABFPv(void*);

int run_task__9TEndingABFv(void* p) { return advance_fade_sequence__9TEndingABFPv(p); }

extern u32 ending_ab_wall_texture_list;

TEndingAB::~TEndingAB() {}
u8 *__ct__9TEndingABFv(u8 *arg0, u8 *arg1) {
    s32 temp_r3;
    __ct__7TObjectFP7TObject(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__9TEndingAB.value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D2958;
    M2C_FIELD(arg0, s32 *, 0x1C) = -1;
    TEndingAB__fade_sequence_state = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0xFF;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    init_float_table__9TEndingABFPv(arg0);
    temp_r3 = TKeyBoardControl__sub_8000F828();
    switch (temp_r3) {
    case 0:
        M2C_FIELD(arg0, s32 *, 0xEC) = 0x1E;
        break;
    case 1:
        M2C_FIELD(arg0, s32 *, 0xEC) = 0x19;
        break;
    }
    return arg0;
}

void destroy_instance__9TEndingABFv(void) {
    if ((u32) ending_ab_wall_texture_list != 0U) {
        TLobby__sub_803DA16C((void*)ending_ab_wall_texture_list);
        ending_ab_wall_texture_list = 0U;
    }
}
void bind_ending_wall_textures__6TSceneFv(void) {
    u8 *base = ending_wall_texture_table;
    u8 *t;
    if (fn_8001A988() != 0) {
        t = base + 0x2B8;
        (*(u8 * *)&ending_ab_wall_texture_list) = t;
        bind_gvm_texture_list(lbl_8043988C, t);
    } else {
        switch (game_difficulty_selection) {
        case 0:
        case 1:
            t = base + 0xA8;
            (*(u8 * *)&ending_ab_wall_texture_list) = t;
            bind_gvm_texture_list(lbl_804398A4, t);
            break;
        case 2:
            t = base + 0x158;
            (*(u8 * *)&ending_ab_wall_texture_list) = t;
            bind_gvm_texture_list(lbl_804398B8, t);
            break;
        case 3:
            t = base + 0x208;
            (*(u8 * *)&ending_ab_wall_texture_list) = t;
            bind_gvm_texture_list(lbl_804398CC, t);
            break;
        }
    }
}

}
