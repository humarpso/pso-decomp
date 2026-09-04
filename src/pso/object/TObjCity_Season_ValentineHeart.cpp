#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

struct VBase_8018455c_80184620 { char pad[0x18]; };
struct VObj_8018455c_80184620 : VBase_8018455c_80184620 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual s32 m8(f32, f32);
};

void *TObjCity_Season_ValentineHeart__create(void *arg0);
void *destroy__30TObjCity_Season_ValentineHeartFPvs(void *arg0, s16 arg1);
void notify_fish_on_easter_egg(u8 *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
void *TObjCity_Season_ValentineHeart__ct(void *, void *, void *);
M2C_UNK TObjFish__sub_803E46BC(s32);
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void destroy_seasonal_object__25TObjCity_Season_EasterEggFPvs(void *, int);
u8 *get_anim_frame__25TObjCity_Season_EasterEggFPv();
void queue_destruction__7TObjectFv(void *);
M2C_UNK set_global_param__8TObjFishFi(s32);

extern void *tl_05;

void *TObjCity_Season_ValentineHeart__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xB8);
    if (o != NULL) {
        o = TObjCity_Season_ValentineHeart__ct(o, tl_05, arg0);
    }
    return o;
}

extern M2C_UNK lbl_804B5DD8[];

void *destroy__30TObjCity_Season_ValentineHeartFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804B5DD8;
        if (M2C_FIELD(arg0, void **, 0xB4) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0xB4)); M2C_FIELD(arg0, M2C_UNK *, 0xB4) = 0; }
        destroy_seasonal_object__25TObjCity_Season_EasterEggFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_8050DC50[];
extern const f32 lbl_805DBC40;
extern const f32 lbl_805DBC44;

void notify_fish_on_easter_egg(u8 *arg0) {
    u8 *temp_r3;

    temp_r3 = get_anim_frame__25TObjCity_Season_EasterEggFPv();
    if ((temp_r3 != NULL) && (((VObj_8018455c_80184620*)arg0)->m8(lbl_805DBC44, lbl_805DBC40) != 0)) {
        set_global_param__8TObjFishFi(lbl_8050DC50[0]);
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
        TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
        TObjFish__sub_803E46BC(M2C_FIELD(M2C_FIELD(temp_r3, void **, 0x42C), s32 *, 0x18));
        TObjFish__sub_803E46BC(M2C_FIELD(M2C_FIELD(temp_r3, void **, 0x42C), s32 *, 0x8));
        TObjPlayer__sub_803D9B78();
    }
}

}
