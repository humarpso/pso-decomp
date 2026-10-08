#include "pso/misc/TWindowDD.h"

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct O_80347940 { u8 pad[0x20]; s32 base; void *items[1]; };
struct E_803478DC { void *p; };
struct W_803478DC { u8 pad0[0x20]; s32 base; E_803478DC e[1]; };

struct M_80347758 { s16 n; s16 type; s16 a[8]; s32 f14; };

typedef s32 M2C_UNK;
struct V2_80347E04 { f32 x, y; };

struct W_80347E04 { u8 pad0[0x20]; s32 cur; void *pages[(0x74 - 0x24) / 4]; void *f74[2]; };

struct E_80347CC8 { u8 pad[8]; f32 f8; u8 padc[4]; f32 f10; };

struct S_80347CC8 { u8 pad[0x38]; f32 f38; };

struct W_80347CC8 { u8 pad[0x70]; S_80347CC8 *f70; };

struct W_80347B70 {
    u8 pad0[0x20];
    s32 idx;
    void *tbl[0x1D];
    s32 state;
    s32 cur;
    u8 pad_a0[0x24];
    u8 sub[4];
};

extern "C" {
void append_prompt_newline__9TWindowDDFPvPv(s32, void *);
void TWindowDD__sub_8034886C(s32, s32, void *);
void TWindowDD__sub_8034740C(u8 *arg0, s32 arg1, s32 arg2);
s32 get_current_child_index__9TWindowDDFPv(u8 *arg0);
M2C_UNK TWindowDD__sub_803474CC(int, int, int, int, int);
s32 TWindowDD__sub_80348B70(s32);
void TWindowDD__sub_80347474(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 TWindowDD__sub_80342158(void *);
s32 is_state_zero_unless_0x2C8__9TWindowDDFs(s32 arg0);
s32 TWindowDD__sub_80347FA0(void *, int);
s32 TWindowDD__sub_80348DD8(void *, int);
void TWindowDD__sub_80347A4C(u8 *arg0, s32 arg1);
void set_pos_and_data__9TWindowDDFPvf(void *p, f32 v);
extern const f32 lbl_805DFB94;
void TWindowDD__sub_80347940(O_80347940 *self, s32 i);
s32 TWindowDD_is_id_in_range_5AC_5F9(s16 arg0);
void TWindowDD__sub_80347758(M_80347758 *src, M_80347758 *dst);
M2C_UNK copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(void *, void *);
M2C_UNK set_field_1c__6TLobbyFPvf(void *, f32);
M2C_UNK init_and_set_field50__9TWindowDDFPvPv(u32, s32);
M2C_UNK TWindowDD__sub_803412A0(u32);
u8 *TWindowDD__sub_8034146C(void *, void *, u32, int, f32);
u32 update_if_field28_set__9TWindowDDFPv(void *);
M2C_UNK TWindowDD__sub_803421D0(void *, void *);
extern s32 TWindowDD__data_805DFB50;
extern const f32 lbl_805DFB60;
extern const f32 lbl_805DFBDC;
extern const f32 lbl_805DFBE0;
extern const f32 lbl_805DFBE4;
extern const f32 lbl_805DFBE8;
extern const f32 lbl_805DFBEC;
extern const f32 lbl_805DFC28;
void TWindowDD__sub_80347E04(W_80347E04 *arg0, s32 arg1);
M2C_UNK update_state__9TWindowDDFv(void *, u32, u16);
E_80347CC8 *get_array_entry__20TWindowSubStatusDispFPvi(void *, s32);
M2C_UNK refresh_status_display__9TWindowDDFv(void *);
M2C_UNK update_position__9TWindowDDFPvi(void *, s32);
M2C_UNK init_and_set_field50__9TWindowDDFPvPv(u32, s32);
extern s32 lbl_805D53A0;
extern u32 TWindowDD__data_805D6E0C;
extern s32 TWindowDD__data_805DFB50;
extern const f32 TWindowDD__data_805DFB58;
extern const f32 lbl_805DFCD0;
extern const f32 lbl_805DFCD4;
void TWindowDD__sub_80347CC8(W_80347CC8 *arg0, void *arg1);
s32 TWindowDD__sub_80342158(void *);
s32 is_state_zero_unless_0x2C8__9TWindowDDFs(s32 arg0);
void TWindowDD__sub_80347CC8(W_80347CC8 *arg0, void *arg1);
void TWindowDD__sub_80348D90(void *, int);
void TWindowDD__sub_80348DAC(void *);
s32 TWindowDD__sub_80348DD8(void *, int);
void update_selection_state__9TWindowDDFPv(W_80347B70 *arg0);
void init_and_mark_field8C__9TWindowDDFPv(void* p);
void set_pos_and_data__9TWindowDDFPvf(void *p, f32 v);
extern const f32 TWindowDD__data_805DFB6C;
extern const f32 TWindowDD__data_805DFB74;
u8 *init_last_child__9TWindowDDFPv(u8 *arg0);
}

extern "C" {

s32 classify_id__9TWindowDDFs(s16 arg0);
s32 get_player_battle_flag_state__9TWindowDDFUs(u16 arg0);
s32 is_state_zero_unless_0x2C8__9TWindowDDFs(s32 arg0);
s32 setup_entry__9TWindowDDFPvi(void *arg0, s32 arg1);
void *get_player_by_client_id(u16);
M2C_UNK TWindowDD__sub_803412A0(u32);
M2C_UNK set_first_entry_text__9TWindowDDFPvUi(u32, s32);
s32 TWindowDD__sub_80347204(s16);
s32 TWindowDD__sub_80347238();
u8 TWindowDD__sub_80347858(s16 arg0);
void queue_destruction__7TObjectFv(void *);
void TWindowDD__sub_803478DC(W_803478DC *arg0, s32 arg1);
s32 TWindowDD__sub_80348B70(s32);
M2C_UNK init_and_set_field50__9TWindowDDFPvPv(u32, s32);

s32 classify_id__9TWindowDDFs(s16 arg0) {
    s32 var_r3;

    if (arg0 == 0x2E4) {
        return 0;
    }
    if (TWindowDD__sub_80347238() != 0) {
        return 1;
    }
    if (TWindowDD__sub_80347204(arg0) != 0) {
        return 2;
    }
    if (arg0 == 0x4F3) {
        return 3;
    }
    if (arg0 == 0x635) {
        return 4;
    }
    var_r3 = 7;
    if (arg0 == 0x650) {
        var_r3 = 5;
    }
    return var_r3;
}

s32 get_player_battle_flag_state__9TWindowDDFUs(u16 arg0) {
    s32 temp_r3_2;
    void *temp_r3;

    temp_r3 = get_player_by_client_id((u16) arg0);
    if (temp_r3 != NULL) {
        temp_r3_2 = M2C_FIELD(temp_r3, s32 *, 0x890);
        if (temp_r3_2 & 1) {
            return 0;
        }
        if (temp_r3_2 & 2) {
            return 2;
        }
        goto block_5;
    }
block_5:
    return 0;
}

void TWindowDD__sub_8034740C(u8 *arg0, s32 arg1, s32 arg2) {
    TWindowDD__sub_80347474((s32)((s32) arg0), (s32)((s32) M2C_FIELD(arg0, s16 *, 4)), (s32)(arg1), (s32)(arg2));
    if ((s16) M2C_FIELD(arg0, s16 *, 0) > 1) {
        append_prompt_newline__9TWindowDDFPvPv(arg1, (void *) arg2);
        TWindowDD__sub_8034886C((s32) M2C_FIELD(arg0, s16 *, 6), arg1, (void *) arg2);
    }
}

void TWindowDD__sub_80347474(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
  s32 temp_r0;
  s32 var_r28;
  s32 var_r29;
  s32 var_r30;
  s32 var_r31;
  int var_r3;
  s32 var_r4;
  s32 var_r5;
  s32 var_r6;
  s32 var_r7;
  var_r29 = arg1;
  var_r28 = arg0;
  var_r30 = arg2;
  var_r31 = arg3;
  var_r3 = var_r29;
  var_r6 = TWindowDD__sub_80348B70((s32)((int) var_r3));
  temp_r0 = var_r6;
  var_r3 = var_r28;
  var_r5 = temp_r0;
  var_r4 = var_r29;
  var_r6 = var_r30;
  var_r7 = var_r31;
  var_r30 = (int) var_r4;
  TWindowDD__sub_803474CC((int) var_r3, var_r30, (int) var_r5, (int) var_r6, (int) var_r7);
}

void TWindowDD__sub_80347758(M_80347758 *src, M_80347758 *dst) {
    s16 id;
    s16 n;
    n = src->n;
    if (n > 1) {
        id = src->a[1];
        if (TWindowDD_is_id_in_range_5AC_5F9(id) != 0) {
            dst->type = 4;
            if (n > 3) {
                dst->a[0] = src->a[3];
            } else if (n > 2 && src->a[2] == 0x685) {
                dst->a[0] = 0x698;
            } else {
                dst->a[0] = 0x2C4;
            }
            dst->a[1] = id;
            dst->a[2] = src->a[0];
            if (n > 2) {
                dst->a[3] = src->a[2];
                dst->n = 4;
            } else {
                dst->n = 3;
            }
        } else {
            s32 i;
            dst->type = 5;
            for (i = 0; i < n; i++) {
                dst->a[i] = src->a[i];
            }
            dst->n = src->n;
        }
    }
    dst->f14 = src->f14;
}

s32 is_state_zero_unless_0x2C8__9TWindowDDFs(s32 arg0) {
    if ((s16)arg0 == 0x2C8) {
        return 0;
    }
    return (u32) __cntlzw((u32) ((s32 (*)(void))TWindowDD__sub_80347858)()) >> 5;
}

u8 TWindowDD__sub_80347858(s16 arg0) {
    s32 r = 0;
    if (arg0 >= 0x37 && arg0 <= 0x45) {
        r = 1;
    }
    return (u8)r;
}

extern s32 TWindowDD__data_805DFB50;

s32 TWindowDD_is_id_in_range_5AC_5F9(s16 arg0) {
    u8 var_r3;
    var_r3 = 0;
    if ((arg0 >= 0x5ac) && (arg0 <= 0x5f9)) {
        var_r3 = 1;
    }
    return var_r3;
}

void TWindowDD__sub_803478DC(W_803478DC *arg0, s32 arg1) {
    if (arg0->e[arg0->base + arg1].p != NULL) {
        queue_destruction__7TObjectFv(arg0->e[arg0->base + arg1].p);
        arg0->e[arg0->base + arg1].p = NULL;
    }
}

void TWindowDD__sub_80347940(O_80347940 *self, s32 i) {
    void *p = self->items[self->base + i];
    if (p != NULL) {
        set_pos_and_data__9TWindowDDFPvf(p, lbl_805DFB94);
    }
}

u8 *init_last_child__9TWindowDDFPv(u8 *arg0) {
    s32 temp_r0;
    u8 *var_r31;
    var_r31 = NULL;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x20);
    if (temp_r0 > 0) {
        var_r31 = ((u8 **)(arg0 + 0x24))[temp_r0 - 1];
        if (var_r31 != NULL) {
            init_and_mark_field8C__9TWindowDDFPv(var_r31);
            set_pos_and_data__9TWindowDDFPvf(var_r31, (f32) (TWindowDD__data_805DFB6C));
            M2C_FIELD(var_r31, f32 *, 0x38) = (f32) TWindowDD__data_805DFB74;
        }
    }
    return var_r31;
}

void TWindowDD__sub_80347A4C(u8 *arg0, s32 arg1) {
    s32 temp_r3;
    temp_r3 = TWindowDD__sub_80342158((void *) (arg1));
    if (is_state_zero_unless_0x2C8__9TWindowDDFs(temp_r3) != 0) {
        TWindowDD__sub_80348DD8((void *) (arg0 + 0xC4), (int) (temp_r3));
        TWindowDD__sub_80347CC8((W_80347CC8 *)((void *) (arg0)), (void *)((void *) (arg0 + 0xC4)));
        M2C_FIELD(arg0, s32 *, 0x98) = 1;
        M2C_FIELD(arg0, s32 *, 0x9C) = (s32) (s16) temp_r3;
        return;
    }
    TWindowDD__sub_80347FA0((void *) (arg0), (int) (3));
    M2C_FIELD(arg0, s32 *, 0x98) = 0;
    M2C_FIELD(arg0, s32 *, 0x9C) = (s32) (s16) temp_r3;
}

#pragma fp_contract on

struct W_80347CC8;
void update_selection_state__9TWindowDDFPv(W_80347B70 *arg0) {
    s32 v;
    v = TWindowDD__sub_80342158(arg0->tbl[arg0->idx]);
    if ((s16)v != arg0->cur) {
        switch (arg0->state) {
        case 0:
            if (is_state_zero_unless_0x2C8__9TWindowDDFs(v) != 0) {
                TWindowDD__sub_80348DD8(arg0->sub, v);
                arg0->state = 1;
            } else {
                TWindowDD__sub_80348D90(arg0->sub, v);
            }
            break;
        case 1:
            if (is_state_zero_unless_0x2C8__9TWindowDDFs(v) != 0) {
                TWindowDD__sub_80348D90(arg0->sub, v);
            } else {
                TWindowDD__sub_80348DAC(arg0->sub);
                arg0->state = 0;
            }
            break;
        }
        TWindowDD__sub_80347CC8((W_80347CC8 *)arg0, arg0->sub);
        arg0->cur = (s16)v;
    }
}

void TWindowDD__sub_80347CC8(W_80347CC8 *arg0, void *arg1) {
    S_80347CC8 *s;
    E_80347CC8 *e;
    f32 x;
    f32 c;
    f32 max;
    f32 f10;
    update_state__9TWindowDDFv(arg1, TWindowDD__data_805D6E0C, lbl_805D53A0);
    s = arg0->f70;
    if (s != NULL) {
        e = get_array_entry__20TWindowSubStatusDispFPvi(s, 0);
        if (e != NULL) {
            refresh_status_display__9TWindowDDFv(e);
            x = 10.0f + e->f10;
            if (x >= 580.0f) {
                e->f8 = 580.0f - e->f10;
                x = 580.0f;
            } else {
                e->f8 = lbl_805DFCD0;
            }
            s->f38 = lbl_805DFCD4 * TWindowDD__data_805DFB58 + x;
            if (x <= lbl_805DFCD0) {
                update_position__9TWindowDDFPvi(s, TWindowDD__data_805DFB50);
            } else {
                init_and_set_field50__9TWindowDDFPvPv((u32)s, TWindowDD__data_805DFB50);
            }
        }
    }
}

s32 setup_entry__9TWindowDDFPvi(void *arg0, s32 arg1) {
    s32 var_r31;
    u32 temp_r30;

    s32 temp_r4;
    var_r31 = 0;
    temp_r30 = M2C_FIELD(arg0, u32 *, 0x6C);
    if ((temp_r30 != 0U) && ((temp_r4 = TWindowDD__sub_80348B70(arg1)) != 0)) {
        set_first_entry_text__9TWindowDDFPvUi(temp_r30, temp_r4);
        TWindowDD__sub_803412A0(temp_r30);
        init_and_set_field50__9TWindowDDFPvPv(temp_r30, TWindowDD__data_805DFB50);
        var_r31 = 1;
    }
    return var_r31;
}

void TWindowDD__sub_80347E04(W_80347E04 *arg0, s32 arg1) {
    V2_80347E04 v;
    V2_80347E04 a;
    V2_80347E04 b;
    u32 r;
    u8 *o;
    TWindowDD__sub_803421D0(arg0->pages[arg0->cur], &v);
    r = update_if_field28_set__9TWindowDDFPv(arg0->pages[arg0->cur]);
    if (r != 0) {
        if (arg1 == 0) {
            a.x = lbl_805DFBDC;
            a.y = lbl_805DFBE0;
        } else {
            a.x = lbl_805DFBE8;
            a.y = lbl_805DFBEC;
        }
        b.x = lbl_805DFB60;
        b.y = a.y;
        o = TWindowDD__sub_8034146C(&a, &b, r, 1, lbl_805DFBE4);
        if (o != NULL) {
            set_field_1c__6TLobbyFPvf(o, lbl_805DFC28);
            TWindowDD__sub_803412A0((u32)o);
            copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(o + 0x40, &v);
            init_and_set_field50__9TWindowDDFPvPv((u32)o, TWindowDD__data_805DFB50);
            arg0->f74[arg1] = o;
        }
    }
}

s32 get_current_child_index__9TWindowDDFPv(u8 *arg0) {
    u8 *var_r3;
    var_r3 = (u8 *)(arg0 + (M2C_FIELD(arg0, s32 *, 0x20) * 4));
    var_r3 = (u8 *)(M2C_FIELD(var_r3, u8 **, 0x24));
    if (var_r3 != NULL) {
        return TWindowDD__sub_80342158(var_r3);
    }
    var_r3 = (u8 *)((void *)-1U);
    return -1;
}

}
