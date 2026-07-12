#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void reset_movement_state__10TObjPlayerFPv(u8 *arg0);
s16 TObjPlayer__sub_801D341C(void* p);
void TObjPlayer__sub_801D3424(void* p, s16 v);
int is_flag32_clear__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_801D345C(void* p);
int get_field_340__10TObjPlayerFPv(void* p);
int check_status_flag_128__10TObjPlayerFPv(void* p);
void handle_6x54(void);
void handle_6x64(void);
void handle_6x65(void);
void handle_6x8B(void);
void handle_6x8C(void);
int TObjPlayer__sub_8001BEF8(void*, int);
int TObjPlayer__sub_8011E204(void*, int);
int TObjPlayer__sub_80121248(void*, int);
int TObjPlayer__sub_801BF4DC(void*);
M2C_UNK TObjPlayer__sub_801D2E20(void *, void *, f32, f32);

extern const f32 lbl_805DC3BC;
extern const f32 lbl_805DC3C0;
extern const f32 lbl_805DC3C4;

void reset_movement_state__10TObjPlayerFPv(u8 *arg0) {
    M2C_FIELD(arg0, s16 *, 2) = 0;
    M2C_FIELD(arg0, s16 *, 0) = 0;
    M2C_FIELD(arg0, f32 *, 4) = (f32) lbl_805DC3BC;
    M2C_FIELD(arg0, s16 *, 0x12) = 0;
    M2C_FIELD(arg0, s16 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, f32 *, 0x20) = (f32) lbl_805DC3C0;
    M2C_FIELD(arg0, f32 *, 0x24) = (f32) lbl_805DC3BC;
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) lbl_805DC3BC;
    M2C_FIELD(arg0, f32 *, 0x2C) = (f32) lbl_805DC3C4;
    TObjPlayer__sub_801D2E20(arg0 + 0x30, arg0, lbl_805DC3C0, lbl_805DC3BC);
}

s16 TObjPlayer__sub_801D341C(void* p) { return *(s16*)((char*)p + 0x2); }
void TObjPlayer__sub_801D3424(void* p, s16 v) { *(s16*)((char*)p + 0x10) = v; }
int is_flag32_clear__10TObjPlayerFPv(void* p) { return (TObjPlayer__sub_8001BEF8((char*)p + 0xc, 32)) == 0; }
int TObjPlayer__sub_801D345C(void* p) { return TObjPlayer__sub_80121248((char*)p + 0x30, 0); }
int get_field_340__10TObjPlayerFPv(void* p) { return TObjPlayer__sub_801BF4DC((char*)p + 0x340); }
int check_status_flag_128__10TObjPlayerFPv(void* p) { return TObjPlayer__sub_8011E204(p, 128); }
void handle_6x54(void) {  }
void handle_6x8C(void) {  }
void handle_6x65(void) {  }
void handle_6x8B(void) {  }
void handle_6x64(void) {  }

}
