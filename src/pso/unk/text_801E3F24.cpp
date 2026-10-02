#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Ent_801E3FA4 {
    u16 id;
    u16 mask;
    void (*fn)(void *);
};

struct Msg_801E3FA4 {
    u8 a;
    u8 b;
};

extern "C" {
void TObjPlayer__sub_801E3F24(s32 arg0);
void TObjPlayer__sub_801E3F30(f32 farg0, f32 farg1, f32 farg2);
void fn_801E3F44(f32 farg0, f32 farg1);
void debug_print__FPCc(const char *);
s32 get_global_state__14TOKeyMachine01Fv();
int sprintf(char *, const char *, ...);
extern char lbl_80449748[];
extern u8 lbl_804C5260[];
extern Ent_801E3FA4 lbl_804C5284[];
void dispatch_6x_subcommand(Msg_801E3FA4 *arg0);
}

extern "C" {

void TObjCMHairMenu__sub_801E3F54(void* p, void* q);
void handle_6x02(void);
void handle_6x03(void);
void handle_6x04_legacy_activate_switch_by_token(void *arg0);
void handle_6x9E_player_camera_shutter_sound(void);
M2C_UNK TObjDoorKey__sub_8018FAEC(u16, u16);
void TObjEneRe4Sorcerer__sub_801E3F14(void);
void TObjEneRe4Sorcerer__sub_801E3F18(void);
void TObjEneRe4Sorcerer__sub_801E3F1C(void);
void TObjEneRe4Sorcerer__sub_801E3F20(void);
M2C_UNK bswap_switch_activate_token__6TLobbyFPv();

void TObjPlayer__sub_801E3F24(s32 arg0) {
    *(s32 *)0xCC008000 = arg0;
}

void TObjPlayer__sub_801E3F30(f32 farg0, f32 farg1, f32 farg2) {
    *(f32 *)0xCC008000 = farg0;
    *(f32 *)0xCC008000 = farg1;
    *(f32 *)0xCC008000 = farg2;
}

void fn_801E3F44(f32 farg0, f32 farg1) {
    *(f32 *)0xCC008000 = farg0;
    *(f32 *)0xCC008000 = farg1;
}

void TObjCMHairMenu__sub_801E3F54(void* p, void* q) { *(u32*)((char*)p + 0x0) = *(u32*)((char*)q + 0x0); }

void handle_6x9E_player_camera_shutter_sound(void) {

}

void handle_6x04_legacy_activate_switch_by_token(void *arg0) {
    bswap_switch_activate_token__6TLobbyFPv();
    TObjDoorKey__sub_8018FAEC(M2C_FIELD(arg0, u16 *, 2), M2C_FIELD(arg0, u16 *, 4));
}

void handle_6x03(void) {  }
void handle_6x02(void) {  }
void dispatch_6x_subcommand(Msg_801E3FA4 *arg0) {
    s32 i;
    char buf[0x80];
    s32 key = arg0->a;
    for (i = 0; lbl_804C5284[i].id != 0; i++) {
        if (key == lbl_804C5284[i].id && (lbl_804C5284[i].mask & lbl_804C5260[get_global_state__14TOKeyMachine01Fv()])) {
            sprintf(buf, lbl_80449748, arg0->a, arg0->b);
            debug_print__FPCc(buf);
            lbl_804C5284[i].fn(arg0);
            return;
        }
    }
}

}
