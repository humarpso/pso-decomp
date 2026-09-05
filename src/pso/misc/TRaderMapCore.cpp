#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
M2C_UNK TCameraCtrl__sub_80068EF0();
M2C_UNK TCameraCtrl__sub_80069024();
M2C_UNK TRaderMapCore__sub_801FA1E0(void *);
M2C_UNK TRaderMapCore__sub_801FA350(void *);
M2C_UNK TRaderMapCore__sub_801FA6CC(void *, void *);
M2C_UNK TRaderMapCore__sub_801FA880(void *, void *);
M2C_UNK TRaderMapCore__sub_801FA964(void *, void *);
M2C_UNK TRaderMapCore__sub_801FA9D8(void *, void *);
M2C_UNK TRaderMapCore__sub_801FAAEC(void *, void *);
s32 TRaderMapCore__sub_801FADF0(void *, void *);
extern u32 TRaderMapCore__data_805D5F28;
extern s32 lbl_805D5F2C;
extern s32 TRaderMapCore__data_805D5F30;
extern s32 TRaderMapCore__data_805D5F3C;
void render__13TRaderMapCoreFv(u8 *arg0);
void disallow_rendering__7TObjectFv(void *);
void reset_counter__13TRaderMapCoreFPv(void* p);
extern void *TRaderMapCore__data_805D5F40;
void TRaderMapCore__sub_801F9110(void);
void allow_rendering__7TObjectFv(void *);
void reset_counter__13TRaderMapCoreFPv(void* p);
extern void *TRaderMapCore__data_805D5F40;
void TRaderMapCore__sub_801F9144(void);
}

