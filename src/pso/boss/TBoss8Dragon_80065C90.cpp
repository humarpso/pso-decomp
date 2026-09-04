#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
int TObjPlayer__sub_80019664(void);
void bswap_boss_actions__12TBoss8DragonFi(s32 arg0);
void TBoss8Dragon__sub_8006602C(void* p);
int TLobby__send_and_handle_60(void*);
void bswap_boss_actions__12TBoss8DragonFi(s32 arg0);
int TObjPlayer__sub_80019664(void);
extern M2C_UNK lbl_80434088;
extern const f32 lbl_805D7D3C;
extern s32 lbl_805D5FC0;
extern s32 lbl_805D5D6C;
void TBoss8Dragon__sub_8006602C(void* p);
void TObjFish__sub_800660D4(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, f32 farg0);
}

extern "C" {

void TBoss8Dragon__sub_80065F1C(void);
void TBoss8Dragon__sub_80065F20(void);
void TBoss8Dragon__sub_80065F24(void);
void TBoss8Dragon__sub_80065F28(void);
void TBoss8Dragon__sub_80065F2C(void);
void TBoss8Dragon__sub_80065F30(void);
void TBoss8Dragon__sub_80065F34(void);
int TBoss8Dragon__sub_80065F4C(void);
int TBoss8Dragon__sub_80065F80(void);
int TBoss8Dragon__sub_80065FD4(void);
void TBoss8Dragon__sub_800660A4(void* p);
void bswap_boss_actions__12TBoss8DragonFi(s32 arg0);
int fn_800660B8(void);
int get_instance_count__12TBoss8DragonFv(void);
void init_color__12TBoss8DragonFPv(void* p);
s32 bswap_32__FPUl(s32);
s32 read_be16_field2__10TObjPlayerFPv();

    extern int lbl_805D4DBC;
int get_instance_count__12TBoss8DragonFv(void) {  return lbl_805D4DBC; }

void TBoss8Dragon__sub_80065F1C(void) {  }
void TBoss8Dragon__sub_80065F20(void) {  }
void TBoss8Dragon__sub_80065F24(void) {  }
void TBoss8Dragon__sub_80065F28(void) {  }
void TBoss8Dragon__sub_80065F2C(void) {  }
void TBoss8Dragon__sub_80065F30(void) {  }
void TBoss8Dragon__sub_80065F34(void) {  }
void init_color__12TBoss8DragonFPv(void* p) { *(u8*)((char*)p + 0x0) = 160; *(u8*)((char*)p + 0x1) = 10; }

int TBoss8Dragon__sub_80065F4C(void) { return 0; }
int TBoss8Dragon__sub_80065F80(void) { return 0; }
int TBoss8Dragon__sub_80065FD4(void) { return 0; }

void TBoss8Dragon__sub_8006602C(void* p) { bswap_boss_actions__12TBoss8DragonFi((s32)((void*)(p))); TLobby__send_and_handle_60(p); }

void bswap_boss_actions__12TBoss8DragonFi(s32 arg0) {
    read_be16_field2__10TObjPlayerFPv();
    bswap_32__FPUl(arg0 + 4);
    bswap_32__FPUl(arg0 + 8);
    bswap_32__FPUl(arg0 + 0xC);
}
void TBoss8Dragon__sub_800660A4(void* p) { *(u8*)((char*)p + 0x0) = 159; *(u8*)((char*)p + 0x1) = 4; }

int fn_800660B8(void) { return 0; }

void TObjFish__sub_800660D4(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, f32 farg0) {
    M2C_FIELD(arg0, s32 *, 0x4C) = arg1;
    M2C_FIELD(arg0, s32 *, 0x50) = arg2;
    M2C_FIELD(arg0, s32 *, 0x54) = arg3;
    M2C_FIELD(arg0, u16 *, 0x2C) = (u16) (M2C_FIELD(arg0, u16 *, 0x2C) | 0x200);
    M2C_FIELD(arg0, f32 *, 0x5C) = farg0;
    if (arg4 != 0) {
        M2C_FIELD(arg0, u16 *, 0x2C) = (u16) (M2C_FIELD(arg0, u16 *, 0x2C) | 0x400);
    }
}

}
