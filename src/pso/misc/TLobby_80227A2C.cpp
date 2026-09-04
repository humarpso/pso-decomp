#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void clear_ready_flag_unless_locked__6TLobbyFPv(void *arg0);
void clear_work_buffer(u8 *arg0);
void *construct__6TLobbyFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3);
s32 init_range_zero__6TLobbyFPv(void* arg0);
void refresh_render_state__6TLobbyFv(void);
void set_area__6TLobbyFPvi(void *arg0, s32 arg1);
s32 TLobby__sub_80207770(s32);
int TLobby__sub_80227B48(float);
int TLobby__sub_802405B0(void*, void*);
void __ct__7TObjectFP7TObject(void *);
s32 get_global_state__14TOKeyMachine01Fv();
M2C_UNK init_range__6TLobbyFPvi(void*, int);
void memset(void *, int, int);
int render_tick__Fv(void);

    extern unsigned char lbl_80514F64[];
    extern float lbl_805DC76C;
void refresh_render_state__6TLobbyFv(void) { TLobby__sub_802405B0(lbl_80514F64, (void*)0); TLobby__sub_80227B48(lbl_805DC76C); render_tick__Fv(); }

void clear_ready_flag_unless_locked__6TLobbyFPv(void *arg0) {
    if (get_global_state__14TOKeyMachine01Fv() != 0xF) {
        M2C_FIELD(arg0, s32 *, 0x20) = (s32) (M2C_FIELD(arg0, s32 *, 0x20) & 0xFFFFFFFE);
    }
}

void set_area__6TLobbyFPvi(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xC) = arg1;
    M2C_FIELD(arg0, s32 *, 0x18) = TLobby__sub_80207770(M2C_FIELD(arg0, s32 *, 0xC));
}

s32 init_range_zero__6TLobbyFPv(void* arg0) {
    init_range__6TLobbyFPvi(arg0, 0);
    return (s32)arg0;
}

void clear_work_buffer(u8 *arg0) {
    memset((void *)(arg0 + 0x1C), (int)(0), (int)(0x1000));
    M2C_FIELD(arg0, s32 *, 0x109C) = 0;
}

extern M2C_UNK lbl_804CC048[];

void *construct__6TLobbyFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804CC048;
    M2C_FIELD(arg0, void **, 0x10A0) = arg2;
    M2C_FIELD(arg0, void **, 0x10A4) = arg3;
    memset((void *)((void *)((char *)arg0 + 28)), (int)(0), (int)(4096));
    M2C_FIELD(arg0, u32 *, 0x109C) = 0;
    return arg0;
}

}
