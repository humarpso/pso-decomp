#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase18_8035346c { char pad[0x18]; };
struct VObj18_8035346c : VBase18_8035346c {
    virtual M2C_UNK m0();
    virtual M2C_UNK m1();
    virtual M2C_UNK m2();
    virtual M2C_UNK m3();
    virtual M2C_UNK m4();
    virtual M2C_UNK m5();
    virtual M2C_UNK m6();
    virtual M2C_UNK m7();
    virtual M2C_UNK m8(f32, f32);
};

extern "C" {

void *create__16TObjKabochaLobbyFPv(void *arg0);
void render__16TObjKabochaLobbyFv(u8 *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TOMonitorMachine01__sub_803D8B5C(int, f32, f32, f32);
M2C_UNK TObjBoss2Tunnel__sub_803DB470(int);
void *TObjKabochaLobby__ct(void *, void *, void *);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
void *__nw__7TObjectFUl(int);
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK set_global_param__8TObjFishFi(int);

extern u32 TObjKabochaLobby__data_805D6EEC;
extern const f32 TObjKabochaLobby__data_805DFF38;

void render__16TObjKabochaLobbyFv(u8 *arg0) {
    f32 temp_f1;

    if (((s32) M2C_FIELD(arg0, s32 *, 0xC8) != 0) && ((u32) TObjKabochaLobby__data_805D6EEC != 0U) && (((VObj18_8035346c *) arg0)->m8(M2C_FIELD(arg0, f32 *, 0xC0), M2C_FIELD(arg0, f32 *, 0xC4)) != 0)) {
        begin_effect_render__13TParticleCtrlFv();
        set_global_param__8TObjFishFi((int) (M2C_FIELD(arg0, s32 *, 0x24)));
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x38));
        rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
        if ((s32) M2C_FIELD(arg0, s32 *, 0xC8) != 3) {
            temp_f1 = M2C_FIELD(arg0, f32 *, 0xCC);
            TOMonitorMachine01__sub_803D8B5C((int) (0), (f32) (temp_f1), (f32) (TObjKabochaLobby__data_805DFF38), (f32) (temp_f1));
        }
        TObjBoss2Tunnel__sub_803DB470((int) (M2C_FIELD(arg0, s32 *, 0x34)));
        TObjPlayer__sub_803D9B78();
        end_effect_render__13TParticleCtrlFv();
    }
}

extern void *tl_05;

void *create__16TObjKabochaLobbyFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xD0);
    if (o != NULL) {
        o = TObjKabochaLobby__ct(o, tl_05, arg0);
    }
    return o;
}

}
