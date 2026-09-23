#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase_18_373ea7 { char pad[0x18]; };

struct VObj_18_373ea7 : VBase_18_373ea7 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual M2C_UNK m13();
    virtual M2C_UNK m14();
};

extern "C" {
void set_global_param__8TObjFishFi(void *);
void TObjPlayer__sub_803D9B2C(void);
void TOHangerMachine01__sub_803D9C00(void *);
void TObjPlayer__sub_803D9214(int, void *);
extern M2C_UNK TParticleCtrl__sub_802C8464[];
void set_npc_enemy_param(void *);
void TObjPlayer__sub_801E2DE4(void *, void *, f32);
void begin_effect_render__13TParticleCtrlFv(void);
void TObjDoor__sub_803DC894(void *, void *, f32);
void end_effect_render__13TParticleCtrlFv(void);
void TObjPlayer__sub_803D9B78(void);
M2C_UNK TOTrapChainSaw__ct();
extern M2C_UNK __vt__18TOTrapChainSawEdge[];
extern s32 lbl_805D3F0C;
u8 *TOTrapChainSawEdge__ct(u8 *arg0);
}

extern "C" {

void TOTrapChainSawKey__vt15(void* p);
void TOTrapChainSawKey__vt25(void);
int TOTrapChainSaw__sub_802C91DC(void*);

u8 *TOTrapChainSawEdge__ct(u8 *arg0) {
    TOTrapChainSaw__ct();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__18TOTrapChainSawEdge;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3F0C;
    ((VObj_18_373ea7 *)(arg0))->m13();
    ((VObj_18_373ea7 *)(arg0))->m14();
    M2C_FIELD(arg0, s32 *, 0x100) = 0;
    M2C_FIELD(arg0, s32 *, 0x104) = 0;
    return arg0;
}

void TOTrapChainSawKey__vt25(void) {  }
void TOTrapChainSawKey__vt15(void* p) { if (*(int*)((char*)p + 0xf0) != 1) { TOTrapChainSaw__sub_802C91DC(p); } }

void TOTrapChainSawKey__vt23(void *arg0) {
    set_global_param__8TObjFishFi(M2C_FIELD(arg0, void **, 0x24));
    TObjPlayer__sub_803D9B2C();
    TOHangerMachine01__sub_803D9C00((void *)((char *)arg0 + 56));
    TObjPlayer__sub_803D9B2C();
    TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, void **, 0x60));
    TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, void **, 0xD4));
    set_npc_enemy_param(TParticleCtrl__sub_802C8464);
    TObjPlayer__sub_801E2DE4(M2C_FIELD(arg0, void **, 0xC8), M2C_FIELD(arg0, void **, 0xBC), M2C_FIELD(arg0, f32 *, 0xB4));
    ((void (*)(int))set_npc_enemy_param)(0);
    if (M2C_FIELD(arg0, s32 *, 0xF0) == 1) {
        begin_effect_render__13TParticleCtrlFv();
        TObjDoor__sub_803DC894(M2C_FIELD(arg0, void **, 0xFC), M2C_FIELD(arg0, void **, 0x100), M2C_FIELD(arg0, f32 *, 0x104));
        end_effect_render__13TParticleCtrlFv();
    }
    TObjPlayer__sub_803D9B78();
    TObjPlayer__sub_803D9B78();
    end_effect_render__13TParticleCtrlFv();
}

}
