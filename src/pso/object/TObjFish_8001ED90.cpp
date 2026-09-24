#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8001EDF4_lbl_804FE148 {
    s8 value;
    u8 remaining[0x1F];
};

struct FishEntry8_8001ED9C { s32 a; s32 b; };

struct Fish_8001ED9C { u8 pad[0x430]; FishEntry8_8001ED9C *entries; };

struct FishEntry16_8001EDB0 { s32 a; s32 b; s32 c; s32 d; };

struct Fish_8001EDB0 { u8 pad[0x42C]; FishEntry16_8001EDB0 *entries; };

struct FishEntry16_8001EDC4 { s32 a; s32 b; s32 c; s32 d; };

struct Fish_8001EDC4 { u8 pad[0x42C]; FishEntry16_8001EDC4 *entries; };

struct List_8001EDD8 { u8 pad[0x18]; s32 items[0x100]; s32 count; };

extern "C" {
s32 strcmp(void *, void *);
extern RecoveredGlobal_8001EDF4_lbl_804FE148 lbl_804FE148;
extern s32 lbl_805D4AD4;
void TLobby__sub_8001EDF4(u8 *arg0);
s32 TObjFish__sub_8001ED9C(Fish_8001ED9C *self, s32 i);
s32 TObjFish__sub_8001EDB0(Fish_8001EDB0 *self, s32 i);
s32 TObjFish__sub_8001EDC4(Fish_8001EDC4 *self, s32 i);
void TLobby__sub_8001EDD8(List_8001EDD8 *self, s32 item);
}

extern "C" {

s32 TLobby__sub_8001EEF4(void);
int fn_8001ED90(void* p);
s32 TLobby__sub_8001ED88(void* p);

int fn_8001ED90(void* p) { return (*(u32*)((char*)p + 0x0) >> 10) & 0x1; }

s32 TObjFish__sub_8001ED9C(Fish_8001ED9C *self, s32 i) {
    return self->entries[i].b;
}

s32 TObjFish__sub_8001EDB0(Fish_8001EDB0 *self, s32 i) {
    return self->entries[i].d;
}

s32 TObjFish__sub_8001EDC4(Fish_8001EDC4 *self, s32 i) {
    return self->entries[i].c;
}

extern s32 lbl_805D4AD4;

typedef char RecoveredGlobal_8001EDF4_lbl_804FE148_size[sizeof(RecoveredGlobal_8001EDF4_lbl_804FE148) == 0x20 ? 1 : -1];

void TLobby__sub_8001EDD8(List_8001EDD8 *self, s32 item) {
    self->items[self->count++] = item;
}

void TLobby__sub_8001EDF4(u8 *arg0) {
    if (((s32) lbl_805D4AD4 == 0) && (strcmp(&lbl_804FE148.value, arg0) == 0)) {
        lbl_805D4AD4 = 1;
        lbl_804FE148.value = 0;
    }
}

s32 TLobby__sub_8001EEF4(void) {
    return lbl_805D4AD4;
}

}
