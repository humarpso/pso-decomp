#include "pso/TAdRayGC.h"

TAdRayGC::~TAdRayGC() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

typedef s32 M2C_UNK;
struct E_8029BCB4 { u8 b[0x14]; };

struct T_8029BCB4 { u8 b[0x20]; };

extern "C" {
M2C_UNK set_global_param__8TObjFishFi(void *);
M2C_UNK TWindowSubStatusDisp__sub_803DEE6C(int);
M2C_UNK get_player__20TWindowSubStatusDispFv();
M2C_UNK TWindowSubComCard__sub_803DEECC(void *, f32);
M2C_UNK TWindowSubStatusDisp__sub_803DF160(void *, void *);
extern T_8029BCB4 lbl_804DC2E0[];
extern s32 lbl_805D65C8;
extern const f32 lbl_805DDD10;
void TAdRayGC__sub_8029BCB4(M2C_UNK arg0, u8 *arg1, void *arg2, s32 arg3);
}

extern "C" {

void *__ct__8TAdRayGCFv(void *arg0);
void render__8TAdRayGCFv(void *arg0);
void run_task__8TAdRayGCFv(void *arg0);
void __ct__7TObjectFP7TObject(void *);
M2C_UNK abs__4cXyzCFv(M2C_UNK, M2C_UNK);
s32 get_state_flag__9TMainTaskFv();
M2C_UNK queue_destruction__7TObjectFv();

void TAdRayGC__sub_8029BCB4(M2C_UNK arg0, u8 *arg1, void *arg2, s32 arg3) {
    u32 i;
    E_8029BCB4 *p;
    switch (arg3) {
    case 0:
        p = (E_8029BCB4 *)arg1;
        for (i = 0; i < 2; i++) {
            TWindowSubStatusDisp__sub_803DEE6C(1);
            set_global_param__8TObjFishFi((void *) lbl_805D65C8);
            TWindowSubStatusDisp__sub_803DF160(p, arg2);
            TWindowSubComCard__sub_803DEECC(&lbl_804DC2E0[i], lbl_805DDD10);
            get_player__20TWindowSubStatusDispFv();
        }
        break;
    case 1:
        p = (E_8029BCB4 *)(arg1 + 0x14);
        for (i = 2; i < 4; i++) {
            TWindowSubStatusDisp__sub_803DEE6C(1);
            set_global_param__8TObjFishFi((void *) lbl_805D65C8);
            TWindowSubStatusDisp__sub_803DF160(p, arg2);
            TWindowSubComCard__sub_803DEECC(&lbl_804DC2E0[i], lbl_805DDD10);
            get_player__20TWindowSubStatusDispFv();
        }
        break;
    }
}

void render__8TAdRayGCFv(void *arg0) {
    s32 temp_r0;

    if (get_state_flag__9TMainTaskFv() != 1) {
        abs__4cXyzCFv(0, 8);
        abs__4cXyzCFv(1, 0xA);
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x1C);
        switch (temp_r0) {
        case 0:
            TAdRayGC__sub_8029BCB4((M2C_UNK)(arg0), (u8 *)(M2C_FIELD(arg0, s32 *, 0x20)), (void *)(-1), (s32)(0));
            break;
        case 1:
            TAdRayGC__sub_8029BCB4((M2C_UNK)(arg0), (u8 *)(M2C_FIELD(arg0, s32 *, 0x20)), (void *)(-1), (s32)(0));
            TAdRayGC__sub_8029BCB4((M2C_UNK)(arg0), (u8 *)(M2C_FIELD(arg0, s32 *, 0x20) - 0xD), (void *)(-1), (s32)(1));
            break;
        case 2:
            TAdRayGC__sub_8029BCB4((M2C_UNK)(arg0), (u8 *)(M2C_FIELD(arg0, s32 *, 0x20) - 0xD), (void *)(-1), (s32)(1));
            break;
        }
        abs__4cXyzCFv(0, 8);
        abs__4cXyzCFv(1, 6);
    }
}

void run_task__8TAdRayGCFv(void *arg0) {
    s32 temp_r0;

    M2C_FIELD(arg0, s32 *, 0x20) = (s32) (M2C_FIELD(arg0, s32 *, 0x20) + 1);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x1C);
    switch (temp_r0) {
    case 0:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x20) > 0xC) {
            M2C_FIELD(arg0, s32 *, 0x1C) = 1;
        }
        break;
    case 1:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x20) > 0x12) {
            M2C_FIELD(arg0, s32 *, 0x1C) = 2;
            return;
        }
        break;
    case 2:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x20) > 0x1F) {
            M2C_FIELD(arg0, s32 *, 0x20) = 0x20;
            queue_destruction__7TObjectFv();
        }
        break;
    }
}

extern M2C_UNK __vt__8TAdRayGC[];
extern void *lbl_805D3D30;

void *__ct__8TAdRayGCFv(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__8TAdRayGC;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D3D30;
    M2C_FIELD(arg0, u32 *, 0x1C) = 0;
    M2C_FIELD(arg0, u32 *, 0x20) = -1;
    return arg0;
}

}
