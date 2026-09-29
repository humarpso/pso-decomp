#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Stack_80265500 {
    f32 sp8;
    f32 spC;
};

struct Stack_80265484 {
    f32 sp8;
    f32 spC;
};

#include <stddef.h>
struct Stack_8026556C {
    f32 sp8;
    f32 spC;
};

struct E_80265660 { u32 flags; u32 b; };

struct Obj_80265660 { u8 pad[0x80]; E_80265660 *entries; };

struct Rec_802655E4 { s32 a; s32 b; };

struct Win_802655E4 { u8 p0[0x72]; s16 f72; s16 f74; s16 f76; u8 p78[8]; Rec_802655E4 *f80; };

extern "C" {
M2C_UNK TWindowSubComCard__sub_8026D740(int, void *, void *);
extern const f32 lbl_805DD150;
extern const f32 lbl_805DD154;
extern const f32 lbl_805DD158;
void TWindowSubComCard__sub_80265500(u8 *arg0);
void copy_position__11TWindowMenuFPvPv(void *, void *);
extern const f32 lbl_805DD148;
extern const f32 lbl_805DD14C;
void TWindowSubComCard__sub_80265484(u8 *arg0);
u32 alloc__23TAdSinglePlyChrSelectGCFPv(int, f32, f32);
u32 reset_selection__20TWindowSubStatusDispFPv(int, void *);
extern const f32 lbl_805DD150;
extern const f32 lbl_805DD15C;
void TWindowSubComCard__sub_8026556C(u8 *arg0);
s32 get_array_entry__20TWindowSubStatusDispFPvi(void *, s32);
void TWindowSubComCard__sub_80265680(u8 *arg0, s16 arg1);
s32 get_array_entry__20TWindowSubStatusDispFPvi(void *, s32);
s32 get_selected_entry__17TWindowSubComCardFPv(u8 *arg0);
s32 TWindowSubComCard__sub_80265660(Obj_80265660 *o, s16 i);
s32 get_array_entry__20TWindowSubStatusDispFPvi(void *, s32);
void set_default_status__17TWindowDuelResultFPvi(void *, s32);
void refresh_status_display__9TWindowDDFv(void *);
void TWindowSubComCard__sub_802655E4(Win_802655E4 *w);
}
struct Rec_802656D8 { u32 flags; s32 b; };
struct Ent_802656D8 { u8 p0[0x24]; s32 f24; };
struct Win_802656D8 { u8 p0[0x80]; Rec_802656D8 *f80; };
extern "C" {
void TWindowSubComCard__sub_802656D8(Win_802656D8 *w, s32 idx, s32 val);
}

extern "C" {

void clear_flag_and_release2__17TWindowSubComCardFPv(void *arg0);
int get_flag__17TWindowSubComCardFPv(void* p);
void update_chat_window(void* p);
int TWindowChat__sub_80247D2C(void*);
s32 set_entry_state__20TWindowSubStatusDispFPvc(s32 a0 = 0, s32 a1 = 0);

void update_chat_window(void* p) { void* m = *(void**)((char*)p + 0x20); if (m) TWindowChat__sub_80247D2C(m); }
int get_flag__17TWindowSubComCardFPv(void* p) { return (*(u16*)((char*)p + 0x70) >> 2) & 0x1; }
void clear_flag_and_release2__17TWindowSubComCardFPv(void *arg0) {
    M2C_FIELD(arg0, u16 *, 0x70) = (u16) (M2C_FIELD(arg0, u16 *, 0x70) & 0xFFFFFFFD);
    if ((u32) M2C_FIELD(arg0, u32 *, 0x78) != 0U) {
        set_entry_state__20TWindowSubStatusDispFPvc(M2C_FIELD(arg0, s32 *, 0x78), 1);
    }
}

void TWindowSubComCard__sub_80265484(u8 *arg0) {
    Stack_80265484 stack;
    u8 *temp_r5;
    temp_r5 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x84));
    if (temp_r5 != NULL) {
        stack.sp8 = (M2C_FIELD(arg0, f32 *, 0x48) - lbl_805DD148) - lbl_805DD14C;
        stack.spC = (f32) ((M2C_FIELD(arg0, s16 *, 0x72) * 0x14) - 2);
        copy_position__11TWindowMenuFPvPv(temp_r5, &stack.sp8);
    }
}

