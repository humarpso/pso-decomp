#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

typedef struct Big { u8 b[144]; } Big;

struct O_8007B26C { u8 pad[0x8c]; s8 flags; };

extern "C" {
u32 TWindowSubComCard__sub_8007B070(u8 *arg0);
M2C_UNK strncpy(void *, void *, int);
void TWindowSubComCard__sub_8007B230(u8 *arg0, void *arg1);
M2C_UNK TWindowSubComCard__sub_8007AA70(Big *, s32);
M2C_UNK init_card__17TWindowSubComCardFPvPv(M2C_UNK *, s32);
s32 get_keyboard_mode__17TWindowSubComCardFv();
M2C_UNK init_guild_card__17TWindowSubComCardFPv(M2C_UNK *);
void TWindowSubComCard__sub_8007AF10(s32 arg0);
void TWindowSubComCard__sub_8007B26C(O_8007B26C *self);
}

extern "C" {

int TLobby__sub_8007B458(void*, void*);
int clear(void* p);
int memset(void*, int, int);

#pragma push
#pragma fp_contract on
void TWindowSubComCard__sub_8007AF10(s32 arg0) {
    Big spC;
    M2C_UNK sp8;
    s32 temp;
    init_guild_card__17TWindowSubComCardFPv(&sp8);
    temp = get_keyboard_mode__17TWindowSubComCardFv();
    TWindowSubComCard__sub_8007AA70(&spC, temp);
    init_card__17TWindowSubComCardFPvPv(&sp8, arg0);
}
#pragma pop

int TWindowSubComCard__sub_8007AF60(void) { return 0; }
int TWindowSubComCard__sub_8007AFB8(void) { return 0; }
int TWindowSubComCard__sub_8007B010(void) { return 0; }

u32 TWindowSubComCard__sub_8007B070(u8 *arg0) {
    if ((s8) M2C_FIELD(arg0, u8 *, 0x87) != 0) {
        return 1U;
    }
    if ((s32) M2C_FIELD(arg0, u8 *, 0x8C) != 1) {
        return 1U;
    }
    if ((s8) M2C_FIELD(arg0, u8 *, 0x8D) < 0) {
        return 1U;
    }
    if ((s8) M2C_FIELD(arg0, u8 *, 0x8E) < 0) {
        return 1U;
    }
    return (u32) (s8) M2C_FIELD(arg0, u8 *, 0x8F) >> 0x1FU;
}

int TWindowSubComCard__sub_8007B0D0(void) { return 0; }
int TWindowSubComCard__sub_8007B1AC(void) { return 0; }

void TWindowSubComCard__sub_8007B230(u8 *arg0, void *arg1) {
    strncpy((void *) (arg0 + 0x20), arg1, (int) (0x6B));
    M2C_FIELD(arg0, s8 *, 0x8B) = 0;
}

void TWindowSubComCard__sub_8007B26C(O_8007B26C *self) {
    self->flags &= ~1;
}

int clear(void* p) { return memset(p, 0, 144); }

}
