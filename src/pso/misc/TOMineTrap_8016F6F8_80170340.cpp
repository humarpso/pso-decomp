#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TOMineTrap__sub_80170340(void);
int TOMineTrap__sub_80170348(void);
void TOMineTrap__sub_80170350(void);
void TOMineTrap__sub_80170354(void);
void TOMineTrap__sub_80170570(void);
void attach_to_keymachine__10TOMineTrapFi(s32 arg0);
s32 can_trigger__10TOMineTrapFPvUi(void *arg0, u32 arg1);
s32 check_trigger__10TOMineTrapFPvUi(void *arg0, u32 arg1);
void init_trap__10TOMineTrapFv(void);
void spawn_effect__10TOMineTrapFi(s32 arg0);
void update_state__10TOMineTrapFPv(void *arg0);
int TAdSinglePlyChrSelectGC__sub_80132F2C(void*, void*);
M2C_UNK TBoss3Volopt__sub_8022675C(s32, s32, M2C_UNK, M2C_UNK);
s32 TOMineTrap__sub_801702C8(void);
s32 TObjPlayer__sub_80019248(u32 a0 = 0);
s32 get_global_state__14TOKeyMachine01Fv();
s32 get_main_phase();

int TOMineTrap__sub_80170340(void) { return 1; }
int TOMineTrap__sub_80170348(void) { return 1; }
void TOMineTrap__sub_80170350(void) {  }
void TOMineTrap__sub_80170354(void) {  }
s32 check_trigger__10TOMineTrapFPvUi(void *arg0, u32 arg1) {
    if (TOMineTrap__sub_801702C8() == 1) {
        return 0;
    }
    if (((s32) M2C_FIELD(arg0, s32 *, 0x344) == 2) && (arg1 == (u32) M2C_FIELD(arg0, u32 *, 0x2A8))) {
        return 0;
    }
    if (TObjPlayer__sub_80019248(arg1) != 0) {
        return 1;
    }
    return 0;
}
s32 can_trigger__10TOMineTrapFPvUi(void *arg0, u32 arg1) {
    if (TOMineTrap__sub_801702C8() == 1) {
        return 0;
    }
    if (((s32) M2C_FIELD(arg0, s32 *, 0x344) == 2) && (arg1 == (u32) M2C_FIELD(arg0, u32 *, 0x2A8))) {
        return 0;
    }
    if (TObjPlayer__sub_80019248(arg1) != 0) {
        return 1;
    }
    return 0;
}

void TOMineTrap__sub_80170570(void) {  }
void init_trap__10TOMineTrapFv(void) { TAdSinglePlyChrSelectGC__sub_80132F2C((void*)16, (void*)16); }
void update_state__10TOMineTrapFPv(void *arg0) {
    s32 temp_r0;

    M2C_FIELD(arg0, s32 *, 0x348) = (s32) M2C_FIELD(arg0, f32 *, 0x70);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x348);
    if (temp_r0 < 0) {
        M2C_FIELD(arg0, s32 *, 0x344) = 0;
        return;
    }
    if (temp_r0 > 0) {
        M2C_FIELD(arg0, s32 *, 0x344) = 1;
        return;
    }
    if (get_main_phase() == 0xE) {
        M2C_FIELD(arg0, s32 *, 0x344) = 0;
        M2C_FIELD(arg0, s32 *, 0x8C) = 0x1E;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x344) = 2;
}

extern s8 lbl_804420A8[];

void spawn_effect__10TOMineTrapFi(s32 arg0) {
    s32 idx = get_global_state__14TOKeyMachine01Fv();
    s32 elem = *(s32 *)(lbl_804420A8 + idx * 4);
    if (elem != -1) {
        TBoss3Volopt__sub_8022675C(elem, arg0 + 0x38, 0, 0);
    }
}

extern s8 lbl_80442018[];

void attach_to_keymachine__10TOMineTrapFi(s32 arg0) {
    s32 idx = get_global_state__14TOKeyMachine01Fv();
    s32 elem = *(s32 *)(lbl_80442018 + idx * 4);
    if (elem != -1) {
        TBoss3Volopt__sub_8022675C(elem, arg0 + 0x38, 0, 0);
    }
}

}
