#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
extern s32 lbl_805D5550;
extern s32 TLobby__data_805D5E78;
void TLobby__sub_801EE520(s32 arg0);
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

}

}
