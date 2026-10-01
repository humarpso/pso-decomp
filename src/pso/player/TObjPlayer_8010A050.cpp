#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

typedef s32 M2C_UNK;
struct Obj_8010A1D0 {
    u8 pad0[0x18];
    void *vt;
    s32 f_1C;
    s32 f_20;
    s32 f_24;
    s16 f_28;
    u8 f_2A;
    u8 pad2B;
    u32 f_2C;
};

extern "C" {
u32 get_item_ctrl__10TObjPlayerFv();
void __ct__7TObjectFP7TObject(void *, void *);
extern const s32 lbl_8043E280[];
extern const s32 lbl_8043E2A0[];
extern M2C_UNK lbl_8049F130[];
Obj_8010A1D0 *TObjPlayer__sub_8010A1D0(Obj_8010A1D0 *self, void *parent, s16 a, u8 b);
}

extern "C" {

s32 get_entity_id__10TObjPlayerFPv(void* p);
s32 TObjPlayer__sub_8010A058(void* p);
void update_dropped_item__10TObjPlayerFPv(void *arg0);
void *TObjPlayer__sub_8010A178(void *arg0, s16 arg1);
M2C_UNK get_field_3e0__12TBoss3VoloptFPv();
M2C_UNK TLobby__sub_800869A4(s32, s32, M2C_UNK, M2C_UNK);
M2C_UNK TObjEneDellBiter__sub_80087350(s32, s32);
u32 get_item_ctrl__10TObjPlayerFv();
s32 TObjPlayer__sub_802034B0();
s32 TPlayerBattleCtrl4P__sub_801BA74C(u16);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
s16 TObjPlayer__sub_80117F14(u16, s8 *);
M2C_UNK init__9TItemDataFv(s8 *);
M2C_UNK queue_destruction__7TObjectFv(void *);

s32 get_entity_id__10TObjPlayerFPv(void* p) { return *(s32*)((char*)p + 0x24); }
s32 TObjPlayer__sub_8010A058(void* p) { return *(s32*)((char*)p + 0xf4); }

extern const f64 lbl_8043E2C0;
extern const f32 lbl_805DAB58;

struct TItemData8_8010a060 { s8 a; s8 b; u8 c; s8 pad[21]; };

void update_dropped_item__10TObjPlayerFPv(void *arg0) {
    struct TItemData8_8010a060 sp8;
    s32 temp_r3;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x2C) != get_item_ctrl__10TObjPlayerFv()) {
        queue_destruction__7TObjectFv(arg0);
        return;
    }
    if (lbl_805DAB58 == (f32) M2C_FIELD(arg0, s32 *, 0x1C)) {
        init__9TItemDataFv(&sp8.a);
        sp8.a = 1;
        sp8.b = 2;
        sp8.c = M2C_FIELD(arg0, u8 *, 0x2A);
        if ((TObjPlayer__sub_80117F14(M2C_FIELD(arg0, u16 *, 0x28), &sp8.a) > 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x20) != -1)) {
            temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(M2C_FIELD(arg0, u16 *, 0x28));
            if (temp_r3 != 0) {
                get_field_3e0__12TBoss3VoloptFPv();
                if (TObjPlayer__sub_802034B0() == 1) {
                    if ((s32) M2C_FIELD(arg0, s32 *, 0x24) == 0) {
                        TLobby__sub_800869A4(temp_r3 + 0x2FC, M2C_FIELD(arg0, s32 *, 0x20), 0, 0xA);
                    } else {
                        TObjEneDellBiter__sub_80087350(temp_r3 + 0x2FC, M2C_FIELD(arg0, s32 *, 0x20));
                    }
                }
            }
        }
        M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    }
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) + 1);
}

extern M2C_UNK lbl_8049F130[];

void *TObjPlayer__sub_8010A178(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8049F130;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
Obj_8010A1D0 *TObjPlayer__sub_8010A1D0(Obj_8010A1D0 *self, void *parent, s16 a, u8 b) {
    __ct__7TObjectFP7TObject(self, parent);
    self->vt = lbl_8049F130;
    self->f_1C = 0;
    self->f_20 = lbl_8043E2A0[(b - 0x53) % 8];
    self->f_24 = lbl_8043E280[(b - 0x53) % 8];
    self->f_28 = a;
    self->f_2A = b;
    self->f_2C = get_item_ctrl__10TObjPlayerFv();
    return self;
}

}
