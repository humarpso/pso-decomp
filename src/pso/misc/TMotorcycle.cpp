#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase_18_26a62c { char pad[0x18]; };

struct VObj_18_26a62c : VBase_18_26a62c {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual s32 m8(f32, f32);
};

struct RecoveredGlobal_801950B8_lbl_80445E18 { char value[0x13]; };
typedef char RecoveredGlobal_801950B8_lbl_80445E18_size[sizeof(RecoveredGlobal_801950B8_lbl_80445E18) == 0x13 ? 1 : -1];

struct RecoveredGlobal_801950B8_lbl_804B8564 { M2C_UNK value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_801950B8_lbl_804B8564_size[sizeof(RecoveredGlobal_801950B8_lbl_804B8564) == 0x10 ? 1 : -1];

extern "C" {
s32 get_state_flag__9TMainTaskFv(void);
s32 set_global_param__8TObjFishFi(s32);
M2C_UNK TObjFish__sub_8001EDC4(void *, int);
M2C_UNK func_80141618__Fv();
M2C_UNK set_depth_buffer_settings_id__FUl(int);
M2C_UNK TObjChip__sub_803D8AE4(int, int, int, int);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjBoss2Tunnel__sub_803DB470();
extern u32 lbl_805D5C40;
extern u32 lbl_805D5C44;
extern const f32 lbl_805DBED0;
extern const f32 lbl_805DBED4;
void render__11TMotorcycleFv(u8 *arg0);
M2C_UNK TObjFish__sub_8001EDC4(void *, int);
u8 * TLobby__sub_80020004(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
u8 * TLanguage__sub_801E4874(s32);
M2C_UNK add_entry__11TMotorcycleFsiiff(int, void *, void *, f32, f32);
extern RecoveredGlobal_801950B8_lbl_80445E18 lbl_80445E18;
extern RecoveredGlobal_801950B8_lbl_804B8564 lbl_804B8564;
extern u32 lbl_805D5C40;
extern u32 lbl_805D5C44;
extern const f32 lbl_805DBED8;
extern const f32 lbl_805DBEDC;
void TMotorcycle__sub_801950B8(void);
}

extern "C" {

void TMotorcycle__vt12(void);
void *__dt__11TMotorcycleFv(void *arg0, s16 arg1);
void *create__11TMotorcycleFPv(void *arg0);
void free_statics__11TMotorcycleFv(void);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK TLobby__sub_803DA16C(void*);
void *TMotorcycle__ct(void *, void *, void *);
M2C_UNK TObjEneGibbles__sub_80156720(void *);
M2C_UNK TObjPlayer__sub_80154A00(M2C_UNK *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__11TObjMesBaseFv(void *, M2C_UNK);
void *__nw__7TObjectFUl(int);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(u32);

void render__11TMotorcycleFv(u8 *arg0) {
    if ((get_state_flag__9TMainTaskFv() != 1) && (((VObj_18_26a62c *)(arg0))->m8(lbl_805DBED0, lbl_805DBED4) != 0)) {
        set_depth_buffer_settings_id__FUl((int) (3));
        if ((u32) lbl_805D5C44 != 0U) {
            set_global_param__8TObjFishFi((s32) lbl_805D5C44);
            TObjPlayer__sub_803D9B2C();
            TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x38));
            TObjChip__sub_803D8AE4((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x5C)), (int) (M2C_FIELD(arg0, s32 *, 0x60)), (int) (M2C_FIELD(arg0, s32 *, 0x64)));
            TObjFish__sub_8001EDC4((void *) ((*(s32 *)&lbl_805D5C40)), (int) (M2C_FIELD(arg0, s32 *, 0xBC)));
            TObjBoss2Tunnel__sub_803DB470();
            TObjPlayer__sub_803D9B78();
        }
        func_80141618__Fv();
    }
}

void TMotorcycle__vt12(void) {  }

extern void *tl_05;

void *create__11TMotorcycleFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xC0);
    if (o != NULL) {
        o = TMotorcycle__ct(o, tl_05, arg0);
    }
    return o;
}

extern u32 lbl_805D5C40;
extern u32 lbl_805D5C44;

void free_statics__11TMotorcycleFv(void) {
    if ((u32) lbl_805D5C44 != 0U) {
        TLobby__sub_803DA16C((void*)lbl_805D5C44);
        safe_free__23TAdSinglePlyChrSelectGCFUi(lbl_805D5C44);
        lbl_805D5C44 = 0U;
    }
    if ((u32) lbl_805D5C40 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D5C40, 1);
        lbl_805D5C40 = 0U;
    }
}

extern M2C_UNK __vt__11TMotorcycle[];

void TMotorcycle__sub_801950B8(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (TLobby__sub_80020004((void *) temp_r3, 5, &lbl_804B8564.value, 0, 0, 0));
    }
    (*(u8 * *)&lbl_805D5C40) = (unsigned char *) ((void *) var_r0);
    (*(u8 * *)&lbl_805D5C44) = TLanguage__sub_801E4874((s32) &lbl_80445E18.value);
    add_entry__11TMotorcycleFsiiff((int) (0x3C), (void *) (((s32)TObjFish__sub_8001EDC4((void *)((*(u8 * *)&lbl_805D5C40)), (int)(0)))), (void *) ((*(u8 * *)&lbl_805D5C44)), (f32) (lbl_805DBED8), (f32) (lbl_805DBEDC));
    add_entry__11TMotorcycleFsiiff((int) (0x3D), (void *) (((s32)TObjFish__sub_8001EDC4((void *)((*(u8 * *)&lbl_805D5C40)), (int)(1)))), (void *) ((*(u8 * *)&lbl_805D5C44)), (f32) (lbl_805DBED8), (f32) (lbl_805DBEDC));
}

void *__dt__11TMotorcycleFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__11TMotorcycle;
        TObjPlayer__sub_80154A00((M2C_UNK *)arg0);
        TObjEneGibbles__sub_80156720(arg0);
        __dt__11TObjMesBaseFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
