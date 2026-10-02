#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase18_801482f8 { char pad[0x18]; };
struct VObj18_801482f8 : VBase18_801482f8 {
    virtual void vpad0();
    virtual void vpad1();
    virtual void vpad2();
    virtual void vpad3();
    virtual void vpad4();
    virtual void vpad5();
    virtual void vpad6();
    virtual void vpad7();
    virtual void vpad8();
    virtual void vpad9();
    virtual void vpad10();
    virtual void vpad11();
    virtual void vpad12();
    virtual void vpad13();
    virtual void vpad14();
    virtual void vpad15();
    virtual void vpad16();
    virtual void vpad17();
    virtual void vpad18();
    virtual void vpad19();
    virtual void vpad20();
    virtual void vpad21();
    virtual void vpad22();
    virtual void vpad23();
    virtual void vpad24();
    virtual void vpad25();
    virtual void vpad26();
    virtual void vpad27();
    virtual void vpad28();
    virtual void vpad29();
    virtual void vpad30();
    virtual void vpad31();
    virtual void vpad32();
    virtual void vpad33();
    virtual void vpad34();
    virtual void vpad35();
    virtual void vpad36();
    virtual void vpad37();
    virtual void vpad38();
    virtual void vpad39();
    virtual void vpad40();
    virtual void vpad41();
    virtual void vpad42();
    virtual void vpad43();
    virtual void vpad44();
    virtual void vpad45();
    virtual void vpad46();
    virtual void vpad47();
    virtual void vpad48();
    virtual void vpad49();
    virtual void vpad50();
    virtual void vpad51();
    virtual void vpad52();
    virtual void vpad53();
    virtual void vpad54();
    virtual void vpad55();
    virtual void vpad56();
    virtual void vpad57();
    virtual void vpad58();
    virtual void vpad59();
    virtual void vpad60();
    virtual void vpad61();
    virtual void vpad62();
    virtual void vpad63();
    virtual void vpad64();
    virtual void vpad65();
    virtual void vpad66();
    virtual void vpad67();
    virtual void vpad68();
    virtual void vpad69();
    virtual void vpad70();
    virtual void vpad71();
    virtual void vpad72();
    virtual void vpad73();
    virtual void vpad74();
    virtual void vpad75();
    virtual void vpad76();
    virtual void vpad77();
    virtual void vpad78();
    virtual void vpad79();
    virtual void vpad80();
    virtual void vpad81();
    virtual void vpad82();
    virtual void vpad83();
    virtual void vpad84();
    virtual void vpad85();
    virtual void vf160(int);
};

extern "C" {

void TObjPlayer__sub_80148D80(void);
void handle_message_event__17TObjNpcFemaleBaseFPvUs(void *arg0, u16 arg1);
u32 get_player_by_client_id();
M2C_UNK play_effect_default__10TObjPlayerFii(u32, s32);

extern s32 lbl_805D53A0;

void handle_message_event__17TObjNpcFemaleBaseFPvUs(void *arg0, u16 arg1) {
    u32 temp_r3;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x3A8) > 0) {
        if ((s32) arg1 == (s32) lbl_805D53A0) {
            temp_r3 = get_player_by_client_id();
            if ((temp_r3 != 0U) && ((s16) M2C_FIELD(arg0, s16 *, 0x326) != 3)) {
                M2C_FIELD(arg0, s16 *, 0x326) = 3;
                M2C_FIELD(arg0, s16 *, 0x328) = 0;
                M2C_FIELD(arg0, u16 *, 0x94) = arg1;
                M2C_FIELD(arg0, u16 *, 0x338) = arg1;
                M2C_FIELD(arg0, u32 *, 0x2A8) = temp_r3;
                if ((s32) M2C_FIELD(arg0, u16 *, 0x338) == (s32) lbl_805D53A0) {
                    play_effect_default__10TObjPlayerFii(temp_r3, -1);
                }
                ((VObj18_801482f8 *) arg0)->vf160(1);
                M2C_FIELD(arg0, s32 *, 0x2AC) = 0;
            }
        } else {
            M2C_FIELD(arg0, u16 *, 0x94) = 0xFFFFU;
            M2C_FIELD(arg0, u16 *, 0x338) = 0xFFFFU;
        }
    }
}

void TObjPlayer__sub_80148D80(void) {  }

}
