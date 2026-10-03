#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
int TItemEquipBase__sub_8010A77C(void);
int TItemEquipBase__sub_8010A82C(void);
int register_technique_boosts__14TItemEquipBaseFPvPv(void);
int TItemEquipBase__sub_8010AC60(void);
s32 set_parent__7TObjectFP7TObject(s32, s32);
int get_attach_joint__14TItemEquipBaseFPv(void);
int fn_8010A710(void);
void TWindowSubComCard__sub_80244888(s32 arg0);
s32 TWindowCtrlMain__sub_8024CE24();
int fn_8010A710(void);
int get_attach_joint__14TItemEquipBaseFPv(void);
int TItemEquipBase__sub_8010A77C(void);
int TItemEquipBase__sub_8010A82C(void);
int register_technique_boosts__14TItemEquipBaseFPvPv(void);
int TItemEquipBase__sub_8010AC60(void);
s32 set_parent__7TObjectFP7TObject(s32, s32);
extern M2C_UNK __vt__14TItemEquipBase[];
void TWindowSubComCard__sub_80244888(s32 arg0);
extern const f32 lbl_805DCAD0;
s32 TWindowSubComCard__sub_80244AD8(u8 *arg0);
extern const f32 lbl_805DCAD0;
void TWindowSubComCard__sub_80244B1C(u8 *arg0);
extern f32 lbl_805DCAC8;
extern const f32 lbl_805DCAD0;
f32 TWindowSubComCard__sub_80244818(u8 *arg0);
f32 calc_offset__17TWindowSubComCardFPv(void *arg0);
f32 TWindowSubComCard__sub_80244818(u8 *arg0);
extern f32 lbl_805DCAC8;
f32 TWindowSubComCard__sub_80244784(void *arg0);
M2C_UNK apply_window_closing_stretch(int, int);
M2C_UNK set_open_tick__19TWindowKeyBoardSoftFPvi(int, int);
M2C_UNK set_bounds__19TWindowKeyBoardSoftFPvffff(int, f32, f32, f32, f32);
M2C_UNK TWindowKeyBoardSoft__sub_8024E84C(int);
M2C_UNK animate_scale__19TWindowKeyBoardSoftFPv();
s32 open_singleton__19TWindowKeyBoardSoftFiiii(void *, void *, void *, int, f32);
extern const f32 lbl_805DCAD0;
extern const f32 lbl_805DCAD4;
extern const f32 lbl_805DCAD8;
extern const f32 lbl_805DCADC;
s32 TWindowSubComCard__sub_80244C0C(u8 *arg0, s32 arg1);
}

