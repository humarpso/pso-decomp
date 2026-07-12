#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render_lobby_door__10TObjPlayerFPv(u8 *arg0);
s32 TLobby__sub_801819CC(M2C_UNK);
M2C_UNK TLobby__sub_801819E4(M2C_UNK);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjDoor__sub_803DC894(M2C_UNK, s32, f32);
M2C_UNK TObjFish__sub_803DA798(s32);
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9624(M2C_UNK, f32, f32, f32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();

extern s32 lbl_805D5B2C;
extern const f32 lbl_805DBBE8;
extern const f32 lbl_805DBBF4;

struct Base_80181ff4 { char pad[0x18]; };
struct VObj_80181ff4 : Base_80181ff4 {
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
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17();
    virtual void m18();
    virtual void m19();
    virtual s32 m20();
};

void render_lobby_door__10TObjPlayerFPv(u8 *arg0) {
    if (((VObj_80181ff4 *)arg0)->m20() != 0) {
        TObjFish__sub_803DA798(lbl_805D5B2C);
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
        TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
        TObjPlayer__sub_803D9624(0, lbl_805DBBE8, lbl_805DBBE8, lbl_805DBBF4);
        TObjDoor__sub_803DC894(TLobby__sub_801819E4(0x14), TLobby__sub_801819CC(0xB), M2C_FIELD(arg0, f32 *, 0xB4));
        TObjPlayer__sub_803D9B78();
    }
}

}
