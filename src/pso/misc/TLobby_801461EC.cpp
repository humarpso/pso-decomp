#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
int TLobby__sub_801469D8(void*);
int TLobby__sub_801469B8(void* p);
int TLobby__sub_80146CA0(void*);
    extern int lbl_805D5708;
void call_146CA0_with_5708__6TLobbyFv(void);
    extern unsigned char lbl_8050C784[];
void* TLobby__sub_80146D68(int a0);
void TLobby__sub_8014715C(void* p, void* q);
M2C_UNK TLobby__sub_8040A3C0();
M2C_UNK TLobby__sub_8040AD64();
extern s32 lbl_805D570C;
void teardown_boss2__6TLobbyFv(void);
}

extern "C" {

int TLobby__sub_80146724(void);
int TLobby__sub_80146740(void);
int TLobby__sub_8014677C(void);
void cleanup__6TLobbyFv(void* _w0);
void flush_pending_flag2__6TLobbyFv(void);
int get_link_status_value__6TLobbyFv(void);
void init_keyboard_buffer__6TLobbyFv(void);
s32 poll_connect__6TLobbyFv(void);
s32 query_task_active__6TLobbyFv(void);
void set_battle_flag__6TLobbyFi(s32 arg0);
int TLobby__sub_80145A94(void);
int TLobby__sub_80145DB4(void*);
M2C_UNK TLobby__sub_80147284();
int TLobby__sub_803F4B68(void*);
M2C_UNK TLobby__sub_80421620();
M2C_UNK TLobby__sub_804219D0(M2C_UNK, M2C_UNK, s32);
M2C_UNK TLobby__sub_80421A50(M2C_UNK, M2C_UNK, s32);
s16 TLobby__sub_80426BD8();
s8 func_801A5E54__Fv();
s32 get_task_count__6TLobbyFv();
M2C_UNK send_and_handle__6TLobbyFPv();
void xfree__FPv(void*);
int xmalloc__FUl(void);

    extern int lbl_805D56C8;
    extern short lbl_805D56CE;
    extern int lbl_805D56D0;
void init_keyboard_buffer__6TLobbyFv(void) { lbl_805D56D0 = 0; lbl_805D56CE = 0; lbl_805D56C8 = 0; TLobby__sub_803F4B68((void*)0); lbl_805D56C8 = xmalloc__FUl(); TLobby__sub_80145A94(); }

s32 poll_connect__6TLobbyFv(void) {
    s32 var_r31;

    var_r31 = 0;
loop_1:
    if (var_r31 > 0x12C) {
        return 0;
    }
    var_r31 += 1;
    send_and_handle__6TLobbyFPv();
    if (func_801A5E54__Fv() != 0) {
        return 1;
    }
    if (TLobby__sub_80426BD8() == 1) {
        return 2;
    }
    goto loop_1;
}

extern s32 lbl_805D56F8;
extern s32 lbl_805D56FC;

void flush_pending_flag2__6TLobbyFv(void) {
    if (lbl_805D56F8 & 2) {
        TLobby__sub_804219D0(0, 0, lbl_805D56FC);
        lbl_805D56F8 &= 0xFFFFFFFD;
    }
}

extern s32 lbl_805D56F8;
extern s32 lbl_805D56FC;

void set_battle_flag__6TLobbyFi(s32 arg0) {
    lbl_805D56FC = arg0;
    lbl_805D56F8 |= 2;
    TLobby__sub_80421A50(0, 0, arg0);
}

int TLobby__sub_80146724(void) { return 3; }

int TLobby__sub_80146740(void) { return 0; }

extern s32 lbl_805D5710;

s32 query_task_active__6TLobbyFv(void) {
    if ((s32) lbl_805D5710 != 0) {
        return get_task_count__6TLobbyFv();
    }
    return 0;
}

int TLobby__sub_8014677C(void) { return TLobby__sub_80145DB4((void*)(1)); }
int get_link_status_value__6TLobbyFv(void) { return TLobby__sub_80145DB4((void*)(4)); }

extern s32 lbl_805D56F8;
extern u32 lbl_805D5700;
extern s32 lbl_805D5704;

void cleanup__6TLobbyFv(void* _w0) {
    if ((s32) lbl_805D5704 != 0) {
        TLobby__sub_801469B8((void*)(_w0));
    } else {
        TLobby__sub_80147284();
    }
    if (lbl_805D56F8 & 8) {
        TLobby__sub_80421620();
        lbl_805D56F8 &= 0xFFFFFFF7;
    }
    if ((u32) lbl_805D5700 != 0U) {
        xfree__FPv((void*)lbl_805D5700);
        lbl_805D5700 = 0U;
    }
}
int TLobby__sub_801469B8(void* p) { return TLobby__sub_801469D8(p); }
void call_146CA0_with_5708__6TLobbyFv(void) { TLobby__sub_80146CA0((void*)(lbl_805D5708)); }
void* TLobby__sub_80146D68(int a0) {  return (char*)lbl_8050C784 + a0 * 460; }
void TLobby__sub_8014715C(void* p, void* q) { *(u32*)((char*)p + 0x0) = *(u32*)((char*)q + 0x0); }
void teardown_boss2__6TLobbyFv(void) {
    if ((s32) lbl_805D570C != 0) {
        TLobby__sub_8040AD64();
        TLobby__sub_8040A3C0();
        lbl_805D570C = 0;
    }
}

}
