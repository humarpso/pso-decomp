#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_8031F408 { char pad[0x18]; };
struct VObj_8031F408 : Base_8031F408 {
    virtual void pad0(); virtual void pad1(); virtual void pad2(); virtual void pad3();
    virtual void pad4(); virtual void pad5(); virtual void pad6(); virtual void pad7();
    virtual void pad8(); virtual void pad9(); virtual void pad10(); virtual void pad11();
    virtual void pad12(); virtual void pad13(); virtual void pad14(); virtual void pad15();
    virtual void pad16(); virtual void pad17(); virtual void pad18(); virtual void pad19();
    virtual void pad20(); virtual void pad21(); virtual void pad22(); virtual void pad23();
    virtual void pad24(); virtual void pad25(); virtual void pad26(); virtual void pad27();
    virtual void pad28(); virtual void pad29(); virtual void pad30(); virtual void pad31();
    virtual void pad32(); virtual void pad33(); virtual void pad34(); virtual void pad35();
    virtual void pad36(); virtual void pad37(); virtual void pad38(); virtual void pad39();
    virtual void pad40(); virtual void pad41(); virtual void pad42(); virtual void pad43();
    virtual void pad44(); virtual void pad45(); virtual void pad46(); virtual void pad47();
    virtual void pad48(); virtual void pad49(); virtual void pad50(); virtual void pad51();
    virtual void pad52(); virtual void pad53(); virtual void pad54(); virtual void pad55();
    virtual void pad56(); virtual void pad57(); virtual void pad58(); virtual void pad59();
    virtual void pad60(); virtual void pad61(); virtual void pad62(); virtual void pad63();
    virtual void pad64(); virtual void pad65(); virtual void pad66(); virtual void pad67();
    virtual void pad68(); virtual void pad69(); virtual void pad70(); virtual void pad71();
    virtual void pad72(); virtual void pad73(); virtual void pad74(); virtual void pad75();
    virtual void pad76(); virtual void pad77(); virtual void pad78(); virtual void pad79();
    virtual void pad80(); virtual void pad81(); virtual void pad82(); virtual void pad83();
    virtual void pad84(); virtual void pad85(); virtual void pad86(); virtual void pad87();
    virtual void pad88(); virtual void pad89(); virtual void pad90(); virtual void pad91();
    virtual void pad92(); virtual void pad93(); virtual void m94();
};

extern "C" {

void TObjEneRecon__sub_8031F408(void *arg0, s32 arg1);
M2C_UNK advance_animation_playback();
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
M2C_UNK transition_enemy_state(void *, M2C_UNK);
s32 get_flag_b4__21TObjEneMe3ShinowaRealFPv();

void TObjEneRecon__sub_8031F408(void *arg0, s32 arg1) {
    s32 temp_r4;

    switch (arg1) {
    case 4:
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x40C) & 0xFFFFFFFE;
        M2C_FIELD(arg0, s32 *, 0x40C) = temp_r4;
        M2C_FIELD(arg0, s16 *, 0xB8) = 3;
        ((VObj_8031F408 *)arg0)->m94();
        set_field_378__9TObjEneDDFPvi(arg0, 5);
        break;
    case 3:
        if (get_flag_b4__21TObjEneMe3ShinowaRealFPv() != 0) {
            transition_enemy_state(arg0, 2);
        }
        break;
    case 5:
        break;
    case 0:
        advance_animation_playback();
        break;
    }
}

}
