#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct M2CCopy_10 { u8 bytes[0x10]; };

struct M2CCopy_20 { u8 bytes[0x20]; };

struct M2CCopy_50 { u8 bytes[0x50]; };

struct M2CCopy_348 { u8 bytes[0x348]; };

struct M2CCopy_24 { u8 bytes[0x24]; };

struct M2CCopy_14 { u8 bytes[0x14]; };

extern "C" {
void TObjPlayer__sub_8013A820(void *arg0, void *arg1);
    extern int lbl_805D60D0;
    extern int lbl_805D5328;
void TObjPlayer__sub_8013A820(void *arg0, void *arg1);
void *TObjPlayer__sub_8013A748(void *arg0, void *arg1);
void* TObjPlayer__sub_8013A788(void* p, void* a1);
void *TObjPlayer__sub_8013A748(void *arg0, void *arg1);
void *TObjPlayer__sub_8013A748(void *arg0, void *arg1);
u8 *TProtocol__sub_8013A650(u8 *arg0, u8 *arg1);
}

extern "C" {

void TLobby__sub_8013A4A8(void* p, void* a1);
void TLobby__sub_8013A4E4(void* p);
void TLobby__sub_8013A578(void* p);
void TLobby__sub_8013A5C0(void* p);
int TLobby__sub_8013A5D4(void);
void bswap_and_handle_packet__6TLobbyFii(s32 arg0, s32 arg1);
void bswap_header_fields__6TLobbyFi(s32 arg0);
void send_packet_60__6TLobbyFi(s32 arg0);
s32 TLobby__send_and_handle_60(s32);
s32 TLobby__sub_801E44D8(s32, s32);
s32 bswap_16__FPUs(s32);
s32 bswap_32__FPUl(s32);
s32 bswap_packet_header__6TLobbyFPv();
int send_command__6TLobbyFPvUi(void* a0 = 0, void* a1 = 0);

void TLobby__sub_8013A4A8(void* p, void* a1) { TLobby__sub_8013A4E4((void*)(p)); send_command__6TLobbyFPvUi(p, a1); }

void TLobby__sub_8013A4E4(void* p) { bswap_header_fields__6TLobbyFi((s32)(p)); }

void bswap_header_fields__6TLobbyFi(s32 arg0) {
    bswap_16__FPUs(arg0 + 2);
    bswap_32__FPUl(arg0 + 4);
}
void bswap_and_handle_packet__6TLobbyFii(s32 arg0, s32 arg1) {
    bswap_packet_header__6TLobbyFPv();
    TLobby__sub_801E44D8(arg0, arg1);
}
void TLobby__sub_8013A578(void* p) { *(u8*)((char*)p + 0x0) = 111; *(u8*)((char*)p + 0x1) = 129; }
void send_packet_60__6TLobbyFi(s32 arg0) {
    bswap_packet_header__6TLobbyFPv();
    TLobby__send_and_handle_60(arg0);
}
void TLobby__sub_8013A5C0(void* p) { *(u8*)((char*)p + 0x0) = 114; *(u8*)((char*)p + 0x1) = 1; }

int TLobby__sub_8013A5D4(void) { return 0; }

u8 *TProtocol__sub_8013A650(u8 *arg0, u8 *arg1) {
    u8 *temp_r4;
    u8 *temp_r4_2;
    u8 *temp_r5;
    u8 *temp_r6;
    M2C_FIELD(arg0, u8 *, 0) = (u8) M2C_FIELD(arg1, u8 *, 0);
    M2C_FIELD(arg0, u8 *, 1) = (u8) M2C_FIELD(arg1, u8 *, 1);
    M2C_FIELD(arg0, u8 *, 2) = (u8) M2C_FIELD(arg1, u8 *, 2);
    M2C_FIELD(arg0, u8 *, 3) = (u8) M2C_FIELD(arg1, u8 *, 3);
    *(M2CCopy_348 *)((s32) arg0 + 4) = *(const M2CCopy_348 *)((s32) arg1 + 4);
    temp_r6 = (u8 *)(arg0 + 0x348);
    temp_r4 = (u8 *)(arg1 + 0x348);
    *(M2CCopy_24 *)((s32) temp_r6 + 4) = *(const M2CCopy_24 *)((s32) temp_r4 + 4);
    *(M2CCopy_50 *)((s32) (arg0 + 0x36C) + 4) = *(const M2CCopy_50 *)((s32) (arg1 + 0x36C) + 4);
    TObjPlayer__sub_8013A748((void *)((s32) (arg0 + 0x3C0)), (void *)((s32) (arg1 + 0x3C0)));
    temp_r5 = (u8 *)(arg0 + 0x404);
    temp_r4_2 = (u8 *)(arg1 + 0x404);
    *(M2CCopy_14 *)((s32) temp_r5 + 4) = *(const M2CCopy_14 *)((s32) temp_r4_2 + 4);
    return arg0;
}

void *TObjPlayer__sub_8013A748(void *arg0, void *arg1) {
    TObjPlayer__sub_8013A788((void*)(arg0), (void*)(arg1));
    ((void (*)(void *, void *))TObjPlayer__sub_8013A788)((void *)((char *)arg0 + 36), (void *)((char *)arg1 + 36));
    return arg0;
}

void* TObjPlayer__sub_8013A788(void* p, void* a1) { *(void**)(p) = *(void**)((char*)a1 + 0x0); TObjPlayer__sub_8013A820((void *)((void*)((char*)p + 0x4)), (void *)((void*)((char*)a1 + 0x4))); TObjPlayer__sub_8013A820((void *)((void*)((char*)p + 0x8)), (void *)((void*)((char*)a1 + 0x8))); TObjPlayer__sub_8013A820((void *)((void*)((char*)p + 0xc)), (void *)((void*)((char*)a1 + 0xc))); TObjPlayer__sub_8013A820((void *)((void*)((char*)p + 0x10)), (void *)((void*)((char*)a1 + 0x10))); TObjPlayer__sub_8013A820((void *)((void*)((char*)p + 0x14)), (void *)((void*)((char*)a1 + 0x14))); TObjPlayer__sub_8013A820((void *)((void*)((char*)p + 0x18)), (void *)((void*)((char*)a1 + 0x18))); TObjPlayer__sub_8013A820((void *)((void*)((char*)p + 0x1c)), (void *)((void*)((char*)a1 + 0x1c))); TObjPlayer__sub_8013A820((void *)((void*)((char*)p + 0x20)), (void *)((void*)((char*)a1 + 0x20))); return p; }
void TObjPlayer__sub_8013A820(void *arg0, void *arg1) {
    M2C_FIELD(arg0, u8 *, 0) = (u8) M2C_FIELD(arg1, u8 *, 0);
    M2C_FIELD(arg0, u8 *, 1) = (u8) M2C_FIELD(arg1, u8 *, 1);
    M2C_FIELD(arg0, s16 *, 2) = (s16) M2C_FIELD(arg1, s16 *, 2);
}

}
