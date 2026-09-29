#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_80291138_lbl_804D9668 {
    M2C_UNK value;
    u8 remaining[0x12D8];
};

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct M2CCopy_48 { u8 bytes[0x48]; };

struct RecoveredGlobal_802911E8_lbl_804DAA78 {
    M2C_UNK value;
    u8 remaining[0x8C];
};

extern "C" {
s32 queue_destruction__7TObjectFv(void *);
s32 TLobby__sub_803DA16C(void *);
extern RecoveredGlobal_80291138_lbl_804D9668 lbl_804D9668;
extern u32 lbl_805D6568;
void fn_80291138(void);
void TCameraCtrl__sub_800695E8(void *);
extern RecoveredGlobal_802911E8_lbl_804DAA78 lbl_804DAA78;
extern f32 lbl_805D3CA0;
extern const f32 lbl_805DD968;
extern const f32 lbl_805DD96C;
extern const f32 lbl_805DD970;
void fn_802911E8(f32 farg0);
extern u8 lbl_804D9578[];
extern s32 lbl_805D656C;
void TCharaMaking__resolve_creation_sprite_table(u8 **table, s32 *id);
void TLobby__sub_801E468C(int, void *);
void TObjCMIcon__sub_8029951C();
s32 create__10TObjCMIconFPv(int);
extern RecoveredGlobal_80291138_lbl_804D9668 lbl_804D9668;
extern s32 lbl_804DA944[];
extern f32 lbl_805D3C98;
extern s32 lbl_805D5544;
extern s32 tl_06;
extern u32 lbl_805D6568;
extern s32 lbl_805D656C;
extern const f32 lbl_805DD964;
void fn_80291178(void);
}

extern "C" {

typedef char RecoveredGlobal_80291138_lbl_804D9668_size[sizeof(RecoveredGlobal_80291138_lbl_804D9668) == 0x12DC ? 1 : -1];

void TCharaMaking__resolve_creation_sprite_table(u8 **table, s32 *id) {
  s32 index = *id;
  u8 *base = lbl_804D9578;
  if ((*id) < 143)
  {
    *table = base + 0xf8;
    return;
  }
  *id = (*id) - 143;
  if (lbl_805D656C == 0)
  {
    *table = base + 0xc24;
    return;
  }
  *table = base + 0xff8;
}

void fn_80291138(void) {
    if ((u32) lbl_805D6568 != 0U) {
        queue_destruction__7TObjectFv((void *) (lbl_805D6568));
    }
    lbl_805D6568 = 0U;
    TLobby__sub_803DA16C((void *) (&lbl_804D9668.value));
}
#pragma push
#pragma fp_contract on
typedef char RecoveredGlobal_802911E8_lbl_804DAA78_size[sizeof(RecoveredGlobal_802911E8_lbl_804DAA78) == 0x90 ? 1 : -1];

void fn_80291178(void) {
    lbl_805D656C = 0;
    lbl_805D3C98 = lbl_805DD964;
    if (lbl_805D5544 != 0) {
        lbl_805D656C = 1;
    }
    TObjCMIcon__sub_8029951C();
    (*(s32 *)&lbl_805D6568) = create__10TObjCMIconFPv(tl_06);
    TLobby__sub_801E468C(lbl_804DA944[lbl_805D656C], ((s32 *)&lbl_804D9668));
}

void fn_802911E8(f32 farg0) {
    struct CopyStack_802911E8 { u8 bytes[0x48]; };
    CopyStack_802911E8 copy_storage_802911E8;
    *(M2CCopy_48 *)(copy_storage_802911E8.bytes) = *(const M2CCopy_48 *)((s32) ((u8 *)(&lbl_804DAA78.value) + -4) + 4);
    (*(f32 *)(copy_storage_802911E8.bytes + 0x8)) = lbl_805DD968 * ((lbl_805DD970 * farg0) + lbl_805DD96C);
    TCameraCtrl__sub_800695E8((copy_storage_802911E8.bytes));
    lbl_805D3CA0 = farg0;
}
#pragma pop

}
