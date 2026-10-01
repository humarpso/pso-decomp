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

struct VBase_14_1eb8da { char pad[0x14]; };

struct VObj_14_1eb8da : VBase_14_1eb8da {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual M2C_UNK m6(s32, s32);
    virtual M2C_UNK m7();
};

extern "C" {
s32 check_demo_mode__10TObjPlayerFv();
M2C_UNK TOVS2Wall01__sub_8017B9AC(void *);
void release__11TOVS2Wall01FPv(void* p);
int interact_player_neg1__11TOVS2Wall01FPv(void* p);
void run_task__11TOVS2Wall01Fv(u8 *arg0);
s32 updateFromCamera__15RenderFadeStateFPCf(void *, void *);
M2C_UNK TObjPlayer__sub_800D7BB0(void *);
s32 is_not_split_screen__13TRaderMapCoreFv();
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK set_global_param__8TObjFishFi(int);
M2C_UNK TObjBoss2Tunnel__sub_803DB470(int);
extern s32 lbl_805D5660;
extern s32 lbl_805D5664;
extern s32 lbl_805D5668;
extern s32 lbl_805D7780;
extern s32 lbl_805D7784;
extern s32 some_id_805c6f74;
void render__11TOVS2Wall01Fv(u8 *arg0);
}

extern "C" {

void *__dt__11TOVS2Wall01Fv(void *arg0, s16 arg1);
void *create__11TOVS2Wall01FPv(void *arg0);
int interact_player_neg1__11TOVS2Wall01FPv(void* p);
void release__11TOVS2Wall01FPv(void* p);
void *TOVS2Wall01__ct(void *, void *);
void TObjEneGibbles__sub_80156720(void *);
void TObjPlayer__sub_800D7C58(void *, int);
void TObjPlayer__sub_80154A00(void *);
int TObjPlayer__sub_801B4A18(void*, int);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void destroy_motion_object__10TObjPlayerFPvs(void *, int);
int queue_destruction__7TObjectFv(void*);
int set_flag8__6TLobbyFPv(void*);

void release__11TOVS2Wall01FPv(void* p) { set_flag8__6TLobbyFPv(p); queue_destruction__7TObjectFv(p); }
int interact_player_neg1__11TOVS2Wall01FPv(void* p) { return TObjPlayer__sub_801B4A18(p, -1); }

void run_task__11TOVS2Wall01Fv(u8 *arg0) {
    s16 temp_r0;
    if (check_demo_mode__10TObjPlayerFv() == 1) {
        TOVS2Wall01__sub_8017B9AC((void *) (arg0));
        return;
    }
    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    switch (temp_r0) {
    default:
        M2C_FIELD(arg0, s16 *, 0x326) = 0;
    case 0:
        interact_player_neg1__11TOVS2Wall01FPv((void*)((void *) (arg0)));
        return;
    case 1:
        release__11TOVS2Wall01FPv((void*)((void *) (arg0)));
        return;
    }
}

void render__11TOVS2Wall01Fv(u8 *arg0) {
    s32 var_r31;
    TObjPlayer__sub_800D7BB0((void *) (arg0 + 0x340));
    M2C_FIELD(arg0, s32 *, 0x35C) = ((VObj_18_26a62c *)(arg0))->m8(M2C_FIELD(arg0, f32 *, 0x334), M2C_FIELD(arg0, f32 *, 0x338));
    if ((s32) M2C_FIELD(arg0, s32 *, 0x35C) == 1) {
        if (is_not_split_screen__13TRaderMapCoreFv() == 1) {
            var_r31 = 0;
        } else {
            var_r31 = updateFromCamera__15RenderFadeStateFPCf((void *) (arg0 + 0x340), (void *) (arg0 + 0x38));
        }
        if (var_r31 != 0) {
            lbl_805D5660 = some_id_805c6f74;
            lbl_805D5664 = lbl_805D7784;
            lbl_805D5668 = lbl_805D7780;
            ((VObj_14_1eb8da *)((u8 *)(arg0) + (832)))->m6(lbl_805D7784, some_id_805c6f74);
        }
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x38));
        rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
        set_global_param__8TObjFishFi((int) (M2C_FIELD(arg0, s32 *, 0x24)));
        TObjBoss2Tunnel__sub_803DB470((int) (M2C_FIELD(arg0, s32 *, 0x34)));
        TObjPlayer__sub_803D9B78();
        if (var_r31 != 0) {
            ((VObj_14_1eb8da *)((u8 *)(arg0) + (832)))->m7();
            lbl_805D7784 = lbl_805D5664;
            lbl_805D7780 = lbl_805D5668;
            some_id_805c6f74 = lbl_805D5660;
        }
    }
}

void *create__11TOVS2Wall01FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x360);
    if (o != NULL) {
        o = TOVS2Wall01__ct(o, arg0);
    }
    return o;
}

extern M2C_UNK __vt__11TOVS2Wall01[];

void *__dt__11TOVS2Wall01Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__11TOVS2Wall01;
        TObjPlayer__sub_80154A00(arg0);
        TObjEneGibbles__sub_80156720(arg0);
        TObjPlayer__sub_800D7C58((s8 *)arg0 + 0x340, -1);
        destroy_motion_object__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
