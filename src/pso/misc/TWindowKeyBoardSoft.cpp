#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void convert_input_text__19TWindowKeyBoardSoftFPv(void *arg0);
void process_input__19TWindowKeyBoardSoftFPv(u8 *arg0);
void select_next__19TWindowKeyBoardSoftFPv(void *arg0);
void set_kana_mode__19TWindowKeyBoardSoftFPv(void *arg0);
void set_kanji_mode__19TWindowKeyBoardSoftFPv(void *arg0);
void update__19TWindowKeyBoardSoftFPv(void *arg0);
void update_input__19TWindowKeyBoardSoftFPvPv(void* p, void* a1);
M2C_UNK TWindowKeyBoardSoft__sub_8025CF50(void *, int, int);
M2C_UNK TWindowKeyBoardSoft__sub_8025CFA8(void *, M2C_UNK *);
int TWindowKeyBoardSoft__sub_8025D1C8(void*, void*);
int TWindowKeyBoardSoft__sub_8025D264(void*, void*);
s32 TWindowKeyBoardSoft__sub_8025D378(void *, void *);
M2C_UNK TWindowKeyBoardSoft__sub_8025D47C(void *, M2C_UNK *, s8 *);
s32 TWindowKeyBoardSoft__sub_8025D544(void *, M2C_UNK *, s8 *);
M2C_UNK TWindowKeyBoardSoft__sub_8025DBDC(void *, M2C_UNK);
M2C_UNK TWindowKeyBoardSoft__sub_803E66D0(void *, M2C_UNK *);
M2C_UNK TWindowKeyBoardSoft__sub_803E6704(void *, M2C_UNK *);
s32 TWindowKeyBoardSoft__sub_803E676C(void *, void *);
M2C_UNK TWindowKeyBoardSoft__sub_803E6868(void *, void *);
M2C_UNK TWindowKeyBoardSoft__sub_803E689C(void *, void *);
s32 TWindowKeyBoardSoft__sub_803E68D0(u8 *, M2C_UNK *, s8 *);
s32 fn_8025CE00(void *, u8 *);
M2C_UNK strncpy(M2C_UNK *, u8 *, M2C_UNK);

void update_input__19TWindowKeyBoardSoftFPvPv(void* p, void* a1) { TWindowKeyBoardSoft__sub_8025D1C8(p, *(void**)((char*)p + 0xa0)); TWindowKeyBoardSoft__sub_8025D264(p, a1); }

void set_kanji_mode__19TWindowKeyBoardSoftFPv(void *arg0) {
    s8 sp8[0x200];

    if (!(M2C_FIELD(arg0, u16 *, 0x60) & 0x10)) {
        TWindowKeyBoardSoft__sub_803E66D0(sp8, (M2C_UNK *)(sp8 + 0x100));
        M2C_FIELD(arg0, s32 *, 0xA8) = 0xF0;
        update_input__19TWindowKeyBoardSoftFPvPv((void*)(arg0), (void*)(sp8));
    }
}

void set_kana_mode__19TWindowKeyBoardSoftFPv(void *arg0) {
    s8 sp8[0x200];

    if (!(M2C_FIELD(arg0, u16 *, 0x60) & 0x10)) {
        TWindowKeyBoardSoft__sub_803E6704(sp8, (M2C_UNK *)(sp8 + 0x100));
        M2C_FIELD(arg0, s32 *, 0xA8) = 0xF1;
        update_input__19TWindowKeyBoardSoftFPvPv((void*)(arg0), (void*)(sp8));
    }
}

void process_input__19TWindowKeyBoardSoftFPv(u8 *arg0) {
    u8 sp108[0x100];
    u8 sp8[0x100];
    s32 temp_r3;
    u8 *temp_r5;

    if (!(M2C_FIELD(arg0, u16 *, 0x60) & 0x10)) {
        temp_r3 = TWindowKeyBoardSoft__sub_803E676C((void *) (sp8), (void *) (sp108));
        if (temp_r3 != 0) {
            M2C_FIELD(arg0, s32 *, 0xAC) = temp_r3;
            M2C_FIELD(M2C_FIELD(arg0, void **, 0xA0), u8 *, 2) = (u8) M2C_FIELD(arg0, s32 *, 0xA8);
            temp_r5 = (unsigned char *) (M2C_FIELD(arg0, void **, 0xA0));
            M2C_FIELD(arg0, void **, 0xA0) = (void *) (temp_r5 - ((s8) M2C_FIELD(temp_r5, u8 *, 0) + 3));
            M2C_FIELD(arg0, s32 *, 0xA8) = (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0xA0), u8 *, 2);
            TWindowKeyBoardSoft__sub_8025CF50((void *) (arg0), (int) (M2C_FIELD(arg0, s32 *, 0xA8)), (int) (temp_r5));
        }
    }
}

