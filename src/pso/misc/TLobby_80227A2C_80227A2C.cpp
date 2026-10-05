#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_80227AA8_lbl_80514F64 {
    M2C_UNK value;
    u8 remaining[0xC38];
};

extern "C" {
s32 TLobby__sub_80227CC0();
M2C_UNK fn_8023F660(void *, void *, void *, int, int, int);
extern RecoveredGlobal_80227AA8_lbl_80514F64 lbl_80514F64;
void TLobby__sub_80227AA8(s32 arg0);
}

extern "C" {

int free__6TLobbyFPv(void* p);
int TLobby__sub_80227A4C(void* p);
void TLobby__sub_80227A6C(void);
int TLobby__sub_80227A70(void* p);
void TLobby__sub_80227A90(void);
void TLobby__sub_80227A94(void);
int get_music_base_gain(void);
int TLobby__sub_8022804C(void*);
int xfree__FPv(void*);
int xmalloc__FUl(void*);

int free__6TLobbyFPv(void* p) { return xfree__FPv(p); }
int TLobby__sub_80227A4C(void* p) { return xmalloc__FUl(p); }
void TLobby__sub_80227A6C(void) {  }
int TLobby__sub_80227A70(void* p) { return TLobby__sub_8022804C(p); }
void TLobby__sub_80227A90(void) {  }

    extern int lbl_805D3710;
    extern int lbl_805D6314;
void TLobby__sub_80227A94(void) { lbl_805D6314 = lbl_805D3710; }

    extern int lbl_805D6288;
int get_music_base_gain(void) {  return lbl_805D6288; }
typedef char RecoveredGlobal_80227AA8_lbl_80514F64_size[sizeof(RecoveredGlobal_80227AA8_lbl_80514F64) == 0xC3C ? 1 : -1];
void TLobby__sub_80227AA8(s32 arg0) {
    fn_8023F660((void *) (&lbl_80514F64.value), (void *) (arg0), (void *) (TLobby__sub_80227CC0() + 0x55), (int) (0x40), (int) (0x40), (int) (0));
}

}

__declspec(section ".ctors") static void *const __sinit_TLobby_80227A2C_80227A2C_cpp_ref = (void *)TLobby__sub_80227A94;
