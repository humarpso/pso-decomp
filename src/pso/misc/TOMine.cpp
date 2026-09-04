#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base18_80170f64_80170EEC { char pad[0x18]; };
struct VObj_80170f64_80170EEC : Base18_80170f64_80170EEC {
    virtual void m0();  virtual void m1();  virtual void m2();  virtual void m3();
    virtual void m4();  virtual void m5();  virtual void m6();  virtual void m7();
    virtual void m8();  virtual void m9();  virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23();
    virtual void m24(); virtual void m25(); virtual void m26(); virtual void m27();
    virtual void m28(); virtual void m29(); virtual void m30(); virtual void m31();
    virtual void m32(); virtual void m33(); virtual void m34(); virtual void m35();
    virtual void m36(); virtual void m37(); virtual void m38(); virtual void m39();
    virtual void m40(); virtual void m41(); virtual void m42(); virtual void m43();
    virtual void m44(); virtual void m45(); virtual void m46(); virtual void m47();
    virtual void m48(); virtual void m49(); virtual void m50(); virtual void m51();
    virtual void m52(); virtual void m53(); virtual void m54(); virtual void m55();
    virtual void m56(); virtual void m57(); virtual void m58(); virtual void m59();
    virtual void m60(); virtual void m61(); virtual void m62(); virtual void m63();
    virtual void m64(); virtual void m65(); virtual void m66(); virtual void m67();
    virtual void m68(); virtual void m69(); virtual void m70(); virtual void m71();
    virtual void m72(); virtual void m73(); virtual void m74(); virtual void m75();
    virtual void m76(); virtual void m77();
};

extern "C" {

int TOMine__sub_80170F0C(void *);
void *__dt__6TOMineFv(void *arg0, s16 arg1);
void free_instance__6TOMineFv(void);
void free_parts__6TOMineFPv(void* p);
void free_sub_objects__6TOMineFPv(void* p);
int get_player_state__6TOMineFPv(void* p);
void run_task__6TOMineFPv(u8 *arg0);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK TOMineTrap__sub_80170AC8(void *);
M2C_UNK TOMineTrap__sub_80170BEC(void *);
M2C_UNK TOMineTrap__sub_80170CD4(void *);
M2C_UNK TOMineTrap__sub_80170CF4(void *);
M2C_UNK TOMineTrap__sub_80170DD8(void *);
int TObjBoss2Tunnel__sub_803DB470(void*);
M2C_UNK TObjPlayer__sub_801B4A18(void *, int);
int TObjPlayer__sub_801B4AC8(void*);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
void __dl__7TObjectFPv(void *);
s32 check_demo_mode__10TObjPlayerFv();
void destroy_motion_object__10TObjPlayerFPvs(void *, int);
int set_global_param__8TObjFishFi(void*);

int get_player_state__6TOMineFPv(void* p) { return TObjPlayer__sub_801B4AC8(p); }

int TOMine__sub_80170F0C(void *) { return 0; }

void run_task__6TOMineFPv(u8 *arg0) {
    s16 temp_r0;
    s32 temp_r0_2;
    s32 temp_r3;

    if (check_demo_mode__10TObjPlayerFv() != 1) {
        ((VObj_80170f64_80170EEC *) arg0)->m77();
        TOMineTrap__sub_80170CF4((void *) (arg0));
        temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
        switch (temp_r0) {
        case 2:
        case 0:
            TOMine__sub_80170F0C((void *)((void *) (arg0)));
            VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x2FC), (void *) (arg0 + 0x334));
            VecCopy__FP3VecPC3Vec((void *) (M2C_FIELD(arg0, s32 *, 0xA4) + 0x1C), (void *) (arg0 + 0x334));
            return;
        case 3:
            temp_r3 = M2C_FIELD(arg0, s32 *, 0x8C);
            M2C_FIELD(arg0, s32 *, 0x8C) = (s32) (temp_r3 - 1);
            if (temp_r3 < 0) {
                M2C_FIELD(arg0, s16 *, 0x326) = 4;
            }
            temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x344);
            switch (temp_r0_2) {
            default:
                TOMineTrap__sub_80170CD4((void *) (arg0));
                break;
            case 1:
                TOMineTrap__sub_80170BEC((void *) (arg0));
                break;
            case 2:
                TOMineTrap__sub_80170AC8((void *) (arg0));
                break;
            }
            TObjPlayer__sub_801B4A18((void *) (arg0), (int) (-1));
            return;
        case 4:
            TOMineTrap__sub_80170DD8((void *) (arg0));
            break;
        }
    }
}

void free_sub_objects__6TOMineFPv(void* p) { set_global_param__8TObjFishFi(*(void**)((char*)p + 0x378)); TObjBoss2Tunnel__sub_803DB470(*(void**)((char*)p + 0x374)); }

void free_parts__6TOMineFPv(void* p) { set_global_param__8TObjFishFi(*(void**)((char*)p + 0x24)); TObjBoss2Tunnel__sub_803DB470(*(void**)((char*)p + 0x34)); }

extern u32 lbl_805D5A50;

void free_instance__6TOMineFv(void) {
    if ((u32) lbl_805D5A50 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D5A50, 1);
        lbl_805D5A50 = 0U;
    }
}

extern M2C_UNK __vt__6TOMine[];

void *__dt__6TOMineFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__6TOMine;
        destroy_motion_object__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
