#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Elt_801542CC { char pad[0x18]; s32 f18; char pad2[0x2C - 0x1C]; };

extern "C" {

void TOTrapAncient02R__sub_80154D78(void);
void TObjPlayer__sub_801542F4(s32 a);
void apply_status_effect__10TObjPlayerFi(s32 a);
s32 check_flag_pair__10TObjPlayerFii(s32 arg0, s32 arg1);
s32 check_flags__10TObjPlayerFii(s32 arg0, s32 arg1);
void clear_player_status_flag__10TObjPlayerFPviUi(void *arg0, s32 arg1, u32 arg2);
s32 find_or_alloc_slot__10TObjPlayerFUi(u32 arg0);
void init_all_slots__10TObjPlayerFv(void);
void reset_global_table(void);
void reset_photon_effect__10TObjPlayerFPv(void* p);
void set_indexed_flags(void *arg0, s32 index, s32 flags);
u8 test_elt_flag__10TObjPlayerFPvii(void *arg0, s32 arg1, s32 arg2);
int TLobby__sub_801A1FDC(void*, void*);
M2C_UNK TObjPlayer__sub_8015434C(s32, s32, s32);
int TObjPlayer__sub_80154B60(void*);
int TObjPlayer__sub_80154E28(void*, void*);
u32 get_battle_param__10TObjPlayerFi(s32);
int memset(void*, void*, void*);

extern s32 lbl_805D586C;

void apply_status_effect__10TObjPlayerFi(s32 a) {
    TObjPlayer__sub_8015434C(a, 0, lbl_805D586C);
}

extern s32 lbl_805D586C;
extern s32 lbl_805D5870;

void TObjPlayer__sub_801542F4(s32 a) {
    TObjPlayer__sub_8015434C(a, lbl_805D586C, lbl_805D5870);
}

    extern unsigned char lbl_8050DAD0[];
    extern int lbl_805D5878;
void reset_global_table(void) { memset(lbl_8050DAD0, (void*)0, (void*)128); lbl_805D5878 = 0; }

void clear_player_status_flag__10TObjPlayerFPviUi(void *arg0, s32 arg1, u32 arg2) {
    arg0 = M2C_FIELD(arg0, void **, 0xA4);
    if (arg0 != 0) {
        arg0 = (char*)arg0 + (arg1 * 0x2C);
        M2C_FIELD(arg0, u32 *, 0x18) &= ~arg2;
    }
}

void set_indexed_flags(void *arg0, s32 index, s32 flags) {
    void *entry;

    entry = (void *)M2C_FIELD(arg0, u32 *, 0xA4);
    if (entry != NULL) {
        entry = (void *)((u8 *)entry + (index * 0x2C));
        M2C_FIELD(entry, s32 *, 0x18) =
            (s32)(M2C_FIELD(entry, s32 *, 0x18) | flags);
    }
}

u8 test_elt_flag__10TObjPlayerFPvii(void *arg0, s32 arg1, s32 arg2) {
    struct Elt_801542CC *temp_r3;

    temp_r3 = M2C_FIELD(arg0, struct Elt_801542CC **, 0xA4);
    if (temp_r3 != 0) {
        return (u8) ((arg2 & temp_r3[arg1].f18) != 0);
    }
    return 0U;
}

void reset_photon_effect__10TObjPlayerFPv(void* p) { TLobby__sub_801A1FDC(p, (void*)0); TObjPlayer__sub_80154B60(p); }

void TOTrapAncient02R__sub_80154D78(void) {  }
void init_all_slots__10TObjPlayerFv(void) { { int i; for (i = 0; i < 16; i++) { TObjPlayer__sub_80154E28((void*)i, (void*)0); } } }
s32 find_or_alloc_slot__10TObjPlayerFUi(u32 arg0) {
    s32 var_r31;
    u32 temp_r3;

    var_r31 = 0;
loop_1:
    temp_r3 = get_battle_param__10TObjPlayerFi(var_r31);
    if (temp_r3 == arg0) {
        return var_r31;
    }
    if (temp_r3 == 0U) {
        return TObjPlayer__sub_80154E28((void*)(var_r31), (void*)(arg0));
    }
    var_r31 += 1;
    if (var_r31 >= 0x10) {
        return -1;
    }
    goto loop_1;
}

s32 check_flag_pair__10TObjPlayerFii(s32 arg0, s32 arg1) {
    if (((arg0 & 0x2000) && (arg1 & 0x100)) || ((arg0 & 0x100) && (arg1 & 0x2000))) {
        return 1;
    }
    if (((arg0 & 0x4000) && (arg1 & 0x200)) || ((arg0 & 0x200) && (arg1 & 0x4000))) {
        return 1;
    }
    if (((arg0 & 0x8000) && (arg1 & 0x400)) || ((arg0 & 0x400) && (arg1 & 0x8000))) {
        return 1;
    }
    if (((arg0 & 0x10000) && (arg1 & 0x800)) || ((arg0 & 0x800) && (arg1 & 0x10000))) {
        return 1;
    }
    if (((arg0 & 0x40000) && (arg1 & 0x1000)) || ((arg0 & 0x1000) && (arg1 & 0x40000))) {
        return 1;
    }
    return 0;
}

s32 check_flags__10TObjPlayerFii(s32 arg0, s32 arg1) {
    s32 temp_r5;

    temp_r5 = arg0 & arg1;
    if (!(temp_r5 & 1)) {
        return 0;
    }
    if (!(temp_r5 & 6)) {
        return 0;
    }
    if (((arg0 & 8) && (arg1 & 0x2000)) || ((arg1 & 8) && (arg0 & 0x2000))) {
        return 0;
    }
    if (((arg0 & 0x10) && (arg1 & 0x4000)) || ((arg1 & 0x10) && (arg0 & 0x4000))) {
        return 0;
    }
    if (((arg0 & 0x20) && (arg1 & 0x8000)) || ((arg1 & 0x20) && (arg0 & 0x8000))) {
        return 0;
    }
    if (((arg0 & 0x40) && (arg1 & 0x10000)) || ((arg1 & 0x40) && (arg0 & 0x10000))) {
        return 0;
    }
    if (((arg0 & 0x80) && (arg1 & 0x40000)) || ((arg1 & 0x80) && (arg0 & 0x40000))) {
        return 0;
    }
    return 1;
}

}
