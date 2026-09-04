#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

void render__14TBoss7CrawfishFv(void* p);

int draw__16TObjEneRe7BeruraFPv(void*);
int notify_fish_if_valid__10TObjPlayerFUi(void*);
int TBoss7Crawfish__sub_80308840(void*);
int TObjChip__sub_803D8AE4(void*, void*, void*, void*);
int TObjPlayer__sub_803D9B2C(void);
int TObjPlayer__sub_803D9B78(void);
int TBoss7Tentacle__sub_803D9BA0(void*);
int TOHangerMachine01__sub_803D9C00(void*);
int set_global_flag__10TObjPlayerFv(void);
int clear_global_state__10TObjPlayerFv(void);

void render__14TBoss7CrawfishFv(void* p) { if (TBoss7Crawfish__sub_80308840(p) != 0) { notify_fish_if_valid__10TObjPlayerFUi(*(void**)((char*)p + 0x24)); set_global_flag__10TObjPlayerFv(); TObjPlayer__sub_803D9B2C(); TOHangerMachine01__sub_803D9C00((char*)p + 0x38); TObjChip__sub_803D8AE4((void*)0, *(void**)((char*)p + 0x5c), *(void**)((char*)p + 0x60), *(void**)((char*)p + 0x64)); TBoss7Tentacle__sub_803D9BA0((char*)p + 0x68); draw__16TObjEneRe7BeruraFPv(p); TObjPlayer__sub_803D9B78(); clear_global_state__10TObjPlayerFv(); } }

}
#else
#if PSO_CLASS_PACKAGE == 0x80308688
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TBoss7Crawfish__sub_80308688(void *arg0);

extern f32 lbl_805DF0C8;

