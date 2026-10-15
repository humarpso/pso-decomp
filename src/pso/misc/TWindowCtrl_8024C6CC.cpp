#include "types.h"

extern "C" {

s32 hide_radar__13TRaderMapCoreFv();
s32 show_radar__13TRaderMapCoreFv();
void TWindowCtrl__sub_8024C6CC(void* p);
void TWindowCtrl__sub_8024C6DC(void* p);
void TWindowCtrl__sub_8024C6EC(void* p);
void TWindowCtrl__sub_8024C6FC(void* p);
void TWindowCtrl__sub_8024C70C(void* p);
void TWindowCtrl__sub_8024C71C(void* p);
void TWindowCtrl__sub_8024C72C(void* p);
void TWindowCtrl__sub_8024C73C(void* p);
void TWindowCtrl__sub_8024C74C(void* p);
void TWindowCtrl__sub_8024C75C(void* p);
int TWindowCtrl__sub_8024C7D4(void* p);
int TWindowCtrl__sub_8024C7E0(void* p);
int is_enabled__11TWindowCtrlFPv(void* p);
int TWindowCtrl__sub_8024C7F8(void* p);
int is_visible__11TWindowCtrlFPv(void* p);
s16 get_field_20__11TWindowCtrlFPv(void* p);
s16 get_width__11TWindowCtrlFPv(void* p);

void TWindowCtrl__sub_8024C6CC(void* p) { *(u16*)((char*)p + 0x1c) |= 0x40; }
void TWindowCtrl__sub_8024C6DC(void* p) { *(u16*)((char*)p + 0x1c) &= 0xffffffbf; }
void TWindowCtrl__sub_8024C6EC(void* p) { *(u16*)((char*)p + 0x1c) |= 0x2; }
void TWindowCtrl__sub_8024C6FC(void* p) { *(u16*)((char*)p + 0x1c) &= 0xfffffffd; }
void TWindowCtrl__sub_8024C70C(void* p) { *(u16*)((char*)p + 0x1c) |= 0x4; }
void TWindowCtrl__sub_8024C71C(void* p) { *(u16*)((char*)p + 0x1c) &= 0xfffffffb; }
void TWindowCtrl__sub_8024C72C(void* p) { *(u16*)((char*)p + 0x1c) |= 0x8; }
void TWindowCtrl__sub_8024C73C(void* p) { *(u16*)((char*)p + 0x1c) &= 0xfffffff7; }
void TWindowCtrl__sub_8024C74C(void* p) { *(u16*)((char*)p + 0x1c) |= 0x10; }
void TWindowCtrl__sub_8024C75C(void* p) { *(u16*)((char*)p + 0x1c) &= 0xffffffef; }
void set_radar_dirty_flag__11TWindowCtrlFPv(void *arg0) {
    *(u16 *)((s8 *)arg0 + 0x1C) = (u16) (*(u16 *)((s8 *)arg0 + 0x1C) | 1);
    hide_radar__13TRaderMapCoreFv();
}
void clear_flag_bit0__11TWindowCtrlFPv(void *arg0) {
    *(u16 *)((s8 *)arg0 + 0x1C) = (u16) (*(u16 *)((s8 *)arg0 + 0x1C) & 0xFFFE);
    show_radar__13TRaderMapCoreFv();
}

}

#include "types.h"

extern "C" {
bool TWindowCtrl__sub_8024C7C4(u8 *arg0);
}

extern "C" {

s32 hide_radar__13TRaderMapCoreFv();
s32 show_radar__13TRaderMapCoreFv();
void TWindowCtrl__sub_8024C6CC(void* p);
void TWindowCtrl__sub_8024C6DC(void* p);
void TWindowCtrl__sub_8024C6EC(void* p);
void TWindowCtrl__sub_8024C6FC(void* p);
void TWindowCtrl__sub_8024C70C(void* p);
void TWindowCtrl__sub_8024C71C(void* p);
void TWindowCtrl__sub_8024C72C(void* p);
void TWindowCtrl__sub_8024C73C(void* p);
void TWindowCtrl__sub_8024C74C(void* p);
void TWindowCtrl__sub_8024C75C(void* p);
int TWindowCtrl__sub_8024C7D4(void* p);
int TWindowCtrl__sub_8024C7E0(void* p);
int is_enabled__11TWindowCtrlFPv(void* p);
int TWindowCtrl__sub_8024C7F8(void* p);
int is_visible__11TWindowCtrlFPv(void* p);
s16 get_field_20__11TWindowCtrlFPv(void* p);
s16 get_width__11TWindowCtrlFPv(void* p);

bool TWindowCtrl__sub_8024C7C4(u8 *arg0) {
    return *(s32 *)((s8 *)arg0 + 0x3C) != 0;
}

}

#include "types.h"

extern "C" {

s32 hide_radar__13TRaderMapCoreFv();
s32 show_radar__13TRaderMapCoreFv();
void TWindowCtrl__sub_8024C6CC(void* p);
void TWindowCtrl__sub_8024C6DC(void* p);
void TWindowCtrl__sub_8024C6EC(void* p);
void TWindowCtrl__sub_8024C6FC(void* p);
void TWindowCtrl__sub_8024C70C(void* p);
void TWindowCtrl__sub_8024C71C(void* p);
void TWindowCtrl__sub_8024C72C(void* p);
void TWindowCtrl__sub_8024C73C(void* p);
void TWindowCtrl__sub_8024C74C(void* p);
void TWindowCtrl__sub_8024C75C(void* p);
int TWindowCtrl__sub_8024C7D4(void* p);
int TWindowCtrl__sub_8024C7E0(void* p);
int is_enabled__11TWindowCtrlFPv(void* p);
int TWindowCtrl__sub_8024C7F8(void* p);
int is_visible__11TWindowCtrlFPv(void* p);
s16 get_field_20__11TWindowCtrlFPv(void* p);
s16 get_width__11TWindowCtrlFPv(void* p);

int TWindowCtrl__sub_8024C7D4(void* p) { return (*(u16*)((char*)p + 0x1c) >> 1) & 0x1; }
int TWindowCtrl__sub_8024C7E0(void* p) { return (*(u16*)((char*)p + 0x1c) >> 2) & 0x1; }
int is_enabled__11TWindowCtrlFPv(void* p) { return (*(u16*)((char*)p + 0x1c) >> 3) & 0x1; }
int TWindowCtrl__sub_8024C7F8(void* p) { return (*(u16*)((char*)p + 0x1c) >> 4) & 0x1; }
int is_visible__11TWindowCtrlFPv(void* p) { return *(u16*)((char*)p + 0x1c) & 0x1; }
s16 get_field_20__11TWindowCtrlFPv(void* p) { return *(s16*)((char*)p + 0x20); }
s16 get_width__11TWindowCtrlFPv(void* p) { return *(s16*)((char*)p + 0x20); }

}
