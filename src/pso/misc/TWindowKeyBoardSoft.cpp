#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct KbSoft_8025D47C {
    u8 pad0[0x9c];
    u8 *base;
    u8 *buf;
    u8 *cursor;
    s32 kind;
    u8 padac[4];
    s32 remain;
};

typedef s32 M2C_UNK;
struct KbSoft_8025D7FC {
    u8 pad0[0x60];
    u16 flags;
    u8 pad62[0xa8 - 0x62];
    s32 sel;
    s32 count;
};

struct KbSoft_8025D8C8 {
    u8 pad0[0x60];
    u16 flags;
    u8 pad62[0xa8 - 0x62];
    s32 sel;
    s32 count;
};

extern "C" {
s32 strnlen__19TWindowKeyBoardSoftFPvUi(void *, u32);
M2C_UNK strncpy(M2C_UNK *, u8 *, M2C_UNK);
void TWindowKeyBoardSoft__sub_8025D47C(KbSoft_8025D47C *self, char *name, char *text);
M2C_UNK TWindowKeyBoardSoft__sub_8025CF50(void *, int, int);
M2C_UNK TWindowKeyBoardSoft__sub_8025CFA8(void *, M2C_UNK *);
M2C_UNK TWindowKeyBoardSoft__sub_8025D3CC(void *, void *);
void TWindowKeyBoardSoft__sub_8025D47C(KbSoft_8025D47C *self, char *name, char *text);
s32 TWindowKeyBoardSoft__sub_8025D544(void *, M2C_UNK *, s8 *);
s32 TWindowKeyBoardSoft__sub_803E67A0(void *, void *);
M2C_UNK TWindowKeyBoardSoft__sub_803E67D4(void *, void *);
M2C_UNK TWindowKeyBoardSoft__sub_803E6868(void *, void *);
void TWindowKeyBoardSoft__sub_8025D7FC(KbSoft_8025D7FC *self);
M2C_UNK TWindowKeyBoardSoft__sub_8025CF50(void *, int, int);
M2C_UNK TWindowKeyBoardSoft__sub_8025CFA8(void *, M2C_UNK *);
M2C_UNK TWindowKeyBoardSoft__sub_8025D3CC(void *, void *);
void TWindowKeyBoardSoft__sub_8025D47C(KbSoft_8025D47C *self, char *name, char *text);
s32 TWindowKeyBoardSoft__sub_8025D544(void *, M2C_UNK *, s8 *);
M2C_UNK TWindowKeyBoardSoft__sub_803E67D4(void *, void *);
s32 TWindowKeyBoardSoft__sub_803E67A0(void *, void *);
M2C_UNK TWindowKeyBoardSoft__sub_803E6868(void *, void *);
void TWindowKeyBoardSoft__sub_8025D8C8(KbSoft_8025D8C8 *self);
}

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

typedef s32 M2C_UNK;
void TWindowKeyBoardSoft__sub_8025D47C(KbSoft_8025D47C *self, char *name, char *text) {
    u8 *p = self->buf;
    s32 n1 = strnlen__19TWindowKeyBoardSoftFPvUi(name, 0x100);
    s32 n2;
    p[1] = n1;
    p[2] = self->kind;
    p += 3;
    strncpy((M2C_UNK *)p, (u8 *)name, n1);
    p += n1;
    n1 = (s8)n1;
    n2 = strnlen__19TWindowKeyBoardSoftFPvUi(text, 0x100);
    p[0] = n1;
    p[1] = n2;
    p[2] = 1;
    p += 3;
    strncpy((M2C_UNK *)p, (u8 *)text, n2);
    p += n2;
    *p++ = 0;
    self->remain = 0x94 - (p - self->base);
    self->cursor = self->buf;
}

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

void TWindowKeyBoardSoft__sub_8025D7FC(KbSoft_8025D7FC *self) {
    char text[0x100];
    char name[0x100];
    s32 n;
    s32 i;
    if (self->flags & 0x10) {
        return;
    }
    n = TWindowKeyBoardSoft__sub_803E67A0(name, text);
    if (n == 0) {
        return;
    }
    i = 1;
    TWindowKeyBoardSoft__sub_8025CFA8(self, (M2C_UNK *)name);
    while (TWindowKeyBoardSoft__sub_8025D544(self, (M2C_UNK *)name, (s8 *)text) == 0) {
        TWindowKeyBoardSoft__sub_803E6868(name, text);
        i++;
        if (i > n) {
            TWindowKeyBoardSoft__sub_803E67D4(name, text);
            ((M2C_UNK (*)(void *, int))TWindowKeyBoardSoft__sub_8025CF50)(self, self->sel);
            TWindowKeyBoardSoft__sub_8025D3CC(self, text);
            return;
        }
    }
    self->sel = i;
    self->count = n;
    TWindowKeyBoardSoft__sub_8025D47C((KbSoft_8025D47C *)(self), (char *)((M2C_UNK *)name), (char *)((s8 *)text));
}

void TWindowKeyBoardSoft__sub_8025D8C8(KbSoft_8025D8C8 *self) {
    char text[0x100];
    char name[0x100];
    s32 n;
    s32 i;
    if (self->flags & 0x10) {
        return;
    }
    n = ((s32)TWindowKeyBoardSoft__sub_803E67D4(name, text));
    if (n == 0) {
        return;
    }
    i = 1;
    TWindowKeyBoardSoft__sub_8025CFA8(self, (M2C_UNK *)name);
    while (TWindowKeyBoardSoft__sub_8025D544(self, (M2C_UNK *)name, (s8 *)text) == 0) {
        TWindowKeyBoardSoft__sub_803E6868(name, text);
        i++;
        if (i > n) {
            TWindowKeyBoardSoft__sub_803E67A0(name, text);
            ((M2C_UNK (*)(void *, int))TWindowKeyBoardSoft__sub_8025CF50)(self, self->sel);
            TWindowKeyBoardSoft__sub_8025D3CC(self, text);
            return;
        }
    }
    self->sel = i;
    self->count = n;
    TWindowKeyBoardSoft__sub_8025D47C((KbSoft_8025D47C *)(self), (char *)((M2C_UNK *)name), (char *)((s8 *)text));
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
        TWindowKeyBoardSoft__sub_8025D47C((KbSoft_8025D47C *)(arg0), (char *)((M2C_UNK *)sp8), (char *)(sp108));
        M2C_FIELD(arg0, u16 *, 0x60) = (u16) (M2C_FIELD(arg0, u16 *, 0x60) | 4);
    }
}

}
