#include "types.h"
#include "pso/player/TObjPlayer.h"

struct Base_801BE210_801BE1C0 { char pad[0x18]; };
struct VObj_801BE210_801BE1C0 : Base_801BE210_801BE1C0 {
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
    virtual void m20();
    virtual void m21();
    virtual void m22();
    virtual void m23();
    virtual void m24();
    virtual void m25();
    virtual void m26();
    virtual void m27();
    virtual void m28();
    virtual void m29();
    virtual void m30();
    virtual void m31();
    virtual void m32();
    virtual void m33();
    virtual void m34();
    virtual void m35();
    virtual void m36();
    virtual void m37();
    virtual void m38();
    virtual void m39();
    virtual void m40();
    virtual void m41();
    virtual void m42();
    virtual void m43();
    virtual void m44();
    virtual void m45();
    virtual void m46();
    virtual void m47();
    virtual void m48();
    virtual void m49();
    virtual void m50();
    virtual void m51();
    virtual void m52();
    virtual void m53();
    virtual void m54();
    virtual void m55();
    virtual void m56();
    virtual void m57();
    virtual void m58();
    virtual void m59();
    virtual void m60();
    virtual void m61();
    virtual void m62();
    virtual void m63(s32 a, s32 b);
};

extern "C" {

void TObjPlayer__sub_801BE2C0(void* p, s32 v);
s32 TObjPlayer__sub_801BE2C8(void* p);
int TObjPlayer__sub_801BE2D0(void* p);
void vfunc_68__10TObjPlayerFl(void *arg0, s32 arg1);
int vfunc_76__10TObjPlayerFv(void* p);
int vfunc_77__10TObjPlayerFv(void* p);
int TObjPlayer__vt77(void);
s32 destroy_char_data__10TObjPlayerFis(s32 arg0, s16 arg1);
s32 is_quest_active();
int subtract_photon_blast_charge(void*);
int add_photon_blast_chain_charge(void*);
s32 __dl__FPv(s32);
s32 __dt__12TPlyCharDataFv(s32, s32);
int set_flags__10TObjPlayerFUl(void*, int);

s32 destroy_char_data__10TObjPlayerFis(s32 arg0, s16 arg1) {
    if (arg0 != 0) {
        __dt__12TPlyCharDataFv(arg0 + 0xC, -1);
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

void TObjPlayer::vfunc_68(s32 arg1) {
    ((VObj_801BE210_801BE1C0*)this)->m63(0x3A, arg1);
}

void TObjPlayer::vfunc_76() { subtract_photon_blast_charge((char*)this + 0x4ac); }

void TObjPlayer::vfunc_77() { add_photon_blast_chain_charge((char*)this + 0x4ac); }

int TObjPlayer__vt77(void) { return 0; }
u8 TObjPlayer::check_camera_mode() {
    return (u8) (is_quest_active() == 1);
}
void TObjPlayer__sub_801BE2C0(void* p, s32 v) { *(s32*)((char*)p + 0x370) = v; }
s32 TObjPlayer__sub_801BE2C8(void* p) { return *(s32*)((char*)p + 0x370); }
int TObjPlayer__sub_801BE2D0(void* p) { return (*(u32*)((char*)p + 0x890) >> 3) & 0x1; }
int TObjPlayer::is_ready() { return (*(u32*)((char*)this + 0x890) >> 4) & 0x1; }
int TObjPlayer::check_stat_flag_41c() { return set_flags__10TObjPlayerFUl((char*)this + 0x41c, 32); }
int TObjPlayer::check_flag_at_41c() { return set_flags__10TObjPlayerFUl((char*)this + 0x41c, 4); }
int TObjPlayer::set_flag_41c_bit1() { return set_flags__10TObjPlayerFUl((char*)this + 0x41c, 2); }
int TObjPlayer::clamp_stat_41c() { return set_flags__10TObjPlayerFUl((char*)this + 0x41c, 8); }

}
