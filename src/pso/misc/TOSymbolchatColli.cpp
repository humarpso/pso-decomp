#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Stack_80178830 {
    f32 sp8;
    f32 spC;
    f32 sp10;
    f32 sp14;
};

struct VBase_80178AD4 { u8 pad[0x18]; };

struct Obj_80178AD4 : VBase_80178AD4 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(s32);
    u8 pad1[0x338 - 0x1C];
    s32 arr[4];
};

extern "C" {
M2C_UNK TObjPlayer__sub_8001978C(f32);
s32 check_demo_mode__10TObjPlayerFv();
M2C_UNK TObjRoomId__sub_80141CF4(void *, void *);
extern const f32 lbl_805DBA2C;
extern const f32 lbl_805DBA30;
void render__17TOSymbolchatColliFv(u8 *arg0);
void TObjPlayer__sub_80019038(void *);
void reset_photon_effect__10TObjPlayerFPv(void *);
void TObjEneGibbles__sub_80156780(void *, void *, int);
void TOSymbolchatColli__sub_8017873C(void *);
extern u8 lbl_804B4550[];
extern M2C_UNK __vt__17TOSymbolchatColli[];
extern s32 lbl_805D3194;
Obj_80178AD4 *TOSymbolchatColli__ct(Obj_80178AD4 *arg0, void *arg1, s32 arg2);
}

extern "C" {

void *__dt__17TOSymbolchatColliFv(void *arg0, s16 arg1);
void *create__17TOSymbolchatColliFPv(void *arg0);
void free_rock__17TOSymbolchatColliFv(void);
s32 get_state__17TOSymbolchatColliFPv(void *arg0);
u8 TODoorAncient08__sub_80229220(u16);
M2C_UNK TObjEneGibbles__sub_80156720(void *);
M2C_UNK TObjPlayer__sub_80154A00(M2C_UNK *);
M2C_UNK __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
M2C_UNK destroy_motion_object__10TObjPlayerFPvs(void *, M2C_UNK);
int free__11TOBoss4RockFUi(void*);

s32 get_state__17TOSymbolchatColliFPv(void *arg0) {
    if (TODoorAncient08__sub_80229220(M2C_FIELD(arg0, u16 *, 0x37C)) == 1) {
        return 3;
    }
    if (TODoorAncient08__sub_80229220(M2C_FIELD(arg0, u16 *, 0x37A)) == 1) {
        return 2;
    }
    return (u32) __cntlzw(1 - TODoorAncient08__sub_80229220(M2C_FIELD(arg0, u16 *, 0x378))) >> 5;
}

extern void *tl_05;

void render__17TOSymbolchatColliFv(u8 *arg0) {
    Stack_80178830 stack;
    if (check_demo_mode__10TObjPlayerFv() == 1) {
        stack.sp8 = lbl_805DBA2C;
        stack.spC = lbl_805DBA30;
        stack.sp10 = lbl_805DBA2C;
        stack.sp14 = lbl_805DBA2C;
        TObjPlayer__sub_8001978C((f32) (M2C_FIELD(arg0, f32 *, 0x334)));
        TObjRoomId__sub_80141CF4((void *) (arg0 + 0x38), (void *) (&stack.sp8));
    }
}

void *create__17TOSymbolchatColliFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x384);
    if (o != NULL) {
        o = TOSymbolchatColli__ct((Obj_80178AD4 *)(o), (void *)(tl_05), (s32)(arg0));
    }
    return o;
}

    extern int lbl_805D5AC8;
void free_rock__17TOSymbolchatColliFv(void) { free__11TOBoss4RockFUi((void*)(lbl_805D5AC8)); lbl_805D5AC8 = 0; }

extern M2C_UNK __vt__17TOSymbolchatColli[];

void *__dt__17TOSymbolchatColliFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TOSymbolchatColli;
        TObjPlayer__sub_80154A00((M2C_UNK *)arg0);
        TObjEneGibbles__sub_80156720(arg0);
        destroy_motion_object__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
Obj_80178AD4 *TOSymbolchatColli__ct(Obj_80178AD4 *arg0, void *arg1, s32 arg2) {
    s32 i;
    TObjPlayer__sub_80019038(arg0);
    *(u8 **)((u8 *)arg0 + 0x18) = ((u8 *)&__vt__17TOSymbolchatColli);
    *(s32 *)arg0 = lbl_805D3194;
    arg0->v5(arg2);
    TObjEneGibbles__sub_80156780(arg0, lbl_804B4550, 1);
    reset_photon_effect__10TObjPlayerFPv(arg0);
    TOSymbolchatColli__sub_8017873C(arg0);
    for (i = 0; i < 4; i++) {
        arg0->arr[i] = 0;
    }
    return arg0;
}

}
