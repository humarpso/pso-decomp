#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Item_802ADADC { u8 pad[0x12]; u8 f12; };

struct Obj_802ADADC { u8 pad[0x61]; s8 idx; u8 pad2[0x124 - 0x62]; Item_802ADADC *items[8]; };

struct Item_802ADAAC { u8 pad[0x11]; s8 f11; };

struct Obj_802ADAAC { u8 pad[0x61]; s8 idx; u8 pad2[0x124 - 0x62]; Item_802ADAAC *items[8]; };

struct MM_802AD90C {
    u8 pad0[0x60];
    u8 flags;
    u8 pad61;
    s16 cnt;
    u8 pad64[0x124 - 0x64];
    void *slots[8];
};

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct Hd_802ADA48 { u32 w[4]; };

struct Col_802ADA48 { Hd_802ADA48 h; u8 b0, b1, b2, b3, b4, b5, b6, b7; };

extern "C" {
int copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(void *, void *);
void TWindowMainMenu__sub_802AD790(u8 *arg0, s32 arg1, s8 arg2, s8 arg3);
int TWindowMainMenu__sub_802ADB00(u8 *arg0);
void TWindowMainMenu__sub_802ADADC(Obj_802ADADC *self, s8 i);
int TWindowMainMenu__sub_802ADAAC(Obj_802ADAAC *self);
void init_color__15TWindowMainMenuFPv(void *);
void TWindowMainMenu__sub_802AD90C(MM_802AD90C *arg0);
void TWindowMainMenu__sub_802ADA48(Col_802ADA48 *arg0, Col_802ADA48 *arg1);
}

extern "C" {

void TWindowMainMenu__sub_802AD74C(void* p);
int TWindowMainMenu__sub_802AD980(void);
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

void TWindowMainMenu__sub_802AD90C(MM_802AD90C *arg0) {
    s32 i;
    arg0->cnt--;
    arg0->flags |= 8;
    for (i = 0; i < 8; i++) {
        if (arg0->slots[i] != 0) {
            init_color__15TWindowMainMenuFPv(arg0->slots[i]);
            arg0->slots[i] = 0;
        }
    }
}

int TWindowMainMenu__sub_802AD980(void) { return 0; }

void TWindowMainMenu__sub_802ADA48(Col_802ADA48 *arg0, Col_802ADA48 *arg1) {
    arg0->h = arg1->h;
    arg0->b0 = arg1->b0;
    arg0->b1 = arg1->b1;
    arg0->b2 = arg1->b2;
    arg0->b3 = arg1->b3;
    arg0->b4 = arg1->b4;
    arg0->b5 = arg1->b5;
    arg0->b6 = arg1->b6;
    arg0->b7 = arg1->b7;
}

int TWindowMainMenu__sub_802ADAAC(Obj_802ADAAC *self) {
    Item_802ADAAC *p = self->items[self->idx];
    if (p == 0) return 0x1f;
    return p->f11;
}

void TWindowMainMenu__sub_802ADADC(Obj_802ADADC *self, s8 i) {
    self->idx = i;
    self->items[self->idx]->f12 = 1;
}

int TWindowMainMenu__sub_802ADB00(u8 *arg0) {
  long long new_var;
  return new_var = (s8) ((*((u8 *) (((s8 *) arg0) + 0x61))) & 0xFFFFFFFFFFFFFFFFu);
}

void clear_menu_flags__15TWindowMainMenuFPv(void* p) { *(u8*)((char*)p + 0x60) &= 0xfc; }
int is_flag_set__15TWindowMainMenuFPv(void* p) { return (*(u8*)((char*)p + 0x60) >> 1) & 0x1; }
int get_menu_flag__15TWindowMainMenuFPv(void* p) { return *(u8*)((char*)p + 0x60) & 0x1; }

}
