#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Vec_8004F030 { f32 x, y, z; };

struct IVec_8004F030 { s32 x, y, z; };

struct D_8004F030 { u8 head[0x20]; };

extern "C" {
void VecCopy__FP3VecPC3Vec(void *, void *);
s32 get_bml_motion(s32, s32);
s32 TObjFish__sub_8001EDB0(s32, s32);
s32 get_bml_model(s32, s32);
s32 get_instance_count__9TBoss4UroFv();
M2C_UNK activate_camera_mode(int);
M2C_UNK set_scripted_camera_pose(void *, void *, void *);
M2C_UNK cache_target_and_forward__11TCameraCtrlFii(void *, int);
s32 TObjFish__sub_800E3124(void *, void *);
M2C_UNK TPhotonMagicSquare__sub_801A2640(void *, M2C_UNK);
M2C_UNK vec3_add_to(void *, void *);
f32 vector_length(void *);
M2C_UNK normalize_vector(void *);
extern IVec_8004F030 lbl_804373A4;
extern s32 lbl_805D2790;
extern const f32 lbl_805D89D8;
extern const f32 lbl_805D89E0;
extern const f32 lbl_805D89E4;
extern const f32 lbl_805D89E8;
extern "C" void TBoss4Type2__sub_8004EE74();
extern "C" void TLobby__sub_801A1FD8();
extern "C" void TObjPlayer__sub_8004ED28();
extern "C" void TObjRoomId__sub_801A1E2C();
extern "C" void TParticleCtrl__sub_801A2124();
extern "C" void apply_object_set_data();
extern "C" void classify_actor_view_detail();
extern "C" void fn_8004EF94();
extern "C" void render_shadows__7TObjectFv();
extern "C" void reset_motion_fields__10TObjPlayerFPv();
extern "C" void update_object_view_visibility();
u8 *TObjDFDemo3__ct(u8 *arg0, M2C_UNK arg1, s32 arg2, s32 arg3);
}

extern "C" {

void *lbl_804856C0[8] = {
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0xffffffff, (void *)0x0, (void *)0x0, (void *)0x0,
};
void *lbl_804856E0[3] = {
    (void *)0x60000, (void *)0x0, (void *)0x3f800000,
};
void *lbl_804856EC[13] = {
    (void *)0x0, (void *)0x0, (void *)&fn_8004EF94, (void *)&TBoss4Type2__sub_8004EE74,
    (void *)&TObjPlayer__sub_8004ED28, (void *)&render_shadows__7TObjectFv, (void *)&TLobby__sub_801A1FD8, (void *)&apply_object_set_data,
    (void *)&reset_motion_fields__10TObjPlayerFPv, (void *)&TParticleCtrl__sub_801A2124, (void *)&update_object_view_visibility, (void *)&classify_actor_view_detail,
    (void *)&TObjRoomId__sub_801A1E2C,
};
#define lbl_804856C0 ((u8 *)lbl_804856C0)
u8 *TObjDFDemo3__ct(u8 *arg0, M2C_UNK arg1, s32 arg2, s32 arg3) {
    s32 cnt;
    TPhotonMagicSquare__sub_801A2640(arg0, arg1);
    M2C_FIELD(arg0, void **, 0x18) = (void *)lbl_804856EC;
    M2C_FIELD(arg0, s32 *, 0) = lbl_805D2790;
    VecCopy__FP3VecPC3Vec(arg0 + 0xA0, (void *)arg2);
    M2C_FIELD(arg0, f32 *, 0xA4) = lbl_805D89D8;
    {
        Vec_8004F030 v = *(Vec_8004F030 *)(arg0 + 0xA0);
        v.y = lbl_805D89D8;
        if (!(vector_length(&v) <= lbl_805D89E0)) {
            normalize_vector(&v);
            v.x *= lbl_805D89E4;
            v.z *= lbl_805D89E4;
            vec3_add_to(arg0 + 0xA0, &v);
        }
    }
    M2C_FIELD(arg0, s32 *, 0xAC) = arg3;
    cnt = get_instance_count__9TBoss4UroFv();
    M2C_FIELD(arg0, s32 *, 0x94) = get_bml_model(cnt, 0x12);
    M2C_FIELD(arg0, s32 *, 0x98) = TObjFish__sub_8001EDB0(cnt, 0x12);
    M2C_FIELD(arg0, s32 *, 0x9C) = get_bml_motion(cnt, 0x45);
    M2C_FIELD(arg0, f32 *, 0xB4) = lbl_805D89E8;
    M2C_FIELD(arg0, s32 *, 0x90) = 0;
    activate_camera_mode(5);
    {
        IVec_8004F030 c = lbl_804373A4;
        c.y = M2C_FIELD(arg0, s32 *, 0xAC);
        set_scripted_camera_pose(arg0 + 0xA0, arg0 + 0xA0, &c);
    }
    cache_target_and_forward__11TCameraCtrlFii((void *)lbl_804856E0, 0x1555);
    M2C_FIELD(arg0, s32 *, 0xB8) = TObjFish__sub_800E3124((u8 *)lbl_804856C0, arg0 + 0xBC);
    M2C_FIELD(arg0, s32 *, 0xB0) = 0;
    return arg0;
}

}
