#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
int copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(void *, void *);
void TWindowMainMenu__sub_802AD790(u8 *arg0, s32 arg1, s8 arg2, s8 arg3);
}

extern "C" {

void TWindowMainMenu__sub_802AD74C(void* p);
int TWindowMainMenu__sub_802AD90C(void);
int TWindowMainMenu__sub_802AD980(void);
int TWindowMainMenu__sub_802ADA48(void);
int TWindowMainMenu__sub_802ADAAC(void);
int TWindowMainMenu__sub_802ADADC(void);
int TWindowMainMenu__sub_802ADB00(void);
void clear_menu_flags__15TWindowMainMenuFPv(void* p);
int get_menu_flag__15TWindowMainMenuFPv(void* p);
int is_flag_set__15TWindowMainMenuFPv(void* p);
int is_item_active__15TWindowMainMenuFPv(void* p);
void set_symbol_chat_parts__15TWindowMainMenuFPv(void* p, void * _w1);

int is_item_active__15TWindowMainMenuFPv(void* p) { return *(u8*)((char*)p + 0x13) & 0x1; }

void TWindowMainMenu__sub_802AD74C(void* p) { *(u8*)((char*)p + 0x13) |= 0x2; }
void set_symbol_chat_parts__15TWindowMainMenuFPv(void* p, void * _w1) { copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv((void *)(p), (void *)(_w1)); *(unsigned char*)((char*)p + 0x14) = 8; }

extern const float lbl_805DE158;
void init_color__15TWindowMainMenuFPv(void *a0)
{
  int new_var;
  char *new_var2;
  *((float *) (((char *) a0) + 0xc)) = (*((float *) (((char *) a0) + 0x8)) = (*((float *) (((char *) a0) + 0x4)) = (*((float *) (((char *) a0) + 0x0)) = lbl_805DE158)));
  new_var2 = (char *) a0;
  *((unsigned char *) (new_var2 + 0x10)) = 0;
  *((unsigned char *) (new_var2 + 0x11)) = -((double) 1);
  *((unsigned char *) (new_var2 + 0x12)) = 0;
  new_var = 0x13;
  *((unsigned char *) (new_var2 + new_var)) = 0;
  *((unsigned char *) (new_var2 + 0x14)) = 0;
}

void TWindowMainMenu__sub_802AD790(u8 *arg0, s32 arg1, s8 arg2, s8 arg3) {
    copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv((void *)((void *) (arg0)), (void *)((void *) (arg1)));
    copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv((void *)((void *) (arg0 + 8)), (void *)((void *) (arg1)));
    M2C_FIELD(arg0, s8 *, 0x10) = arg3;
    M2C_FIELD(arg0, s8 *, 0x11) = arg2;
    M2C_FIELD(arg0, s8 *, 0x12) = 0;
    M2C_FIELD(arg0, u8 *, 0x13) = (u8) (M2C_FIELD(arg0, u8 *, 0x13) | 1);
}

int TWindowMainMenu__sub_802AD90C(void) { return 0; }
int TWindowMainMenu__sub_802AD980(void) { return 0; }
int TWindowMainMenu__sub_802ADA48(void) { return 0; }
int TWindowMainMenu__sub_802ADAAC(void) { return 0; }
int TWindowMainMenu__sub_802ADADC(void) { return 0; }
int TWindowMainMenu__sub_802ADB00(void) { return 0; }

void clear_menu_flags__15TWindowMainMenuFPv(void* p) { *(u8*)((char*)p + 0x60) &= 0xfc; }
int is_flag_set__15TWindowMainMenuFPv(void* p) { return (*(u8*)((char*)p + 0x60) >> 1) & 0x1; }
int get_menu_flag__15TWindowMainMenuFPv(void* p) { return *(u8*)((char*)p + 0x60) & 0x1; }

}