extern "C" {

int TWindowSubComCard__sub_80244774(void);
f32 calc_offset__17TWindowSubComCardFPv(void *arg0);
s32 get_field_20__17TWindowSubComCardFPv(void* p);
void save_position__17TWindowSubComCardFPv(void* p);
s32 play_sound_effect(s32, s32, s32, s32);
s32 TWindowCtrlMain__sub_8024CE24();
s32 TWindowSubAreaMapDisp__sub_80246948();
int copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(void*);
s32 set_parent__7TObjectFP7TObject(s32, s32);

    extern int lbl_805D3614;
int TWindowSubComCard__sub_80244774(void) {  return lbl_805D3614; }

s32 get_field_20__17TWindowSubComCardFPv(void* p) { return *(s32*)((char*)p + 0x20); }

extern M2C_UNK lbl_8044E678;
extern f32 lbl_805DCAC8;
extern f32 lbl_805DCACC;

f32 TWindowSubComCard__sub_80244784(void *arg0) {
    f32 v = calc_offset__17TWindowSubComCardFPv(arg0);
    if (v < lbl_805DCAC8) {
        return v;
    }
    return TWindowSubComCard__sub_80244818((u8 *)arg0);
}

f32 calc_offset__17TWindowSubComCardFPv(void *arg0) {
    s16 temp_r3;

    temp_r3 = M2C_FIELD(arg0, s16 *, 0x22);
    if (temp_r3 != 0) {
        return lbl_805DCAC8 - ((f32) temp_r3 / lbl_805DCACC);
    }
    return lbl_805DCAC8;
}

struct Base_8010B054_8010A710_card_0 { char pad[0x18]; };
struct VObj_8010B054_8010A710_card_0 : Base_8010B054_8010A710_card_0 {
    virtual void m0();
    virtual void m1();  virtual void m2();  virtual void m3();
    virtual void m4();  virtual void m5();  virtual void m6();
    virtual void m7();  virtual void m8();  virtual void m9();
    virtual void m10(); virtual void m11(); virtual void m12();
    virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18();
    virtual void m19();
};

#pragma push
#pragma opt_common_subs off
f32 TWindowSubComCard__sub_80244818(u8 *arg0) {
    s32 temp_r3;
    if (M2C_FIELD(arg0, s32 *, 0x2C) & 0x2000) {
        return (*(const f32 *)&lbl_805DCAC8);
    }
    temp_r3 = M2C_FIELD(arg0, s32 *, 0x5C);
    if ((f32) temp_r3 >= lbl_805DCAD0) {
        return (*(const f32 *)&lbl_805DCAC8);
    }
    return (f32) temp_r3 / lbl_805DCAD0;
}
#pragma pop

void TWindowSubComCard__sub_80244888(s32 arg0) {
    set_parent__7TObjectFP7TObject((s32)((void*)((void*)(arg0))), (s32)((void*)((void*)(TWindowCtrlMain__sub_8024CE24()))));
}

void save_position__17TWindowSubComCardFPv(void* p) { *(f32*)((char*)p + 0x40) = *(f32*)((char*)p + 0x30); *(f32*)((char*)p + 0x44) = *(f32*)((char*)p + 0x34); *(f32*)((char*)p + 0x48) = *(f32*)((char*)p + 0x38); *(f32*)((char*)p + 0x4c) = *(f32*)((char*)p + 0x3c); }

}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
int copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(void*);
void TWindowSubTradeMain__sub_802448E4(void *arg0);
void TWindow__close(u8 *arg0);
int copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(void*);
void fn_8024491C(void *arg0);
int copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(void*);
void fn_80244958(void *arg0);
s32 play_sound_effect(s32, s32, s32, s32);
void TWindowSubTradeMain__sub_80244A4C(u8 *arg0);
void disallow_rendering__7TObjectFv(void *);
void fn_802449E0(u8 *arg0);
s32 TWindowSubAreaMapDisp__sub_80246948();
s32 fn_80244994(void *arg0);
}