void TWindowSubComCard__sub_80265500(u8 *arg0) {
    Stack_80265500 stack;
    f32 temp_f1;
    if ((u32) M2C_FIELD(arg0, u32 *, 0x84) != 0U) {
        stack.sp8 = lbl_805DD150;
        temp_f1 = M2C_FIELD(arg0, f32 *, 0x4C) - lbl_805DD154;
        stack.spC = temp_f1;
        if ((u32) M2C_FIELD(arg0, u32 *, 0x88) != 0U) {
            stack.spC = temp_f1 - lbl_805DD158;
        }
        TWindowSubComCard__sub_8026D740((int) (M2C_FIELD(arg0, u32 *, 0x84)), (void *) (arg0 + 0x68), (void *) (&stack.sp8));
    }
}

void TWindowSubComCard__sub_8026556C(u8 *arg0) {
    typedef char sp8_offset[(offsetof(Stack_8026556C, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_8026556C, spC) == 0x4) ? 1 : -1];
    Stack_8026556C stack;
    f32 temp_f1;
    f32 temp_f2;
    u32 temp_r3;
    u32 var_r0;
    if ((u32) M2C_FIELD(arg0, u32 *, 0x84) == 0U) {
        temp_f2 = M2C_FIELD(arg0, f32 *, 0x38);
        temp_f1 = temp_f2 - lbl_805DD15C;
        stack.spC = lbl_805DD150;
        stack.sp8 = temp_f1;
        temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0xC), (f32) (temp_f1), (f32) (temp_f2));
        var_r0 = temp_r3;
        if (var_r0 != 0U) {
            var_r0 = reset_selection__20TWindowSubStatusDispFPv((int) (temp_r3), (void *) (&stack.sp8));
        }
        M2C_FIELD(arg0, u32 *, 0x84) = var_r0;
        M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (M2C_FIELD(arg0, s32 *, 0x2C) | 0x80);
    }
}

void TWindowSubComCard__sub_802655E4(Win_802655E4 *w) {
    s32 i;
    Rec_802655E4 *r;
    void *e;
    w->f72 = 0;
    w->f74 = 0;
    r = w->f80;
    for (i = 0; i < w->f76; i++, r++) {
        e = ((void *)get_array_entry__20TWindowSubStatusDispFPvi(w, i));
        set_default_status__17TWindowDuelResultFPvi(e, 0);
        refresh_status_display__9TWindowDDFv(e);
        r->a = 0;
        r->b = 0;
    }
}

s32 TWindowSubComCard__sub_80265660(Obj_80265660 *o, s16 i) {
    if (o->entries[i].flags & 0x10) return 0;
    return 1;
}

void TWindowSubComCard__sub_80265680(u8 *arg0, s16 arg1) {
  M2C_UNK *new_var;
  s16 var_r31;
  s16 var_r4;
  s32 temp_r3;
  s32 var_r3;
  s32 var_r5;
  u8 *var_r30;
  var_r31 = arg1;
  var_r30 = (u8 *) arg0;
  var_r4 = var_r31;
  temp_r3 = get_array_entry__20TWindowSubStatusDispFPvi((void *)(arg0), (s32)((s32) var_r4));
  var_r4 = 0xFF910000;
  var_r5 = *((s32 *) (((s8 *) var_r30) + 0x80));
  var_r4 = var_r31;
  new_var = (M2C_UNK *) (((s8 *) var_r5) + (var_r4 * 8));
  *((s32 *) (((s8 *) temp_r3) + 0x24)) = 0xFF909090;
  ;
  *new_var = (*new_var) | 0x10;
}
void TWindowSubComCard__sub_802656D8(Win_802656D8 *w, s32 idx, s32 val) {
    Ent_802656D8 *e = ((Ent_802656D8 *(*)(void *, s16))get_array_entry__20TWindowSubStatusDispFPvi)(w, idx);
    Rec_802656D8 *r = w->f80;
    e->f24 = val;
    r[(s16)idx].flags &= ~0x10;
}

s32 get_selected_entry__17TWindowSubComCardFPv(u8 *arg0) {
    s16 temp_r4;
    temp_r4 = M2C_FIELD(arg0, s16 *, 0x78);
    if (temp_r4 < 0) {
        return 0;
    }
    if (temp_r4 >= (s16) M2C_FIELD(arg0, s16 *, 0x76)) {
        return 0;
    }
    return get_array_entry__20TWindowSubStatusDispFPvi((void *)(arg0), (s32)((s32) temp_r4));
}

}
