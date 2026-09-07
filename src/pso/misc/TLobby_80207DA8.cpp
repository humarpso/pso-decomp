#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80208D28_lbl_805139F8 {
    M2C_UNK value;
    u8 remaining[0x44];
};

extern "C" {
u8 * heap_alloc__5THeapFUl(void *, s32);
extern RecoveredGlobal_80208D28_lbl_805139F8 lbl_805139F8;
extern u8 *lbl_805D6094;
u8 *TLobby__sub_80208D28(s32 arg0, s32 arg1);
}

extern "C" {

void TLobby__sub_80208884(void* a0);
void set_destroy_event__6TLobbyFi(int a0);
void spawn_destroy_event__6TLobbyFPv(void *arg0);
void TLobby__sub_80208900(void);
s32 get_destroy_event_obj__6TLobbyFv();
M2C_UNK TNpcPlayer__sub_8034E5A8(s16);
M2C_UNK TSetEvtDestroy__ct(void *, s32, void *);
void *__nw__7TObjectFUl(M2C_UNK);

    extern int lbl_805D6078;
    extern int lbl_805D607C;
void TLobby__sub_80208884(void* a0) { lbl_805D6078 = *(int*)((char*)a0 + 0x0); lbl_805D607C = *(int*)((char*)a0 + 0x4); }

    extern int lbl_805D6090;
void set_destroy_event__6TLobbyFi(int a0) { lbl_805D6090 = a0; }

extern s32 tl_01;

void spawn_destroy_event__6TLobbyFPv(void *arg0) {
    void *obj;

    if (get_destroy_event_obj__6TLobbyFv() != -1) {
        TNpcPlayer__sub_8034E5A8(M2C_FIELD(arg0, s16 *, 8));
    }
    obj = __nw__7TObjectFUl(0x34);
    if (obj != NULL) {
        TSetEvtDestroy__ct(obj, tl_01, arg0);
    }
    set_destroy_event__6TLobbyFi(-1);
}

void TLobby__sub_80208900(void) {  }
typedef char RecoveredGlobal_80208D28_lbl_805139F8_size[sizeof(RecoveredGlobal_80208D28_lbl_805139F8) == 0x48 ? 1 : -1];
u8 *TLobby__sub_80208D28(s32 arg0, s32 arg1) {
    s32 temp_r30;
    u8 *temp_r3;
    if (arg0 > 0x11) {
        return NULL;
    }
    temp_r30 = arg0 * 4;
    if ((u32) M2C_FIELD(&lbl_805139F8.value, M2C_UNK *, temp_r30) != 0U) {
        return NULL;
    }
    temp_r3 = (u8 *)(heap_alloc__5THeapFUl(lbl_805D6094, arg1));
    if (temp_r3 != NULL) {
        M2C_FIELD(&lbl_805139F8.value, M2C_UNK *, temp_r30) = (long) (temp_r3);
        return temp_r3;
    }
    return NULL;
}

}
