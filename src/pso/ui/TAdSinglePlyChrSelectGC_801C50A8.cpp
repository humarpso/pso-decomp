#include "types.h"

extern "C" {
extern int active_character_save_record;
u16 get_char_select_slot__23TAdSinglePlyChrSelectGCFv(void);
extern int active_character_save_record;
void TAdSinglePlyChrSelectGC__sub_801C50C0(int a0);
extern int active_character_save_record;
u16 TAdSinglePlyChrSelectGC__sub_801C50CC(void);
extern int active_character_save_record;
void TAdSinglePlyChrSelectGC__sub_801C50D8(int a0);
extern int active_character_save_record;
u16 TAdSinglePlyChrSelectGC__sub_801C50E4(void);
extern int active_character_save_record;
void TAdSinglePlyChrSelectGC__sub_801C50F0(int a0);
extern int active_character_save_record;
u16 TAdSinglePlyChrSelectGC__sub_801C50FC(void);
extern int active_character_save_record;
void TAdSinglePlyChrSelectGC__sub_801C5108(int a0);
extern int active_character_save_record;
u16 TAdSinglePlyChrSelectGC__sub_801C5114(void);
    extern int duel_result_window;
void TAdSinglePlyChrSelectGC__sub_801C5120(void);
s32 queue_destruction__7TObjectFv(void*);
extern u32 ad_single_ply_chr_select_instance;
void destroy__23TAdSinglePlyChrSelectGCFv(void);
extern u32 ad_single_ply_chr_select_instance;
void TAdSinglePlyChrSelectGC__sub_801C5158(void);
s32 get_global_state__14TOKeyMachine01Fv();
u32 __nw__7TObjectFUl(s32);
u32 fn_801C5380(void *, s32);
extern u32 ad_single_ply_chr_select_instance;
extern s32 tl_00;
s32 create_if_key_pressed__23TAdSinglePlyChrSelectGCFv(void);
}

extern "C" {

void set_slot__23TAdSinglePlyChrSelectGCFi(int a0);

    extern int active_character_save_record;
void set_slot__23TAdSinglePlyChrSelectGCFi(int a0) { *(short*)((char*)active_character_save_record + 0x21b0) = a0; }
u16 get_char_select_slot__23TAdSinglePlyChrSelectGCFv(void) {
    return *(u16 *)((s8 *)(*(u8 * *)&active_character_save_record) + 0x21B0);
}
void TAdSinglePlyChrSelectGC__sub_801C50C0(int a0) { *(short*)((char*)active_character_save_record + 0x21ae) = a0; }
u16 TAdSinglePlyChrSelectGC__sub_801C50CC(void) {
    return *(u16 *)((s8 *)(*(u8 * *)&active_character_save_record) + 0x21AE);
}
void TAdSinglePlyChrSelectGC__sub_801C50D8(int a0) { *(short*)((char*)active_character_save_record + 0x21ac) = a0; }
u16 TAdSinglePlyChrSelectGC__sub_801C50E4(void) {
    return *(u16 *)((s8 *)(*(u8 * *)&active_character_save_record) + 0x21AC);
}
void TAdSinglePlyChrSelectGC__sub_801C50F0(int a0) { *(short*)((char*)active_character_save_record + 0x21aa) = a0; }
u16 TAdSinglePlyChrSelectGC__sub_801C50FC(void) {
    return *(u16 *)((s8 *)(*(u8 * *)&active_character_save_record) + 0x21AA);
}
void TAdSinglePlyChrSelectGC__sub_801C5108(int a0) { *(short*)((char*)active_character_save_record + 0x21a8) = a0; }
u16 TAdSinglePlyChrSelectGC__sub_801C5114(void) {
    return *(u16 *)((s8 *)(*(u8 * *)&active_character_save_record) + 0x21A8);
}
void TAdSinglePlyChrSelectGC__sub_801C5120(void) { duel_result_window = 0; }
void destroy__23TAdSinglePlyChrSelectGCFv(void) {
    if ((u32) ad_single_ply_chr_select_instance != 0U) {
        queue_destruction__7TObjectFv((void*)ad_single_ply_chr_select_instance);
    }
}
void TAdSinglePlyChrSelectGC__sub_801C5158(void) { (*(int *)&ad_single_ply_chr_select_instance) = 0; }
s32 create_if_key_pressed__23TAdSinglePlyChrSelectGCFv(void) {
    s32 temp_r3;
    u32 var_r0;
    temp_r3 = get_global_state__14TOKeyMachine01Fv();
    if ((temp_r3 != 0x10) && (temp_r3 != 0x11)) {
        return 0;
    }
    if ((u32) ad_single_ply_chr_select_instance != 0U) {
        return 0;
    }
    var_r0 = __nw__7TObjectFUl(0x28);
    if (var_r0 != 0U) {
        var_r0 = fn_801C5380((void *) var_r0, tl_00);
    }
    ad_single_ply_chr_select_instance = var_r0;
    return 1;
}

}
