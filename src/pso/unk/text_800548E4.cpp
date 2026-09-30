#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct S_80054938 {
    u8 pad0[0x18];
    void *vt;
    u8 pad1c[0x378 - 0x1c];
    u8 f378[0x1c];
    s32 f394;
    u8 pad398[0x3f8 - 0x398];
    void *parts[13];
    void *fx[3];
    u8 pad438[0x480 - 0x438];
    void *f480;
};

extern "C" {
s32 TBoss3Volopt__sub_8022675C(s32, u32, s16, s32);
extern const f32 lbl_805D8B18;
void fn_800548E4(u8 *arg0);
void fn_8004AA04(void *);
void request_destroy__11TBoss4Type2FUi(void *);
void init_state_1__8TObjFishFPv(void *);
void __dt__9TObjEnemyFv(void *, s32);
void TObjEneGibbles__sub_80156720(void *);
void __dl__7TObjectFPv(void *);
extern u8 lbl_80486224[];
S_80054938 *fn_80054938(S_80054938 *o, s16 flag);
}

extern "C" {

void fn_800548E4(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFFFDFF);
    M2C_FIELD(arg0, s32 *, 0x3D4) = 1;
    M2C_FIELD(arg0, f32 *, 0x3DC) = (f32) lbl_805D8B18;
    TBoss3Volopt__sub_8022675C(0x4003A822, (u32) (arg0 + 0x38), 0, 1);
}
S_80054938 *fn_80054938(S_80054938 *o, s16 flag) {
    s32 i;
    s32 j;
    if (o != 0) {
        o->vt = lbl_80486224;
        fn_8004AA04(o->f378);
        for (i = 0; i < 13; i++) {
            if (o->parts[i] != 0) {
                request_destroy__11TBoss4Type2FUi(o->parts[i]);
                o->parts[i] = 0;
            }
        }
        for (j = 0; j < 3; j++) {
            init_state_1__8TObjFishFPv(o->fx[j]);
            o->fx[j] = 0;
        }
        init_state_1__8TObjFishFPv(o->f480);
        o->f480 = 0;
        TObjEneGibbles__sub_80156720(o);
        o->f394 = 0;
        __dt__9TObjEnemyFv(o, 0);
        if (flag > 0) {
            __dl__7TObjectFPv(o);
        }
    }
    return o;
}

}
