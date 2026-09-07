#include "pso/TBoss1DragonColli.h"

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#include <stddef.h>
struct Stack_8002B250 {
    f32 sp8;
    f32 spC;
    f32 sp10;
};

struct RecoveredGlobal_8002B250___vt__17TBoss1DragonColli { M2C_UNK value; u8 remaining[0x14]; };
typedef char RecoveredGlobal_8002B250___vt__17TBoss1DragonColli_size[sizeof(RecoveredGlobal_8002B250___vt__17TBoss1DragonColli) == 0x18 ? 1 : -1];

extern "C" {
s32 TBoss1DragonColli__sub_8002B4CC(int, void *, int, void *, f32);
s32 __nw__7TObjectFUl(int);
s32 __ct__7TObjectFP7TObject(void *, void *);
extern RecoveredGlobal_8002B250___vt__17TBoss1DragonColli __vt__17TBoss1DragonColli;
extern s32 lbl_805D265C;
extern const f32 lbl_805D8108;
extern const f32 lbl_805D810C;
extern const f32 lbl_805D8110;
extern const f32 lbl_805D8114;
extern const f32 lbl_805D8118;
extern const f32 lbl_805D811C;
u8 *TBoss1DragonColli__ct(u8 *arg0, s32 arg1);
}

extern "C" {
void queue_destruction__7TObjectFv(void*);
}

TBoss1DragonColli::~TBoss1DragonColli() {
    for (int i = 0; i < 3; i++) {
        if (m_objs[i] != nullptr) {
            queue_destruction__7TObjectFv(m_objs[i]);
        }
        m_objs[i] = nullptr;
    }
}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#include "types.h"
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct M2CCopy_C { u8 bytes[0xc]; };

extern "C" {
int TBoss1DragonColli__sub_8002B3F4(void*);
void fn_8002B630(u8 *arg0, u8 *arg1);
}

extern "C" {

void TBoss1DragonColli__sub_8002B358(void);
void TBoss1DragonColli__sub_8002B35C(void* p);
int TBoss1DragonColli__sub_8002B3F4(void*);
int TBoss1DragonColli__sub_8002B42C(void*);
void *destroy__17TBoss1DragonColliFPvs(void *arg0, s16 arg1);
void draw__17TBoss1DragonColliFPvPvPv(void* p, void* a1, void* a2);
void TBoss1DragonDemo__sub_8002B68C(void);
void TBoss1DragonDemo__sub_8002B690(void);
int TCameraCtrl__sub_803D8934(void*, void*, void*);
int TOHangerMachine01__sub_803D9C00(void*);
M2C_UNK TObjEneGibbles__sub_80156720(void *);
M2C_UNK TObjPlayer__sub_80154A00(void *);
int TObjPlayer__sub_80154E3C(void*);
int TObjPlayer__sub_803D8CD4(void*);
int TObjPlayer__sub_803D9214(void*, void*);
int TObjPlayer__sub_803D9B2C(void*);
int TObjPlayer__sub_803D9B78(void);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK destroy_particle_controller__10TObjPlayerFPvs(void *, M2C_UNK);
void render__16TBoss1DragonDemoFv(void);

u8 *TBoss1DragonColli__ct(u8 *arg0, s32 arg1) {
    typedef char sp8_offset[(offsetof(Stack_8002B250, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_8002B250, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_8002B250, sp10) == 0x8) ? 1 : -1];
    Stack_8002B250 stack;
    s32 temp_r3;
    s32 temp_r3_2;
    s32 temp_r3_3;
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r0_3;
    __ct__7TObjectFP7TObject((void *) (arg0), (void *) (arg1));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__17TBoss1DragonColli.value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D265C;
    stack.sp8 = lbl_805D8108;
    stack.spC = lbl_805D8108;
    stack.sp10 = lbl_805D8108;
    temp_r3 = __nw__7TObjectFUl((int) (0xB8));
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = TBoss1DragonColli__sub_8002B4CC((int) (temp_r3), (void *) (arg0), (int) (1), (void *) (&stack.sp8), (f32) (lbl_805D810C));
    }
    M2C_FIELD(arg0, s32 *, 0x1C) = var_r0;
    stack.sp8 = lbl_805D8110;
    stack.spC = lbl_805D8108;
    stack.sp10 = lbl_805D8114;
    temp_r3_2 = __nw__7TObjectFUl((int) (0xB8));
    var_r0_2 = temp_r3_2;
    if (var_r0_2 != 0) {
        var_r0_2 = TBoss1DragonColli__sub_8002B4CC((int) (temp_r3_2), (void *) (arg0), (int) (3), (void *) (&stack.sp8), (f32) (lbl_805D8118));
    }
    M2C_FIELD(arg0, s32 *, 0x20) = var_r0_2;
    stack.sp8 = lbl_805D8110;
    stack.spC = lbl_805D8108;
    stack.sp10 = lbl_805D811C;
    temp_r3_3 = __nw__7TObjectFUl((int) (0xB8));
    var_r0_3 = temp_r3_3;
    if (var_r0_3 != 0) {
        var_r0_3 = TBoss1DragonColli__sub_8002B4CC((int) (temp_r3_3), (void *) (arg0), (int) (5), (void *) (&stack.sp8), (f32) (lbl_805D8118));
    }
    M2C_FIELD(arg0, s32 *, 0x24) = var_r0_3;
    return arg0;
}

void TBoss1DragonColli__sub_8002B358(void) {  }

void TBoss1DragonColli__sub_8002B35C(void* p) { TBoss1DragonColli__sub_8002B3F4((void*)(p)); }

void draw__17TBoss1DragonColliFPvPvPv(void* p, void* a1, void* a2) { TObjPlayer__sub_803D9B2C(p); TObjPlayer__sub_803D8CD4((void*)0); TOHangerMachine01__sub_803D9C00(a1); TObjPlayer__sub_803D9214((void*)0, a2); TCameraCtrl__sub_803D8934((void*)0, (char*)p + 0xac, (char*)p + 0x38); TObjPlayer__sub_803D9B78(); *(void**)((char*)p + 0x60) = a2; TObjPlayer__sub_80154E3C(p); TBoss1DragonColli__sub_8002B42C((void*)(p)); }

int TBoss1DragonColli__sub_8002B3F4(void*) { return 0; }
int TBoss1DragonColli__sub_8002B42C(void*) { return 0; }

extern M2C_UNK lbl_80481BD4[];

void *destroy__17TBoss1DragonColliFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80481BD4;
        TObjPlayer__sub_80154A00(arg0);
        TObjEneGibbles__sub_80156720(arg0);
        destroy_particle_controller__10TObjPlayerFPvs(arg0, 0);
        if ((s16) arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
void fn_8002B630(u8 *arg0, u8 *arg1) {
    *(M2CCopy_C *)(arg0) = *(const M2CCopy_C *)(arg1);
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) M2C_FIELD(arg1, f32 *, 0xC);
    M2C_FIELD(arg0, f32 *, 0x10) = (f32) M2C_FIELD(arg1, f32 *, 0x10);
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) M2C_FIELD(arg1, s32 *, 0x14);
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) M2C_FIELD(arg1, s32 *, 0x18);
    *(M2CCopy_C *)((s32) arg0 + 0x1C) = *(const M2CCopy_C *)((s32) arg1 + 0x1C);
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) M2C_FIELD(arg1, f32 *, 0x28);
}

}