void select_next__19TWindowKeyBoardSoftFPv(void *arg0) {
    struct { u8 _pad[0x100]; } sp108;
    struct { u8 _pad[0x100]; } sp8;

    if (!(M2C_FIELD(arg0, u16 *, 0x60) & 0x10)) {
        do {
            TWindowKeyBoardSoft__sub_803E6868(&sp8, &sp108);
            M2C_FIELD(arg0, s32 *, 0xA8) = (s32) (M2C_FIELD(arg0, s32 *, 0xA8) + 1);
            if ((s32) M2C_FIELD(arg0, s32 *, 0xA8) > (s32) M2C_FIELD(arg0, s32 *, 0xAC)) {
                M2C_FIELD(arg0, s32 *, 0xA8) = 1;
            }
        } while (TWindowKeyBoardSoft__sub_8025D378(arg0, &sp8) == 0);
        update_input__19TWindowKeyBoardSoftFPvPv((void*)(arg0), (void*)(&sp8));
    }
}

void update__19TWindowKeyBoardSoftFPv(void *arg0) {
    u8 sp108[0x100];
    u8 sp8[0x100];

    if (!(M2C_FIELD(arg0, u16 *, 0x60) & 0x10)) {
        do {
            TWindowKeyBoardSoft__sub_803E689C(sp8, sp108);
            M2C_FIELD(arg0, s32 *, 0xA8) = (s32) (M2C_FIELD(arg0, s32 *, 0xA8) - 1);
            if ((s32) M2C_FIELD(arg0, s32 *, 0xA8) <= 0) {
                M2C_FIELD(arg0, s32 *, 0xA8) = (s32) M2C_FIELD(arg0, s32 *, 0xAC);
            }
        } while (TWindowKeyBoardSoft__sub_8025D378(arg0, sp8) == 0);
        update_input__19TWindowKeyBoardSoftFPvPv((void*)(arg0), (void*)(sp8));
    }
}

void convert_input_text__19TWindowKeyBoardSoftFPv(void *arg0) {
    s8 sp108[0x100];
    s8 sp8[0x100];
    u16 *var_r3;
    int temp_r0;
    u8 *var_r4;

    if (!(M2C_FIELD(arg0, u16 *, 0x60) & 0x80)) {
        TWindowKeyBoardSoft__sub_8025DBDC(arg0, 1);
    }
    var_r3 = M2C_FIELD(arg0, u16 **, 0x84);
    var_r4 = M2C_FIELD(arg0, u8 **, 0x9C);
    while ((temp_r0 = *var_r3) != 0) {
        *var_r4 = (u8) (temp_r0 >> 8);
        if ((s8) *var_r4 != 0) {
            var_r4 += 1;
        }
        temp_r0 = *var_r3;
        var_r3 = (u16 *)((u8 *)var_r3 + 2);
        *var_r4 = (u8) temp_r0;
        var_r4 += 1;
    }
    *var_r4 = 0;
    M2C_FIELD(arg0, u8 **, 0xA0) = (u8 *) M2C_FIELD(arg0, u8 **, 0x9C);
    if (fn_8025CE00(arg0, M2C_FIELD(arg0, u8 **, 0x9C)) != 0) {
        M2C_FIELD(arg0, u16 *, 0x60) = (u16) (M2C_FIELD(arg0, u16 *, 0x60) | 0x10);
        M2C_FIELD(arg0, s32 *, 0xAC) = 1;
        M2C_FIELD(arg0, s32 *, 0xA8) = 1;
        strncpy((M2C_UNK *)sp8, M2C_FIELD(arg0, u8 **, 0x9C), 0x100);
        sp108[0] = 0;
    } else {
        M2C_FIELD(arg0, u16 *, 0x60) = (u16) (M2C_FIELD(arg0, u16 *, 0x60) & 0xFFFFFFEF);
        M2C_FIELD(arg0, s32 *, 0xAC) = TWindowKeyBoardSoft__sub_803E68D0(M2C_FIELD(arg0, u8 **, 0x9C), (M2C_UNK *)sp8, sp108);
        M2C_FIELD(arg0, s32 *, 0xA8) = 1;
        TWindowKeyBoardSoft__sub_8025CFA8(arg0, (M2C_UNK *)sp8);
    }
    M2C_FIELD(arg0, s32 *, 0xB0) = 0x94;
    if (TWindowKeyBoardSoft__sub_8025D544(arg0, (M2C_UNK *)sp8, sp108) != 0) {
        TWindowKeyBoardSoft__sub_8025D47C(arg0, (M2C_UNK *)sp8, sp108);
        M2C_FIELD(arg0, u16 *, 0x60) = (u16) (M2C_FIELD(arg0, u16 *, 0x60) | 4);
    }
}

}
