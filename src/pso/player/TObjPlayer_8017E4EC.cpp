#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Vec_8017E550 { f32 x, y, z; };

struct Row_8017E550 { Vec_8017E550 pos; f32 radius; s32 category; };

struct Set_8017E550 {
    u8 pad[0xC];
    Vec_8017E550 pos;
    u8 pad18[0x24 - 0x18];
    f32 radius;
    u8 pad28[0x30 - 0x28];
    s32 category;
    u8 pad34[0x40 - 0x34];
};

extern "C" {
void VecCopy__FP3VecPC3Vec(Vec_8017E550 *, const Vec_8017E550 *);
void *TObjBgmCol__ct(void *, s32, Set_8017E550 *);
s32 get_global_state__14TOKeyMachine01Fv();
void TLobby__sub_80207F30(Set_8017E550 *);
void *__nw__7TObjectFUl(u32);
extern Row_8017E550 lbl_80443690[];
extern Row_8017E550 lbl_80443780[];
extern s32 lbl_805D5B00;
extern s32 TObjBgmColCtrl__data_805D5B08;
void TObjBgmColCtrl__sub_8017E550(void);
}

extern "C" {

void set_camera_mode__10TObjPlayerFi(s32 arg0);
s32 is_not_split_screen__13TRaderMapCoreFv();
s32 get_bgm_object__13TQuestBgmCtrlFv();
M2C_UNK TObjBgmColCtrl__sub_802274B8(s32);

extern M2C_UNK lbl_804B5780[];
extern s32 lbl_805D5B00;

void set_camera_mode__10TObjPlayerFi(s32 arg0) {
    if ((get_bgm_object__13TQuestBgmCtrlFv() == 0) && (is_not_split_screen__13TRaderMapCoreFv() != 1) && (arg0 != (s32) lbl_805D5B00)) {
        lbl_805D5B00 = arg0;
        TObjBgmColCtrl__sub_802274B8(lbl_804B5780[arg0]);
    }
}
void TObjBgmColCtrl__sub_8017E550(void) {
    Set_8017E550 set;
    s32 i;
    void *p;
    lbl_805D5B00 = 4;
    TLobby__sub_80207F30(&set);
    switch (get_global_state__14TOKeyMachine01Fv()) {
    case 0:
        for (i = 0; i < 12; i++) {
            VecCopy__FP3VecPC3Vec(&set.pos, &lbl_80443690[i].pos);
            set.radius = lbl_80443690[i].radius;
            set.category = lbl_80443690[i].category;
            p = __nw__7TObjectFUl(0xA0);
            if (p != NULL) {
                TObjBgmCol__ct(p, TObjBgmColCtrl__data_805D5B08, &set);
            }
        }
        break;
    case 18:
        for (i = 0; i < 12; i++) {
            VecCopy__FP3VecPC3Vec(&set.pos, &lbl_80443780[i].pos);
            set.radius = lbl_80443780[i].radius;
            set.category = lbl_80443780[i].category;
            p = __nw__7TObjectFUl(0xA0);
            if (p != NULL) {
                TObjBgmCol__ct(p, TObjBgmColCtrl__data_805D5B08, &set);
            }
        }
        break;
    }
}

}
