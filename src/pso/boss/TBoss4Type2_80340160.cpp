#include "types.h"

extern "C" {
void queue_destruction__7TObjectFv(void *);
void copy_pos__11TNowLoadingFPvPv(void *, void *);
int query_teammate_state__9TObjEneDDFPv(void *);
s32 get_phase__8TObjFishFPv(void *);
void advance_offset__11TBoss4Type2FPv(void *);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 play_persistent_sound(int, void *, void *, int, int);
s32 fn_8033FE30(void *);
s32 check_any_player_near(void *);
void TBoss4Type2__sub_80340180(u8 *arg0);
}

extern "C" {

int TBoss4Type2__sub_80340160(void* p);
void *alloc__8TObjFishFPv(void *arg0);
void *destroy__11TBoss4Type2FPvs(void *arg0, s16 arg1);
void *TObjFish__sub_8034029C(void *, void *);
int TObjPlayer__sub_8033FDB0(void*);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void *__nw__7TObjectFUl(int);
void fn_80340040(void *);
void request_destroy__11TBoss4Type2FUi(void *);

int TBoss4Type2__sub_80340160(void* p) { return TObjPlayer__sub_8033FDB0(p); }

extern s32 lbl_804EFB78[];

void TBoss4Type2__sub_80340180(u8 *arg0) {
    u8 *temp_r3;
    if (query_teammate_state__9TObjEneDDFPv(arg0) == 0) {
        advance_offset__11TBoss4Type2FPv(arg0);
        VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x4C), (void *) (arg0 + 0x40));
        fn_8033FE30((void *) (arg0));
        temp_r3 = (u8 *)(*(u8 **)((s8 *)arg0 + 0x20));
        if (temp_r3 != NULL) {
            copy_pos__11TNowLoadingFPvPv(temp_r3, arg0 + 0x40);
        }
        check_any_player_near((void *) (arg0));
        play_persistent_sound((int) (0x4003A126), (void *) (arg0), (void *) (arg0 + 0x40), (int) (0), (int) (0));
        if (get_phase__8TObjFishFPv(*(u8 **)((s8 *)arg0 + 0x1C)) != 4) {
            queue_destruction__7TObjectFv(arg0);
        }
    }
}

void *destroy__11TBoss4Type2FPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_804EFB78;
        if (*(void **)((s8 *)arg0 + 0x20) != NULL) { request_destroy__11TBoss4Type2FUi(*(void **)((s8 *)arg0 + 0x20)); *(s32 *)((s8 *)arg0 + 0x20) = 0; }
        fn_80340040(arg0);
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void *alloc__8TObjFishFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x88);
    if (o != NULL) {
        o = TObjFish__sub_8034029C(o, arg0);
    }
    return o;
}

}
