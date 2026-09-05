#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
extern u8 *lbl_805D553C;
s32 TAdDialingGC__sub_8013ADBC(s32 arg0);
}

extern "C" {

int TLobby__sub_8013AD50(void* p);
s32 TLobby__sub_8013AD5C(void* p);
u8 TLobby__sub_8013AD6C(void* p);
int TLobby__sub_8013AD74(void* p);
int get_flag_bit2__6TLobbyFPv(void* p);
u8 get_mode__6TLobbyFPv(void* p);
int get_status_flag__6TLobbyFPv(void* p);
void init_serial_access__6TLobbyFv(void);
int TAdEnterSerialAccessGC__sub_8013ADB0(void);
int TAdEnterSerialAccessGC__sub_80321A24(void);
void set_ready_flag__18TCheckRoomSequenceFPv(void* p);

int get_status_flag__6TLobbyFPv(void* p) { return (*(u16*)((char*)p + 0x70) >> 1) & 0x1; }
int get_flag_bit2__6TLobbyFPv(void* p) { return (*(u16*)((char*)p + 0x70) >> 2) & 0x1; }
int TLobby__sub_8013AD50(void* p) { return (*(u8*)((char*)p + 0x1d) >> 1) & 0x1; }
s32 TLobby__sub_8013AD5C(void* p) { return *(s32*)((char*)p + 0x20); }
u8 get_mode__6TLobbyFPv(void* p) { return *(u8*)((char*)p + 0x1e); }
u8 TLobby__sub_8013AD6C(void* p) { return *(u8*)((char*)p + 0x1e); }
int TLobby__sub_8013AD74(void* p) { return *(u8*)((char*)p + 0x1d) & 0x1; }

void init_serial_access__6TLobbyFv(void) { TAdEnterSerialAccessGC__sub_8013ADB0(); TAdEnterSerialAccessGC__sub_80321A24(); }
s32 TAdDialingGC__sub_8013ADBC(s32 arg0) {
    return M2C_FIELD(M2C_FIELD(lbl_805D553C, s32 *, 0x30), M2C_UNK *, (arg0 * 4));
}

}
