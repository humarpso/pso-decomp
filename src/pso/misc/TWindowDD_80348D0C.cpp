#include "types.h"

struct S_80348DAC { s16 count; s16 unk2; s16 items[8]; };

struct S_80348D90 { s16 count; s16 unk2; s16 items[8]; };

struct S_80348DFC { s16 count; s16 unk2; s16 items[8]; s32 a; s32 b; };

struct S_80348DD8 { s16 count; s16 unk2; s16 items[8]; };

extern "C" {
void TWindowDD__sub_80348DAC(S_80348DAC *self);
void TWindowDD__sub_80348D90(S_80348D90 *self, s16 v);
void TWindowDD__sub_80348DFC(S_80348DFC *self);
void TWindowDD__sub_80348DD8(S_80348DD8 *self, s16 v);
}

extern "C" {

int TWindowDD__sub_80348D0C(void);
s32 TWindowDD__sub_80348D88(void* p);
void reset_index__9TWindowDDFPv(void* p);
void set_field14__9TWindowDDFPvi(void* p, s32 v);
int TLobby__send_and_handle_60(void*);
int handle_word_select__9TWindowDDFPv(void*);
void init_header__9TWindowDDFPv(void* p);

int TWindowDD__sub_80348D0C(void) { return 0; }

void reset_index__9TWindowDDFPv(void* p) { *(s32*)((char*)p + 0x14) = 0; }
void set_field14__9TWindowDDFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x14) = v; }
s32 TWindowDD__sub_80348D88(void* p) { return *(s32*)((char*)p + 0x14); }

void TWindowDD__sub_80348D90(S_80348D90 *self, s16 v) {
    if (self->count > 0) {
        self->items[self->count - 1] = v;
    }
}

void TWindowDD__sub_80348DAC(S_80348DAC *self) {
    if (self->count > 0) {
        self->items[--self->count] = -1;
    }
}

void TWindowDD__sub_80348DD8(S_80348DD8 *self, s16 v) {
    if (self->count < 8) {
        self->items[self->count++] = v;
    }
}

void TWindowDD__sub_80348DFC(S_80348DFC *self) {
    s32 i;
    self->unk2 = 0;
    self->count = 0;
    for (i = 0; i < 8; i++) {
        self->items[i] = -1;
    }
    self->a = 0;
    self->b = 0;
}

}
