#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 fn_801E0900(s32);
int bswap_32__FPUl(void* a0);
void fn_801DF280(void *arg0);
void fn_801DF360(void* p);
int bswap_32__FPUl(void* a0);
s32 bswap__16TPlyGuildCardTagFv(s32);
void fn_801DF360(void* p);
int bswap_32__FPUl(void* a0);
void bswap__21TPlyMeetUserExtensionFv(void *);
void fn_801DF47C(void *arg0);
extern s32 lbl_805D49C0;
void TKeyBoardControl__sub_8000F950(void);
extern s32 lbl_805D49C0;
void TKeyBoardControl__sub_8000F95C(void);
extern s32 lbl_805D49BC;
void TKeyBoardControl__sub_8000F978(void);
extern s32 lbl_805D49BC;
void TKeyBoardControl__sub_8000F984(void);
extern s32 lbl_805D49B8;
void TKeyBoardControl__sub_8000F998(void);
extern s32 lbl_805D49B8;
void TKeyBoardControl__sub_8000F9A4(void);
void fn_801DF7F8(void* p);
extern M2C_UNK lbl_80515F70[];
extern s32 lbl_805D62B0;
    extern int lbl_805D49A0;
    extern int lbl_805D49A4;
    extern int lbl_805D49A8;
    extern int lbl_805D49B0;
    extern int lbl_805D5678;
    extern int lbl_805D5680;
extern s32 lbl_805D49C0;
extern s32 lbl_805D49B8;
void TKeyBoardControl__sub_8000F950(void);
void TKeyBoardControl__sub_8000F95C(void);
void TKeyBoardControl__sub_8000F978(void);
void TKeyBoardControl__sub_8000F984(void);
void TKeyBoardControl__sub_8000F998(void);
void TKeyBoardControl__sub_8000F9A4(void);
void fn_801DF7F8(void* p);
void fn_801DF874(void* p);
s32 bswap__16TPlyGuildCardTagFv(s32);
extern M2C_UNK lbl_80434088;
extern const f32 lbl_805D7D3C;
extern s32 lbl_805D5FC0;
extern s32 lbl_805D5D6C;
void fn_801DF874(void* p);
void fn_801DF740(void* p);
s32 bswap_16__FPUs(s32);
void fn_801DF740(void* p);
u8 fn_8010319C(u8 *arg0);
void TLobby__sub_801030EC(u8 *arg0);
void fn_801DF4B8(s32 arg0);
s32 bswap_16__FPUs(s32);
int bswap_32__FPUl(void* a0);
void fn_801DF4B8(s32 arg0);
void fn_801DF838(s32 arg0);
int bswap_32__FPUl(void* a0);
int bswap__13packet_headerFv(void* a0);
void fn_801DF838(s32 arg0);
}

extern "C" {

s32 fn_801E0900(s32);
s32 bswap_16__FPUs(s32);
s32 bswap__16TPlyGuildCardTagFv(s32);
s32 __ct__8TPlySmthFv(s32);
s32 __ct__16TPlyGuildCardTagFv(s32);
int bswap_32__FPUl(void* a0 = 0);
void bswap_cmd_88_body(void* p);
void fn_801DF42C(void* p);
void fn_801DF6F0(void* p);
void bswap_c0_lobby_entries(void* p);
int __ct__16TPlyGuildCardTagFRC16TPlyGuildCardTag(void*);
void* fn_801DF3F0(void* p, void* a1);
void fn_801DF6BC(void* p);
int bswap_cmd_8a_header(void* p);
int bswap_packet_header_cmd_b1(void* p);

void fn_801DF280(void *arg0) {
    bswap__13packet_headerFv((void*)(arg0));
    fn_801E0900((s32)((void *)((char *)arg0 + 68)));
    bswap_32__FPUl((void*)((void *)((char *)arg0 + 76)));
}

s32 fn_801DF2BC(s32 arg0) {
    __ct__8TPlySmthFv(arg0 + 0x44);
    return arg0;
}
int bswap_cmd_8a_header(void* p) { return bswap__13packet_headerFv(p); }
void bswap_cmd_88_body(void* p) { bswap__13packet_headerFv(p); { int i; for (i = 0; i < 16; i++) { fn_801DF360((void*)((char*)p + 0x4 + i * 12)); } } }

void fn_801DF360(void* p) { bswap__16TPlyGuildCardTagFv((s32)(p)); bswap_32__FPUl((char*)p + 0x8); }

int fn_801DF394(void) { return 0; }
void* fn_801DF3F0(void* p, void* a1) { __ct__16TPlyGuildCardTagFRC16TPlyGuildCardTag(p); *(void**)((char*)p + 0x8) = *(void**)((char*)a1 + 0x8); return p; }
void fn_801DF42C(void* p) { bswap__13packet_headerFv(p); { int i; for (i = 0; i < 32; i++) { fn_801DF47C((void *)((char*)p + 0x4 + i * 212)); } } }

void fn_801DF47C(void *arg0) {
    bswap_32__FPUl((void*)(arg0));
    fn_801DF4B8((s32)((s32)((void *)((char *)arg0 + 100))));
    bswap__21TPlyMeetUserExtensionFv((void *)((char *)arg0 + 112));
}

void fn_801DF4B8(s32 arg0) {
    ((s32)bswap__13packet_headerFv((void*)(arg0)));
    ((s32)bswap_32__FPUl((void*)(arg0 + 4)));
    bswap_16__FPUs(arg0 + 8);
    bswap_16__FPUs(arg0 + 0xA);
}

int fn_801DF4FC(void) { return 0; }
int fn_801DF558(void) { return 0; }
int fn_801DF61C(void) { return 0; }
void fn_801DF6BC(void* p) { bswap__13packet_headerFv(p); fn_801DF6F0((char*)p + 0x4); }
void fn_801DF6F0(void* p) { bswap_32__FPUl(p); { int i; for (i = 0; i < 5; i++) { fn_801DF740((void*)((char*)p + 0x4 + i * 4)); } } }

void fn_801DF740(void* p) { bswap_16__FPUs((s32)((void*)(p))); bswap_16__FPUs((s32)((void*)((char*)p + 0x2))); }

int TProtocol__sub_801DF774(void) { return 0; }
void bswap_c0_lobby_entries(void* p) { bswap__13packet_headerFv(p); { int i; for (i = 0; i < 56; i++) { fn_801DF7F8((void*)((char*)p + 0x4 + i * 32)); } } }

}
extern "C" {
void fn_801DF7F8(void* p) { fn_801DF740((void*)(p)); }

int bswap_packet_header_cmd_b1(void* p) { return bswap__13packet_headerFv(p); }

void fn_801DF838(s32 arg0) {
    ((M2C_UNK)bswap__13packet_headerFv((void*)(arg0)));
    ((M2C_UNK)bswap_32__FPUl((void*)(arg0 + 4)));
    ((M2C_UNK)bswap_32__FPUl((void*)(arg0 + 8)));
}

void fn_801DF874(void* p) { bswap__13packet_headerFv((void*)(p)); bswap__16TPlyGuildCardTagFv((s32)((char*)p + 0x4)); }

s32 fn_801DF8A8(s32 arg0) {
    __ct__16TPlyGuildCardTagFv(arg0 + 4);
    return arg0;
}

}
