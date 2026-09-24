#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct E_8004813C { s32 a; s32 b; s32 c; s32 d; };

struct G_8004813C { u8 pad[0x42c]; E_8004813C *entries; };

struct O_8004813C { u8 pad[0x24]; s32 f24; u8 pad2[0xc]; s32 f34; };

struct G_8004816C { u8 pad[0x18]; s32 arr[1]; };

extern "C" {
extern s32 lbl_805D4CDC;
f32 TBoss3Volopt__sub_8004812C(s32 arg0);
extern G_8004813C *lbl_805D4CE4;
void TBoss3Volopt__sub_8004813C(O_8004813C *self, s32 i);
extern G_8004816C *lbl_805D4D1C;
s32 TBoss3Volopt__sub_8004816C(s32 i);
}

extern "C" {

void update_and_send_60__12TBoss3VoloptFPv(void* p);
void TBoss3Volopt__sub_800481B4(void* p);
void swap_6x18_fields__12TBoss3VoloptFPv(void* p);
void broadcast_state__12TBoss3VoloptFPv(void* p);
void TBoss3Volopt__sub_8004824C(void* p);
int swap_6x85_fields__12TBoss3VoloptFPv(void*);
int TLobby__send_and_handle_60(void*);
int read_be16_field2__10TObjPlayerFPv(void*);
int bswap_16__FPUs(void*);

f32 TBoss3Volopt__sub_8004812C(s32 arg0) {
    return M2C_FIELD((lbl_805D4CDC + (arg0 * 4)), f32 *, 0);
}

void TBoss3Volopt__sub_8004813C(O_8004813C *self, s32 i) {
    self->f34 = lbl_805D4CE4->entries[i].c;
    self->f24 = lbl_805D4CE4->entries[i].d;
}

s32 TBoss3Volopt__sub_8004816C(s32 i) {
    return lbl_805D4D1C->arr[i];
}

void update_and_send_60__12TBoss3VoloptFPv(void* p) { swap_6x85_fields__12TBoss3VoloptFPv(p); TLobby__send_and_handle_60(p); }
void TBoss3Volopt__sub_800481B4(void* p) { *(u8*)((char*)p + 0x0) = 133; *(u8*)((char*)p + 0x1) = 5; }
void swap_6x18_fields__12TBoss3VoloptFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); { int i; for (i = 0; i < 4; i++) { bswap_16__FPUs((char*)p + 0x4 + i * 2); } } }
void broadcast_state__12TBoss3VoloptFPv(void* p) { swap_6x18_fields__12TBoss3VoloptFPv((void*)(p)); TLobby__send_and_handle_60(p); }
void TBoss3Volopt__sub_8004824C(void* p) { *(u8*)((char*)p + 0x0) = 24; *(u8*)((char*)p + 0x1) = 3; }

}