extern "C" {

void copy_transform__13TRaderMapCoreFPvPv(void* p, void* q);
void free_heap__13TRaderMapCoreFv(void);
s32 is_active__13TRaderMapCoreFv(void);
void reset_counter__13TRaderMapCoreFPv(void* p);
s32 should_show_map__13TRaderMapCoreFv(void);
void update_target__13TRaderMapCoreFPv(void *arg0);
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
s32 TRaderMapCore__sub_801F9058();
int __dt__5THeapFv(void*, void*);
s32 is_card_flag_set__19TWindowKeyBoardHardFPv(u16);
s32 is_not_split_screen__13TRaderMapCoreFv();
s32 is_ready__6TLobbyFv();
s32 is_technique_ready__8TTecCtrlFv();
int obj_getField1c(void*);

extern void *TRaderMapCore__data_805D5F40;

s32 is_active__13TRaderMapCoreFv(void) {
    if ((void *) TRaderMapCore__data_805D5F40 != NULL) {
        if (M2C_FIELD(TRaderMapCore__data_805D5F40, u16 *, 4) & 0x10) {
            return 0;
        }
        return TRaderMapCore__sub_801F9058();
    }
    return 0;
}

s32 should_show_map__13TRaderMapCoreFv(void) {
    if ((is_not_split_screen__13TRaderMapCoreFv() == 1) && (is_ready__6TLobbyFv() == 0)) {
        return 0;
    }
    return is_technique_ready__8TTecCtrlFv();
}
void reset_counter__13TRaderMapCoreFPv(void* p) { *(s32*)((char*)p + 0x184) = 0; }

    extern int TRaderMapCore__data_805D5F50;

void TRaderMapCore__sub_801F9110(void) {
    if ((void *) (*(u8 * *)&TRaderMapCore__data_805D5F40) != NULL) {
        reset_counter__13TRaderMapCoreFPv((void*)((*(u8 * *)&TRaderMapCore__data_805D5F40)));
        disallow_rendering__7TObjectFv((*(u8 * *)&TRaderMapCore__data_805D5F40));
    }
}

void TRaderMapCore__sub_801F9144(void) {
    if ((void *) (*(u8 * *)&TRaderMapCore__data_805D5F40) != NULL) {
        reset_counter__13TRaderMapCoreFPv((void*)((*(u8 * *)&TRaderMapCore__data_805D5F40)));
        allow_rendering__7TObjectFv((*(u8 * *)&TRaderMapCore__data_805D5F40));
    }
}

void free_heap__13TRaderMapCoreFv(void) { __dt__5THeapFv((void*)(TRaderMapCore__data_805D5F50), (void*)1); TRaderMapCore__data_805D5F50 = 0; }

void copy_transform__13TRaderMapCoreFPvPv(void* p, void* q) { *(f32*)((char*)p + 0x0) = *(f32*)((char*)q + 0x0); *(f32*)((char*)p + 0x4) = *(f32*)((char*)q + 0x4); *(f32*)((char*)p + 0x8) = *(f32*)((char*)q + 0x8); *(f32*)((char*)p + 0xc) = *(f32*)((char*)q + 0xc); *(f32*)((char*)p + 0x10) = *(f32*)((char*)q + 0x10); *(f32*)((char*)p + 0x14) = *(f32*)((char*)q + 0x14); *(u32*)((char*)p + 0x18) = *(u32*)((char*)q + 0x18); *(u32*)((char*)p + 0x1c) = *(u32*)((char*)q + 0x1c); *(f32*)((char*)p + 0x20) = *(f32*)((char*)q + 0x20); *(f32*)((char*)p + 0x24) = *(f32*)((char*)q + 0x24); }

extern s32 lbl_805D53A0;
extern s32 lbl_805DC56C;

void render__13TRaderMapCoreFv(u8 *arg0) {
    if ((u32) TRaderMapCore__data_805D5F28 != 0U) {
        if (TRaderMapCore__sub_801FADF0((void *) (arg0), (void *) (TRaderMapCore__data_805D5F3C)) == 0) {
            lbl_805D5F2C = 0;
            TRaderMapCore__data_805D5F30 = 0;
            return;
        }
        switch ((s32) TRaderMapCore__data_805D5F3C) {
        case 0:
            TRaderMapCore__sub_801FA880((void *) (arg0), (void *) (TRaderMapCore__data_805D5F3C));
            TRaderMapCore__sub_801FA9D8((void *) (arg0), (void *) (TRaderMapCore__data_805D5F3C));
            TRaderMapCore__sub_801FAAEC((void *) (arg0), (void *) (TRaderMapCore__data_805D5F3C));
            TRaderMapCore__sub_801FA1E0((void *) (arg0));
            TRaderMapCore__sub_801FA350((void *) (arg0));
            TRaderMapCore__sub_801FA964((void *) (arg0), (void *) (TRaderMapCore__data_805D5F3C));
            TRaderMapCore__sub_801FA6CC((void *) (arg0), (void *) (TRaderMapCore__data_805D5F3C));
            break;
        case 1:
            TCameraCtrl__sub_80069024();
            TRaderMapCore__sub_801FA880((void *) (arg0), (void *) (TRaderMapCore__data_805D5F3C));
            TCameraCtrl__sub_80068EF0();
            TRaderMapCore__sub_801FA9D8((void *) (arg0), (void *) (TRaderMapCore__data_805D5F3C));
            TRaderMapCore__sub_801FAAEC((void *) (arg0), (void *) (TRaderMapCore__data_805D5F3C));
            TRaderMapCore__sub_801FA1E0((void *) (arg0));
            TRaderMapCore__sub_801FA350((void *) (arg0));
            TRaderMapCore__sub_801FA964((void *) (arg0), (void *) (TRaderMapCore__data_805D5F3C));
            TCameraCtrl__sub_80069024();
            M2C_FIELD(arg0, s32 *, 0x174) = 0;
            TRaderMapCore__sub_801FA6CC((void *) (arg0), (void *) (TRaderMapCore__data_805D5F3C));
            TCameraCtrl__sub_80068EF0();
            break;
        case 2:
            TRaderMapCore__sub_801FA880((void *) (arg0), (void *) (TRaderMapCore__data_805D5F3C));
            TRaderMapCore__sub_801FA9D8((void *) (arg0), (void *) (TRaderMapCore__data_805D5F3C));
            TRaderMapCore__sub_801FAAEC((void *) (arg0), (void *) (TRaderMapCore__data_805D5F3C));
            TRaderMapCore__sub_801FA1E0((void *) (arg0));
            TRaderMapCore__sub_801FA350((void *) (arg0));
            TRaderMapCore__sub_801FA964((void *) (arg0), (void *) (TRaderMapCore__data_805D5F3C));
            break;
        }
        lbl_805D5F2C = 0;
        TRaderMapCore__data_805D5F30 = 0;
    }
}

void update_target__13TRaderMapCoreFPv(void *arg0) {
    u32 temp_r3;

    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0);
    if (temp_r3 != 0U) {
        M2C_FIELD(arg0, u32 *, 0x184) = temp_r3;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x184) != 0U) {
        if (is_card_flag_set__19TWindowKeyBoardHardFPv(obj_getField1c((void*)M2C_FIELD(arg0, u32 *, 0x184))) != 0) {
            M2C_FIELD(arg0, s32 *, 0x168) = (s32) (M2C_FIELD(arg0, s32 *, 0x168) | lbl_805DC56C);
            return;
        }
        M2C_FIELD(arg0, s32 *, 0x168) = (s32) (M2C_FIELD(arg0, s32 *, 0x168) & 0xFFFFFFFE);
    }
}

}
