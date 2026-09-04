#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

void TWindowFukidasi__sub_80252C38(void* p);
void clear_visible_flag__15TWindowFukidasiFPv(void* p);
void set_flag__15TWindowFukidasiFPv(void* p);
void TWindowFukidasi__sub_80252C68(void* p);
int is_flag_set__15TWindowFukidasiFPv(void* p);
void TWindowFukidasi__sub_80252C84(void* p);
int is_active__15TWindowFukidasiFPv(void* p);
void clear_flag__15TWindowFukidasiFPv(void* p);
int fn_80252CB0(void* p);
int fn_80252CBC(void* p);
void render__17TWindowGetComCardFv(void);
void set_flag2c_bit100__15TWindowFukidasiFPv(void* p);
void clear_flag2c_bit200__15TWindowFukidasiFPv(void* p);
void set_flag2c_bit200__15TWindowFukidasiFPv(void* p);
void clear_flag2c_bit100__15TWindowFukidasiFPv(void* p);

void TWindowFukidasi__sub_80252C38(void* p) { *(u8*)((char*)p + 0x71) |= 0x4; }
void clear_visible_flag__15TWindowFukidasiFPv(void* p) { *(u8*)((char*)p + 0x71) &= 0xfe; }
void set_flag__15TWindowFukidasiFPv(void* p) { *(u8*)((char*)p + 0x71) |= 0x1; }
void TWindowFukidasi__sub_80252C68(void* p) { *(u8*)((char*)p + 0x71) |= 0x20; }
int is_flag_set__15TWindowFukidasiFPv(void* p) { return *(u8*)((char*)p + 0x71) & 0x1; }
void TWindowFukidasi__sub_80252C84(void* p) { *(u8*)((char*)p + 0x71) &= 0xffffffdf; }
int is_active__15TWindowFukidasiFPv(void* p) { return (*(u8*)((char*)p + 0x71) >> 2) & 0x1; }
void clear_flag__15TWindowFukidasiFPv(void* p) { *(u8*)((char*)p + 0x71) &= 0xfffffffb; }
int fn_80252CB0(void* p) { return (*(u8*)((char*)p + 0x71) >> 5) & 0x1; }
int fn_80252CBC(void* p) { return *(u16*)((char*)p + 0x0) & 0x10; }
void render__17TWindowGetComCardFv(void) {  }

}
#else
#if PSO_CLASS_PACKAGE == 0x8007B5A0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void remove_entry__17TWindowGetComCardFiii(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK TWindowSubComCard__sub_8007B26C(s32);
M2C_UNK TLobby__sub_803DE7BC(s32, s32, u32);

void remove_entry__17TWindowGetComCardFiii(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r3;

    if (arg0 < (s32) (arg2 - 1)) {
        temp_r3 = arg1 + (arg0 * 0x90);
        TLobby__sub_803DE7BC(temp_r3, temp_r3 + 0x90, (u32) (((arg2 - arg0) - 1) * 0x90) >> 2U);
    }
    arg1 += (arg2 - 1) * 0x90;
    TWindowSubComCard__sub_8007B26C(arg1);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8007B65C
#include "types.h"

extern "C" {

int TWindowGetComCard__sub_8007B65C(void* p);
int TWindowGetComCard__sub_8007B67C(void* p);
int TWindowGetComCard__sub_8007B60C(void*);

int TWindowGetComCard__sub_8007B65C(void* p) { return TWindowGetComCard__sub_8007B60C(p); }
int TWindowGetComCard__sub_8007B67C(void* p) { return TWindowGetComCard__sub_8007B60C(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80252F10
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__dt__17TWindowGetComCardFv(void *arg0, s16 arg1);
M2C_UNK init_parts__10TObjPlayerFPv();
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
s32 TWindowCtrl__sub_8024A314();
M2C_UNK TWindowReturnCity__sub_8024ACA8(s32);
M2C_UNK TWindow__close(void *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__7TObjectFv(void *, M2C_UNK);
M2C_UNK TLobby__sub_8024AC20(s32);

extern void *__vt__17TWindowGetComCard[];
extern s32 lbl_805D53A0;

void *__dt__17TWindowGetComCardFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, void **, 0x18) = __vt__17TWindowGetComCard;
        if ((u32) M2C_FIELD(arg0, u32 *, 0x20) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x20));
            M2C_FIELD(arg0, u32 *, 0x20) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x1C) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x1C));
            M2C_FIELD(arg0, u32 *, 0x1C) = 0U;
        }
        TWindowReturnCity__sub_8024ACA8(lbl_805D53A0);
        TLobby__sub_8024AC20(lbl_805D53A0);
        if ((TWindowCtrl__sub_8024A314() == 0) && (TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0) != 0U)) {
            init_parts__10TObjPlayerFPv();
        }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#endif