s32 TBoss7Crawfish__sub_80308688(void *arg0) {
    return (u32) __cntlzw((u32) (lbl_805DF0C8 < M2C_FIELD(arg0, f32 *, 0x38))) >> 5;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803087D4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss7Crawfish__sub_803087D4(s32 arg0, s32 arg1);
M2C_UNK TOTrapAncient01__sub_80226578(s32, s32, s32, M2C_UNK, M2C_UNK);

void TBoss7Crawfish__sub_803087D4(s32 arg0, s32 arg1) {
    TOTrapAncient01__sub_80226578(arg1, arg0, arg0 + 0x38, 0, 0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8030880C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void spawn_effect__14TBoss7CrawfishFii(s32 arg0, s32 arg1);
M2C_UNK TBoss3Volopt__sub_8022675C(s32, s32, M2C_UNK, M2C_UNK);

void spawn_effect__14TBoss7CrawfishFii(s32 arg0, s32 arg1) {
    TBoss3Volopt__sub_8022675C(arg1, arg0 + 0x38, 0, 0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803088D0
#include "types.h"

extern "C" {

void free_child__14TBoss7CrawfishFPv(void* p);
int queue_destruction__7TObjectFv(void*);

void free_child__14TBoss7CrawfishFPv(void* p) { if (*(unsigned int*)((char*)p + 0x3cc) != 0) { queue_destruction__7TObjectFv(*(void**)((char*)p + 0x3cc)); *(int*)((char*)p + 0x3cc) = 0; } }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80308B90
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void check_band_and_destroy__14TBoss7CrawfishFi(s32 arg0);
f32 get_health__14TBoss7CrawfishFPv(s32);
M2C_UNK TBoss7Crawfish__sub_80308910(s32);
s32 objInBand__FP7GameObjf(s32, f32);
M2C_UNK queue_destruction__7TObjectFv(s32);

extern const f32 TBoss7Crawfish__data_805DF0D8;
extern const f32 lbl_805DF0EC;

void check_band_and_destroy__14TBoss7CrawfishFi(s32 arg0) {
    if (objInBand__FP7GameObjf(arg0, lbl_805DF0EC) != 0) {
        TBoss7Crawfish__sub_80308910(arg0);
    }
    if (TBoss7Crawfish__data_805DF0D8 == get_health__14TBoss7CrawfishFPv(arg0)) {
        queue_destruction__7TObjectFv(arg0);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80308BEC
#include "types.h"

extern "C" {

int TBoss7Crawfish__sub_80308BEC(void* p);

int TBoss7Crawfish__sub_80308F8C(void*, int);

int TBoss7Crawfish__sub_80308BEC(void* p) { return TBoss7Crawfish__sub_80308F8C(p, 5); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80308C10
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update__14TBoss7CrawfishFi(s32 arg0);
f32 get_health__14TBoss7CrawfishFPv(s32);
M2C_UNK TBoss7Crawfish__sub_803086A8(s32);
M2C_UNK spawn_effect__14TBoss7CrawfishFii(s32, M2C_UNK);
M2C_UNK TBoss7Crawfish__sub_80308910(s32);
s32 objInBand__FP7GameObjf(s32, f32);
M2C_UNK queue_destruction__7TObjectFv(s32);

extern const f32 TBoss7Crawfish__data_805DF0D8;
extern const f32 lbl_805DF0F0;

void update__14TBoss7CrawfishFi(s32 arg0) {
    if (objInBand__FP7GameObjf(arg0, lbl_805DF0F0) != 0) {
        TBoss7Crawfish__sub_80308910(arg0);
        spawn_effect__14TBoss7CrawfishFii(arg0, 0x39E0D);
    }
    TBoss7Crawfish__sub_803086A8(arg0);
    if (TBoss7Crawfish__data_805DF0D8 == get_health__14TBoss7CrawfishFPv(arg0)) {
        queue_destruction__7TObjectFv(arg0);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80308C84
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_motion_and_release__14TBoss7CrawfishFPv(u8 *arg0);
M2C_UNK TBoss7Crawfish__sub_803086A8(void *, void *, f32, f32);
M2C_UNK TBoss7Crawfish__sub_803087D4(void *, int);
s32 TBoss7Crawfish__sub_80308ED8(void *, void *);
M2C_UNK TBoss7Crawfish__sub_80308F8C(void *, int);
M2C_UNK copy_pos__11TNowLoadingFPvPv(void *, void *);
M2C_UNK free_child__14TBoss7CrawfishFPv(void *);

extern const f32 TBoss7Crawfish__data_805DF0DC;
extern const f32 lbl_805DF0F4;

void update_motion_and_release__14TBoss7CrawfishFPv(u8 *arg0) {
    f32 *temp_r4;

    temp_r4 = M2C_FIELD(arg0, f32 **, 0x3A0);
    M2C_FIELD(arg0, f32 *, 0xC8) = (f32) (lbl_805DF0F4 * (TBoss7Crawfish__data_805DF0DC + *temp_r4));
    TBoss7Crawfish__sub_803086A8((void *) (arg0), (void *) (temp_r4), (f32) (TBoss7Crawfish__data_805DF0DC), (f32) (lbl_805DF0F4));
    {
        void *temp_ptr = (void *) M2C_FIELD(arg0, u32 *, 0x3CC);
        if (temp_ptr != NULL) {
            copy_pos__11TNowLoadingFPvPv(temp_ptr, (void *) (arg0 + 0x38));
        }
    }
    if (TBoss7Crawfish__sub_80308ED8((void *) (arg0), (void *) (arg0 + 0x308)) == 0) {
        free_child__14TBoss7CrawfishFPv((void *) (arg0));
        TBoss7Crawfish__sub_80308F8C((void *) (arg0), (int) (3));
        return;
    }
    TBoss7Crawfish__sub_803087D4((void *) (arg0), (int) (0x3A80C));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80308E0C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_attack_state__14TBoss7CrawfishFPv(void *arg0);
s32 TBoss7Crawfish__sub_80308AA8(void *);
M2C_UNK TBoss7Crawfish__sub_80308F8C(void *, M2C_UNK);
s16 get_floor__10TObjPlayerFPv(void *);
M2C_UNK TBoss7Crawfish__sub_803086A8(void *);
M2C_UNK spawn_effect__14TBoss7CrawfishFii(void *, M2C_UNK);
s32 objInBand__FP7GameObjf(void *, f32);

extern const f32 lbl_805DF0F8;

void update_attack_state__14TBoss7CrawfishFPv(void *arg0) {
    s32 temp_r0;
    s32 temp_r3;
    void *temp_r4;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x3C8) - 1;
    M2C_FIELD(arg0, s32 *, 0x3C8) = temp_r0;
    if (temp_r0 < 0) {
        TBoss7Crawfish__sub_80308F8C(arg0, 1);
    }
    if ((get_floor__10TObjPlayerFPv(arg0) == 2) && (objInBand__FP7GameObjf(arg0, lbl_805DF0F8) != 0)) {
        temp_r4 = M2C_FIELD(arg0, void **, 0xA4);
        if (M2C_FIELD(temp_r4, s32 *, 0x18) & 0x02000000) {
            M2C_FIELD(temp_r4, s32 *, 0x18) &= ~0x02000000;
        }
        if (TBoss7Crawfish__sub_80308AA8(arg0) != 0) {
            spawn_effect__14TBoss7CrawfishFii(arg0, 0x3A80A);
        } else {
            spawn_effect__14TBoss7CrawfishFii(arg0, 0x3A80B);
        }
    }
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0xA4), s32 *, 0x18) & 0x02000000) {
        TBoss7Crawfish__sub_803086A8(arg0);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8030908C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void run_task__14TBoss7CrawfishFv(u8 *arg0);
M2C_UNK TBoss1Dragon__sub_80143504(void *);
M2C_UNK TBoss7Crawfish__sub_80308BEC(void *);
M2C_UNK update_motion_and_release__14TBoss7CrawfishFPv(void *);
M2C_UNK TBoss7Crawfish__sub_80308D1C(void *);
M2C_UNK TBoss7Crawfish__sub_80308F8C(void *, int);
M2C_UNK TObjPlayer__sub_80154E3C(void *);
M2C_UNK TObjPlayer__sub_801B4A18(void *, int);
M2C_UNK TRaderMapCore__sub_801F99EC(void *, int, int, int, f32);
M2C_UNK check_band_and_destroy__14TBoss7CrawfishFi(void *);
s32 obj_testFlags30(void *, int);
M2C_UNK update__14TBoss7CrawfishFi(void *);
M2C_UNK update_attack_state__14TBoss7CrawfishFPv(void *);

extern const f32 lbl_805DF0FC;

void run_task__14TBoss7CrawfishFv(u8 *arg0) {
    s16 temp_r0;

    if (((s16) M2C_FIELD(arg0, s16 *, 0x326) != 5) && (obj_testFlags30((void *) (arg0), (int) (0x800)) != 0)) {
        TBoss7Crawfish__sub_80308F8C((void *) (arg0), (int) (4));
    }
    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    switch (temp_r0) {
    case 0:
        update_attack_state__14TBoss7CrawfishFPv((void *) (arg0));
        break;
    case 1:
        TBoss7Crawfish__sub_80308D1C((void *) (arg0));
        break;
    case 2:
        update_motion_and_release__14TBoss7CrawfishFPv((void *) (arg0));
        break;
    case 3:
        update__14TBoss7CrawfishFi((void *) (arg0));
        break;
    case 4:
        TBoss7Crawfish__sub_80308BEC((void *) (arg0));
        break;
    case 5:
        check_band_and_destroy__14TBoss7CrawfishFi((void *) (arg0));
        break;
    }
    TObjPlayer__sub_80154E3C((void *) (arg0));
    if (!(M2C_FIELD(M2C_FIELD(arg0, void **, 0xA4), s32 *, 0x18) & 0x02000000)) {
        TObjPlayer__sub_801B4A18((void *) (arg0), (int) (-1));
    }
    TRaderMapCore__sub_801F99EC((void *) (arg0 + 0x38), (int) (-0x5DB4), (int) (1), (int) (1), (f32) (lbl_805DF0FC));
    TBoss1Dragon__sub_80143504((void *) (arg0));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8030919C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__dt__14TBoss7CrawfishFv(void *arg0, s16 arg1);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__9TObjEnemyFv(void *, M2C_UNK);
M2C_UNK TObjPlayer__sub_80154A00(void *);
M2C_UNK clear_obj_links(void *);
M2C_UNK free_child__14TBoss7CrawfishFPv(void *);

extern M2C_UNK __vt__14TBoss7Crawfish[];

void *__dt__14TBoss7CrawfishFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__14TBoss7Crawfish;
        TObjPlayer__sub_80154A00(arg0);
        clear_obj_links(arg0);
        free_child__14TBoss7CrawfishFPv(arg0);
        __dt__9TObjEnemyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80309434
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void destroy_instance__14TBoss7CrawfishFv(void);
void TLobby__sub_8001FE7C(void*, int);

extern u32 TBoss7Crawfish__data_805D6A60;

void destroy_instance__14TBoss7CrawfishFv(void) {
    if ((u32) TBoss7Crawfish__data_805D6A60 != 0U) {
        TLobby__sub_8001FE7C((void*)TBoss7Crawfish__data_805D6A60, 1);
        TBoss7Crawfish__data_805D6A60 = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803094BC
#include "types.h"

extern "C" {

int initialize_subwindow__9TWindowDDFPv(void*);
int TWindowSubStatusDisp__sub_80257C28(void*, void*);
void TBoss7Crawfish__vt42(void);
void TBoss7Crawfish__vt43(void);
void TBoss7Crawfish__vt44(void);
void TBoss7Crawfish__vt45(void);
void TBoss7Crawfish__vt46(void);
void TBoss7Crawfish__vt47(void);
void TBoss7Crawfish__vt48(void);
f32 get_health__14TBoss7CrawfishFPv(void* p);
void set_anim_timer__14TBoss7CrawfishFPvs(void* p, s16 v);
int get_item_count__24TShopEquipmentSellWindowFPv(void* p);
int fn_80269078(void*);

void TBoss7Crawfish__vt42(void) {  }
void TBoss7Crawfish__vt43(void) {  }
void TBoss7Crawfish__vt44(void) {  }
void TBoss7Crawfish__vt45(void) {  }
void TBoss7Crawfish__vt46(void) {  }
void TBoss7Crawfish__vt47(void) {  }
void TBoss7Crawfish__vt48(void) {  }
f32 get_health__14TBoss7CrawfishFPv(void* p) { return *(f32*)((char*)p + 0xc8); }
void set_anim_timer__14TBoss7CrawfishFPvs(void* p, s16 v) { *(s16*)((char*)p + 0xb8) = v; }

}
#endif
#endif