extern "C" {

void window_request_show(void *arg0);
s32 play_sound_effect(s32, s32, s32, s32);
s32 TWindowCtrlMain__sub_8024CE24();
s32 TWindowSubAreaMapDisp__sub_80246948();
f32 get_card_window_scale__20TWindowSubStatusDispFi(s16);
M2C_UNK allow_rendering__7TObjectFv(void *);
int copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(void*);
void save_position__17TWindowSubComCardFPv(void* p);
s32 set_parent__7TObjectFP7TObject(s32, s32);

extern const f32 lbl_805DCAD4;

void TWindowSubTradeMain__sub_802448E4(void *arg0) {
    copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv((void*)((void *)((char *)arg0 + 48)));
    M2C_FIELD(arg0, u32 *, 0x50) = 3;
}

struct VOff_8024491C_arg0_card_1 { char pad_0[0x38]; char f_38[1]; };
void fn_8024491C(void *arg0) {
    struct VOff_8024491C_arg0_card_1 *self = (struct VOff_8024491C_arg0_card_1 *)arg0;
    copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv((void*)(self->f_38));
    ((void (*)(void *, void *))copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv)((void *)((char *)arg0 + 72), self->f_38);
}

struct VOff_80244958_arg0_card_1 { char pad_0[0x30]; char f_30[1]; };
void fn_80244958(void *arg0) {
    struct VOff_80244958_arg0_card_1 *self = (struct VOff_80244958_arg0_card_1 *)arg0;
    copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv((void*)(self->f_30));
    ((void (*)(void *, void *))copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv)((void *)((char *)arg0 + 64), self->f_30);
}

#pragma push
#pragma fp_contract on
s32 fn_80244994(void *arg0) {
    if (TWindowSubAreaMapDisp__sub_80246948() != 0) {
        return 0;
    }
    return (s32) ((u32) __cntlzw(M2C_FIELD(arg0, s32 *, 0x2C) & 4) >> 5);
}
#pragma pop

void fn_802449E0(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (M2C_FIELD(arg0, s32 *, 0x2C) & 0xFFFFFFF8);
    M2C_FIELD(arg0, s16 *, 0x22) = 0;
    disallow_rendering__7TObjectFv(arg0);
}

void TWindow__close(u8 *arg0) {
    TWindowSubTradeMain__sub_80244A4C((u8 *)(arg0));
    M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (M2C_FIELD(arg0, s32 *, 0x2C) | 0x10);
}

void TWindowSubTradeMain__sub_80244A4C(u8 *arg0) {
    s32 temp_r3;
    temp_r3 = M2C_FIELD(arg0, s32 *, 0x2C);
    if (!(temp_r3 & 1)) {
        M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (temp_r3 & 0xFFFFFFFB);
        return;
    }
    if (temp_r3 & 2) {
        M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (temp_r3 | 4);
        return;
    }
    if (!(temp_r3 & 0x20)) {
        ((M2C_UNK)play_sound_effect((s32)((int) (0x53704)), (s32)((int) (0)), (s32)((int) (0)), (s32)((int) (0))));
    }
    M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (M2C_FIELD(arg0, s32 *, 0x2C) & 0xFFFFFFFE);
    M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (M2C_FIELD(arg0, s32 *, 0x2C) | 2);
}

s32 TWindowSubComCard__sub_80244AD8(u8 *arg0) {
    return (f32) M2C_FIELD(arg0, s32 *, 0x5C) >= lbl_805DCAD0;
}

void TWindowSubComCard__sub_80244B1C(u8 *arg0) {
    if (!((f32) M2C_FIELD(arg0, s32 *, 0x5C) >= lbl_805DCAD0)) {
        M2C_FIELD(arg0, s32 *, 0x5C) = 7;
    }
}

void window_request_show(void *arg0) {
    s32 temp_r3;

    temp_r3 = M2C_FIELD(arg0, s32 *, 0x2C);
    if (temp_r3 & 1) {
        M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (temp_r3 & 0xFFFFFFFB);
        return;
    }
    if (temp_r3 & 2) {
        M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (temp_r3 | 4);
        return;
    }
    if (get_card_window_scale__20TWindowSubStatusDispFi(M2C_FIELD(arg0, s16 *, 0x20)) > lbl_805DCAD4) {
        M2C_FIELD(arg0, s32 *, 0x5C) = 0;
    }
    M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (M2C_FIELD(arg0, s32 *, 0x2C) | 3);
    if (!(M2C_FIELD(arg0, s32 *, 0x2C) & 0x20)) {
        play_sound_effect((s32)(0x53703), (s32)(0), (s32)(0), (s32)(0));
    }
    allow_rendering__7TObjectFv(arg0);
}
s32 TWindowSubComCard__sub_80244C0C(u8 *arg0, s32 arg1) {
    s32 temp_r31;
    s32 var_r4;
    temp_r31 = ((s32 (*)(void *, void *, void *, f32, int))open_singleton__19TWindowKeyBoardSoftFiiii)((void *) (arg0 + 0x40), (void *) (arg0 + 0x48), (void *) (arg1), (f32) (M2C_FIELD(arg0, f32 *, 0x54)), (int) (M2C_FIELD(arg0, s32 *, 0x2C)));
    if (M2C_FIELD(arg0, s32 *, 0x2C) & 0x40) {
        animate_scale__19TWindowKeyBoardSoftFPv();
    }
    if (M2C_FIELD(arg0, s32 *, 0x2C) & 0x80) {
        TWindowKeyBoardSoft__sub_8024E84C((int) (temp_r31));
    }
    if (M2C_FIELD(arg0, s32 *, 0x2C) & 8) {
        set_bounds__19TWindowKeyBoardSoftFPvffff((int) (temp_r31), (f32) (lbl_805DCAD4), (f32) (lbl_805DCAD4), (f32) (lbl_805DCAD8), (f32) (lbl_805DCADC));
    }
    var_r4 = M2C_FIELD(arg0, s32 *, 0x5C);
    if (!(M2C_FIELD(arg0, s32 *, 0x2C) & 0x2000)) {
        var_r4 = (s32) ((f32) var_r4 - lbl_805DCAD0);
    }
    set_open_tick__19TWindowKeyBoardSoftFPvi((int) (temp_r31), (int) (var_r4));
    apply_window_closing_stretch((int) (temp_r31), (int) (M2C_FIELD(arg0, s16 *, 0x22)));
    return temp_r31;
}

}
