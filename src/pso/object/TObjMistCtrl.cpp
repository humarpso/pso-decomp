#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__dt__12TObjMistCtrlFv(void *arg0, s16 arg1);
void render__16TPlayerFootStampFv(u8 *arg0);
int run_task__12TObjMistCtrlFv(void* p);
f32 TObjPlayer__sub_80141CF8(void *, void *);
M2C_UNK TParticleCtrl__sub_803DA7A8(int);
void __dl__7TObjectFPv(void *);
void destroy_particle__13TParticleCtrlFPvs(void *, int);
M2C_UNK fn_80141A30();
int fn_802AF64C(void*);
M2C_UNK fn_803E29B0(void *, int, int);
void queue_destruction__7TObjectFv(void *);
M2C_UNK reset_transform_state__10TObjPlayerFv();
M2C_UNK set_depth_buffer_settings_1__Fv();
M2C_UNK set_global_param__8TObjFishFi(void *);

int run_task__12TObjMistCtrlFv(void* p) { return fn_802AF64C(p); }

extern M2C_UNK __vt__12TObjMistCtrl[];

void *__dt__12TObjMistCtrlFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TObjMistCtrl;
        if (M2C_FIELD(arg0, void **, 0x90) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x90)); M2C_FIELD(arg0, M2C_UNK *, 0x90) = 0; }
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern s32 lbl_805D4DF0;
extern s32 lbl_805D5660;
extern s32 lbl_805D6710;
extern s32 some_id_805c6f74;
extern const f32 lbl_805DE1F8;

void render__16TPlayerFootStampFv(u8 *arg0) {
    if (TObjPlayer__sub_80141CF8((void *) (arg0 + 0x7C), (void *) (lbl_805D4DF0 + 0x178)) < lbl_805DE1F8) {
        lbl_805D5660 = some_id_805c6f74;
        reset_transform_state__10TObjPlayerFv();
        set_global_param__8TObjFishFi((void *) (lbl_805D6710));
        TParticleCtrl__sub_803DA7A8((int) (M2C_FIELD(arg0, s16 *, 0xBE)));
        set_depth_buffer_settings_1__Fv();
        fn_803E29B0((void *) (arg0 + 0x1C), (int) (4), (int) (1));
        fn_80141A30();
        some_id_805c6f74 = lbl_805D5660;
    }
}

}
