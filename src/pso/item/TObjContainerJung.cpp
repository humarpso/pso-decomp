#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase { char pad[0x18]; };

struct VObj : VBase {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3(); virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7(); virtual void m8(); virtual void m9();
    virtual void m10(); virtual void m11(); virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15(); virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23(); virtual void m24(); virtual void m25(); virtual void m26(); virtual void m27(); virtual void m28(); virtual void m29();
    virtual void m30(); virtual void m31(); virtual void m32(); virtual void m33(); virtual void m34(); virtual void m35(); virtual void m36(); virtual void m37(); virtual void m38(); virtual void m39();
    virtual void m40(); virtual void m41(); virtual void m42(); virtual void m43(); virtual void m44(); virtual void m45(); virtual void m46(); virtual void m47(); virtual void m48(); virtual void m49();
    virtual void m50(); virtual void m51(); virtual void m52(); virtual void m53(); virtual void m54(); virtual void m55(); virtual void m56(); virtual void m57(); virtual void m58(); virtual void m59();
    virtual void m60(); virtual void m61(); virtual void m62(); virtual void m63(); virtual void m64(); virtual void m65(); virtual void m66(); virtual void m67(); virtual void m68(); virtual void m69();
    virtual void m70(); virtual void m71(); virtual void m72(); virtual void m73(); virtual void m74(); virtual void m75(); virtual void m76(); virtual void m77();
};

extern "C" {
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK TLobby__sub_8010567C(void *, void *, int);
M2C_UNK clear_player_status_flag__10TObjPlayerFPviUi(void *, int, int);
M2C_UNK set_flag8__6TLobbyFPv(void *);
void TObjContainerJung__vt4(u8 *arg0, s16 *arg1, s32 arg2);
u8 * TObjFish__sub_8001EDC4(void *, int);
extern s32 TObjContainerJung__data_805D5BA0;
u8 *TObjContainerJung__sub_8018D3C0(s32 arg0);
}

extern "C" {

s32 TObjContainerJung__sub_8018D3B8(void);
void TObjContainerJung__vt78(void *arg0);
void *__dt__17TObjContainerJungFv(void *arg0, s16 arg1);
void *create__17TObjContainerJungFPv(void *arg0);
void release__17TObjContainerJungFv(void);
M2C_UNK TLobby__sub_8001FE7C(s32, M2C_UNK);
void *TObjContainerJung__ct(void *, void *, void *);
M2C_UNK TObjEneGibbles__sub_80156720(void *);
M2C_UNK TObjPlayer__sub_80154A00(void *);
M2C_UNK TObjPlayer__sub_801B4A18(void *, M2C_UNK);
M2C_UNK __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
M2C_UNK destroy_container_object__10TObjPlayerFPvs(void *, M2C_UNK);

extern s32 TObjContainerJung__data_805D5BA4;

s32 TObjContainerJung__sub_8018D3B8(void) {
    return TObjContainerJung__data_805D5BA4;
}

extern void *tl_05;

u8 *TObjContainerJung__sub_8018D3C0(s32 arg0) {
    if ((void *) (*(u8 * *)&TObjContainerJung__data_805D5BA0) != NULL) {
        return TObjFish__sub_8001EDC4((*(u8 * *)&TObjContainerJung__data_805D5BA0), arg0);
    }
    return NULL;
}

void *create__17TObjContainerJungFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x368);
    if (o != NULL) {
        o = TObjContainerJung__ct(o, tl_05, arg0);
    }
    return o;
}

extern s32 TObjContainerJung__data_805D5BA0;
extern s32 TObjContainerJung__data_805D5BA4;

void release__17TObjContainerJungFv(void) {
    TLobby__sub_8001FE7C(TObjContainerJung__data_805D5BA0, 1);
    TObjContainerJung__data_805D5BA0 = 0;
    TObjContainerJung__data_805D5BA4 = 0;
}

void TObjContainerJung__vt4(u8 *arg0, s16 *arg1, s32 arg2) {
    if (arg2 != 0) {
        if ((s16) *arg1 == 1) {
            ((VObj*)arg0)->m77();
            TLobby__sub_8010567C((void *) (arg0), (void *) (arg0 + 0x38), (int) (1));
            clear_player_status_flag__10TObjPlayerFPviUi((void *) (arg0), (int) (0), (int) (1));
            set_flag8__6TLobbyFPv((void *) (arg0));
            queue_destruction__7TObjectFv((void *) (arg0));
            M2C_FIELD(arg0, s16 *, 0x326) = 1;
        }
    } else if ((s16) *arg1 == 1) {
        clear_player_status_flag__10TObjPlayerFPviUi((void *) (arg0), (int) (0), (int) (1));
        set_flag8__6TLobbyFPv((void *) (arg0));
        queue_destruction__7TObjectFv((void *) (arg0));
        M2C_FIELD(arg0, s16 *, 0x326) = 1;
    }
}

void TObjContainerJung__vt78(void *arg0) {
    s16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    switch (temp_r0) {
    case 0:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x364) != 0) {
            TObjPlayer__sub_801B4A18(arg0, -1);
        }
    case 1:
        return;
    }
}

extern M2C_UNK __vt__17TObjContainerJung[];

void *__dt__17TObjContainerJungFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TObjContainerJung;
        TObjPlayer__sub_80154A00(arg0);
        TObjEneGibbles__sub_80156720(arg0);
        destroy_container_object__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
