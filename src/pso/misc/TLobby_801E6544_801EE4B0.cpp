#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_801EE5A4_TLobby__data_80512220 {
    u32 value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_801EE5A4_lbl_805129F8 {
    M2C_UNK value;
    u8 remaining[0xD4];
};

struct Pkt_801EE54C {
    u8 cmd;
    u8 size;
    u16 a;
    s32 b;
    s32 c;
    s32 d;
};

struct Ent_801EE5EC {
    u8 name[0x20];
    s32 v;
};

extern "C" {
extern s32 lbl_805D5550;
extern s32 TLobby__data_805D5E78;
void TLobby__sub_801EE520(s32 arg0);
M2C_UNK memset(void *, int, int);
extern RecoveredGlobal_801EE5A4_TLobby__data_80512220 TLobby__data_80512220;
extern RecoveredGlobal_801EE5A4_lbl_805129F8 lbl_805129F8;
void TLobby__sub_801EE5A4(void);
s32 TObjPlayer__sub_800196EC();
void byteswap_and_send__6TLobbyFi(s32 arg0);
void init_packet_67_04__6TLobbyFPv(void* p);
extern RecoveredGlobal_801EE5A4_TLobby__data_80512220 TLobby__data_80512220;
void TLobby__sub_801EE54C(void);
void* strncpy(void*, s32, s32);
extern RecoveredGlobal_801EE5A4_TLobby__data_80512220 TLobby__data_80512220;
extern RecoveredGlobal_801EE5A4_lbl_805129F8 lbl_805129F8;
void TLobby__sub_801EE5EC(void);
}

extern "C" {

void TLobby__sub_801EE4D4(void);
int TLobby__sub_801EE4D8(void);
void notify_guild_offline__6TLobbyFUs(u16 arg0);
void process_static_805D53A0__6TLobbyFv(void);
int THunterGuildSeqOffline__sub_801F3718(void*);
int TLobby__sub_8024AC20(void*);

    extern int lbl_805D53A0;
void process_static_805D53A0__6TLobbyFv(void) { TLobby__sub_8024AC20((void*)(lbl_805D53A0)); }

void TLobby__sub_801EE4D4(void) {  }
int TLobby__sub_801EE4D8(void) { return THunterGuildSeqOffline__sub_801F3718((void*)(-1)); }

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {

void notify_guild_offline__6TLobbyFUs(u16 arg0) {
    THunterGuildSeqOffline__sub_801F3718((void *) (arg0));
}
void TLobby__sub_801EE520(s32 arg0) {
    s32 var_r5;
    var_r5 = lbl_805D5550;
    if (var_r5 < 0) {
        var_r5 = 0;
    }
    if (var_r5 > 2) {
        var_r5 = 2;
    }
    M2C_FIELD(TLobby__data_805D5E78, M2C_UNK *, ((arg0 * 4) & 0x3FC)) = var_r5;
}
typedef char RecoveredGlobal_801EE5A4_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801EE5A4_TLobby__data_80512220) == 0x20 ? 1 : -1];
typedef char RecoveredGlobal_801EE5A4_lbl_805129F8_size[sizeof(RecoveredGlobal_801EE5A4_lbl_805129F8) == 0xD8 ? 1 : -1];

void TLobby__sub_801EE54C(void) {
    Pkt_801EE54C pkt;
    s32 x = ((s32 *)&TLobby__data_80512220)[0];
    init_packet_67_04__6TLobbyFPv(&pkt);
    pkt.a = 0;
    pkt.b = TObjPlayer__sub_800196EC();
    pkt.c = x;
    pkt.d = 0;
    byteswap_and_send__6TLobbyFi((s32)&pkt);
}

void TLobby__sub_801EE5A4(void) {
    if ((u32) TLobby__data_80512220.value <= 5U) {
        memset((void *) ((u8 *)&lbl_805129F8.value + (TLobby__data_80512220.value * 0x24)), (int) (0), (int) (0x24));
    }
}
void TLobby__sub_801EE5EC(void) {
    s32 i = ((s32 *)&TLobby__data_80512220)[0];
    s32 v = ((s32 *)&TLobby__data_80512220)[1];
    s32 n = ((s32 *)&TLobby__data_80512220)[2];
    if (i <= 5) {
        Ent_801EE5EC* e = &((Ent_801EE5EC *)&lbl_805129F8)[i];
        e->v = v;
        strncpy(e, n, 0x20);
    }
}

}

}
