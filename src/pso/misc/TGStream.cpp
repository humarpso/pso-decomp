#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 load_file__8TGStreamFi(s32 arg0);

s32 alloc__22TQuestVmDownLoadServerFPv(s32);
M2C_UNK read_sectors_sync__8TGStreamFPvii(M2C_UNK *, s32, s32);
s32 get_instance__8TGStreamFv(M2C_UNK *);
M2C_UNK TGStream__ct(M2C_UNK *, M2C_UNK);
M2C_UNK open__8TGStreamFPvPvi(M2C_UNK *, s32, M2C_UNK);

s32 load_file__8TGStreamFi(s32 arg0) {
    M2C_UNK sp8[0xC];
    s32 temp_r31;
    s32 temp_r3;
    s32 temp_r3_2;

    open__8TGStreamFPvPvi(sp8, arg0, 1);
    temp_r3_2 = get_instance__8TGStreamFv(sp8);
    if (temp_r3_2 <= 0) {
        TGStream__ct(sp8, -1);
        return 0;
    }
    temp_r31 = (s32) (temp_r3_2 + 0x7FF) / 2048;
    temp_r3 = alloc__22TQuestVmDownLoadServerFPv(temp_r31 << 0xB);
    if (temp_r3 == 0) {
        TGStream__ct(sp8, -1);
        return 0;
    }
    read_sectors_sync__8TGStreamFPvii(sp8, temp_r31, temp_r3);
    TGStream__ct(sp8, -1);
    return temp_r3;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x800FDCB4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void read_sectors_sync__8TGStreamFPvii(u8 *arg0, s32 arg1, s32 arg2);
M2C_UNK reset_read_state__6TLobbyFv();
M2C_UNK set_read_params__6TLobbyFiii(void *, s32, s32);
M2C_UNK run_frame__6TLobbyFv();
s32 TLobby__sub_803CC4C0(s32);
M2C_UNK TLobby__sub_803CCB5C(s32);

extern s32 lbl_805D53D4;

void read_sectors_sync__8TGStreamFPvii(u8 *arg0, s32 arg1, s32 arg2) {
    TLobby__sub_803CCB5C(M2C_FIELD(arg0, s32 *, 0x20));
    set_read_params__6TLobbyFiii(arg0 + 0x20, arg1, arg2);
loop_1:
    if (TLobby__sub_803CC4C0(M2C_FIELD(arg0, s32 *, 0x20)) != 3) {
        run_frame__6TLobbyFv();
        goto loop_1;
    }
    reset_read_state__6TLobbyFv();
    lbl_805D53D4 += arg1 << 0xB;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800FDD28
#include "types.h"

extern "C" {

void reset__8TGStreamFv(void);
int TGStream__sub_800FDD50(void);

    extern int lbl_805D53D4;
void reset__8TGStreamFv(void) { lbl_805D53D4 = 0; TGStream__sub_800FDD50(); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800FDD50
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TGStream__sub_800FDD50(void);

extern s32 lbl_805D53D8;
extern s32 lbl_805D53DC;

void TGStream__sub_800FDD50(void) {
    lbl_805D53DC = 0;
    lbl_805D53D8 = 0x40000;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800FDD64
#include "types.h"

extern "C" {

void TGStream__sub_800FDD64(void);

void TGStream__sub_800FDD64(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800FDD68
#include "types.h"

extern "C" {

int get_instance__8TGStreamFv(void);

    extern int lbl_805D53E0;
int get_instance__8TGStreamFv(void) {  return lbl_805D53E0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800FE154
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TGStream__ct(void *arg0, s16 arg1);
M2C_UNK __dl__FPv(void *);
M2C_UNK TLobby__sub_8001EE48(M2C_UNK *);
M2C_UNK TLobby__sub_803CCE9C(s32);

extern M2C_UNK lbl_8043DAF8[];

void *TGStream__ct(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x28) == 0U) {
            TLobby__sub_803CCE9C(M2C_FIELD(arg0, s32 *, 0x20));
        }
        if ((s32) M2C_FIELD(arg0, s32 *, 0x24) == 0) {
            TLobby__sub_8001EE48(lbl_8043DAF8);
        }
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800FE1C4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *open__8TGStreamFPvPvi(void *arg0, void *arg1, s32 arg2);
s32 TLobby__sub_8001EEF4();
s32 TLobby__sub_8001EEFC(M2C_UNK *);
s32 get_file_size__6TLobbyFv(void *);
M2C_UNK pump_frames__6TLobbyFv();
M2C_UNK reset__8TGStreamFv();
void *TItemDrop__sub_800FDD70(void *, M2C_UNK);
M2C_UNK TLobby__sub_803CC578(s32, s32, M2C_UNK);
s32 TLobby__sub_803CD3A8(void *, M2C_UNK);

M2C_UNK strncpy(void *, void *, M2C_UNK);
extern M2C_UNK lbl_8043DAF8[];
extern s32 lbl_805D53C0;
extern s32 TItemDrop__data_805D53C4;
extern s32 lbl_805D53E0;

void *open__8TGStreamFPvPvi(void *arg0, void *arg1, s32 arg2) {
    s32 temp_r3;

    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, void **, 0x28) = NULL;
    reset__8TGStreamFv();
    M2C_FIELD(arg0, void **, 0x28) = TItemDrop__sub_800FDD70(arg1, 1);
    if ((void *) M2C_FIELD(arg0, void **, 0x28) != NULL) {
        M2C_FIELD(arg0, s32 *, 0x20) = (s32) TItemDrop__data_805D53C4;
        TLobby__sub_803CC578(M2C_FIELD(arg0, s32 *, 0x20), M2C_FIELD(M2C_FIELD(arg0, void **, 0x28), s32 *, 0x20), 0);
        lbl_805D53E0 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x28), s32 *, 0x24);
        strncpy(arg0, M2C_FIELD(arg0, void **, 0x28), 0x20);
    } else {
        temp_r3 = get_file_size__6TLobbyFv(arg1);
        lbl_805D53E0 = temp_r3;
        if (temp_r3 > 0) {
            M2C_FIELD(arg0, s32 *, 0x20) = TLobby__sub_803CD3A8(arg1, 0);
            strncpy(arg0, arg1, 0x20);
        } else {
            lbl_805D53E0 = 0;
            M2C_FIELD(arg0, s8 *, 0) = 0;
        }
    }
    M2C_FIELD(arg0, s32 *, 0x24) = arg2;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x24) == 0) {
        while (TLobby__sub_8001EEF4() == 0) {
            pump_frames__6TLobbyFv();
        }
        lbl_805D53C0 = TLobby__sub_8001EEFC(lbl_8043DAF8);
    }
    return arg0;
}

}
#endif
#endif
