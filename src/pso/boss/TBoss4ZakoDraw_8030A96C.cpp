#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_8030ABF4_TCameraCtrl__data_804FF634 {
    M2C_UNK value;
    u8 remaining[0x44];
};

struct RecoveredGlobal_8030ABF4_lbl_80541E58 {
    M2C_UNK value;
    u8 remaining[0xF04];
};

struct E_8030AD08 { s32 a; u8 pad[0x780]; };

struct Ent_8030AB48 { u8 pad[0xc]; s32 f0c; s32 f10; };

struct Tbl_8030AB48 { s32 count; Ent_8030AB48 ents[96]; u8 pad[0x784 - 4 - 96 * 0x14]; };

struct Ent_8030AC7C { u8 pad[0xc]; s32 f0c; s32 f10; };

struct Tbl_8030AC7C { s32 count; Ent_8030AC7C ents[96]; u8 pad[0x784 - 4 - 96 * 0x14]; };

extern "C" {
s32 is_split_screen();
u8 *TObjFish__sub_8001EDC4(s32, s32);
s32 TCameraCtrl__sub_801E317C(int, int);
s32 TObjPlayer__sub_8030A9B0();
extern RecoveredGlobal_8030ABF4_TCameraCtrl__data_804FF634 TCameraCtrl__data_804FF634;
extern RecoveredGlobal_8030ABF4_lbl_80541E58 lbl_80541E58;
extern s32 lbl_805D6A70;
extern s32 lbl_805D6A74;
void TCameraCtrl__sub_8030ABF4(void);
extern RecoveredGlobal_8030ABF4_lbl_80541E58 lbl_80541E58;
extern s32 lbl_805D6A70;
void TBoss4DarkFalz__sub_8030AD08(void);
u8 *TObjFish__sub_8001EDC4(s32, s32);
s32 get_instance_count__9TBoss4UroFv(void);
void sync_player_globals__10TObjPlayerFv(void);
void TObjPlayer__sub_80052390(f32);
void TObjPlayer__sub_803D9214(int, int);
void TObjContainerIdo__sub_803D96A8(int, int);
void TObjPlayer__sub_803D9B2C(void);
void TObjPlayer__sub_803D9B78(void);
void TOHangerMachine01__sub_803D9C00(void *);
void set_global_param__8TObjFishFi(int);
void TObjFish__sub_803E46BC(int);
extern RecoveredGlobal_8030ABF4_lbl_80541E58 lbl_80541E58;
extern s32 lbl_805D6A68;
extern s32 lbl_805D6A70;
extern const f32 lbl_805DF148;
void TObjPlayer__sub_8030AB48(void);
void VecCopy__FP3VecPC3Vec(void *, void *);
extern RecoveredGlobal_8030ABF4_lbl_80541E58 lbl_80541E58;
extern s32 lbl_805D6A70;
s32 TBoss4Zako__sub_8030AC7C(void *v, s32 a, s32 b);
}

extern "C" {

void *__ct__14TBoss4ZakoDrawFv(void *arg0);
void __ct__7TObjectFP7TObject(void *);

extern M2C_UNK __vt__14TBoss4ZakoDraw[];
extern void *lbl_805D40D0;

void *__ct__14TBoss4ZakoDrawFv(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__14TBoss4ZakoDraw;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D40D0;
    return arg0;
}
typedef char RecoveredGlobal_8030ABF4_TCameraCtrl__data_804FF634_size[sizeof(RecoveredGlobal_8030ABF4_TCameraCtrl__data_804FF634) == 0x48 ? 1 : -1];
typedef char RecoveredGlobal_8030ABF4_lbl_80541E58_size[sizeof(RecoveredGlobal_8030ABF4_lbl_80541E58) == 0xF08 ? 1 : -1];

void TObjPlayer__sub_8030AB48(void) {
    Tbl_8030AB48 *t = &((Tbl_8030AB48 *)&lbl_80541E58)[lbl_805D6A70];
    Ent_8030AB48 *p = t->ents;
    s32 r31;
    s32 i;
    r31 = ((s32)TObjFish__sub_8001EDC4((s32)(get_instance_count__9TBoss4UroFv()), (s32)(8)));
    TObjPlayer__sub_80052390(lbl_805DF148);
    set_global_param__8TObjFishFi(lbl_805D6A68);
    for (i = 0; i < t->count; i++, p++) {
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00(p);
        TObjPlayer__sub_803D9214(0, p->f10);
        TObjContainerIdo__sub_803D96A8(0, p->f0c);
        TObjFish__sub_803E46BC(r31);
        TObjPlayer__sub_803D9B78();
    }
    sync_player_globals__10TObjPlayerFv();
}

void TCameraCtrl__sub_8030ABF4(void) {
    M2C_UNK *var_r3;
    u8 *var_r31;
    u8 *var_r4;
    var_r3 = (M2C_UNK *)(&lbl_80541E58.value);
    var_r3 = (M2C_UNK *)(&lbl_80541E58.value);
    if ((s32) M2C_FIELD(((u8 *)(&lbl_80541E58.value) + (lbl_805D6A70 * 0x784)), s32 *, 0) != 0) {
        var_r3 = (M2C_UNK *)(&TCameraCtrl__data_804FF634.value);
        var_r3 = (M2C_UNK *)(&TCameraCtrl__data_804FF634.value);
        var_r31 = (u8 *)(&TCameraCtrl__data_804FF634.value) + 0x30;
        if (is_split_screen() == 0) {
            var_r4 = (u8 *)(var_r31);
            var_r3 = (M2C_UNK *)((u8 *)((M2C_UNK *)2));
            TCameraCtrl__sub_801E317C((int) (2), (int) (var_r4));
        }
        var_r4 = (u8 *)((void *)8);
        var_r3 = (M2C_UNK *)(M2C_FIELD(TObjFish__sub_8001EDC4(get_instance_count__9TBoss4UroFv(), 8), M2C_UNK **, 0x2C));
        M2C_FIELD(var_r3, s32 *, 0x18) = (s32) (lbl_805D6A74 << 0xC);
        TObjPlayer__sub_8030AB48();
        TObjPlayer__sub_8030A9B0();
    }
}

s32 TBoss4Zako__sub_8030AC7C(void *v, s32 a, s32 b) {
    Tbl_8030AC7C *t = &((Tbl_8030AC7C *)&lbl_80541E58)[lbl_805D6A70 ^ 1];
    s32 n = t->count;
    Ent_8030AC7C *e = &t->ents[n];
    if (n >= 0x60) {
        return 0;
    }
    VecCopy__FP3VecPC3Vec(e, v);
    e->f0c = a;
    e->f10 = b;
    t->count += 1;
    return 1;
}

void TBoss4DarkFalz__sub_8030AD08(void) {
    s32 i;
    for (i = 0; i < 2; i++) {
        ((E_8030AD08 *)&lbl_80541E58)[i].a = 0;
    }
    lbl_805D6A70 = 0;
}

}
