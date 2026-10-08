#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
int close_and_advance__9TSaveChCrFPvPv(void*, int);
int close_window__9TSaveChCrFPv(void*);
void fn_80339D78(u8 *arg0);
s32 find_card_file__15TAdPlayerLoadGCFiPv(int, void *);
extern M2C_UNK lbl_804C88C0[];
extern M2C_UNK lbl_804C8914[];
extern M2C_UNK lbl_804C89BC[];
s32 TAdSinglePlyChrSelectGC__sub_80339DBC(void);
}

extern "C" {

int TSaveChCr__sub_80339B94(void* p);
void TSaveChCr__sub_80339CE4(void);
int close_and_advance_step2__9TSaveChCrFPv(void* p);
int close_and_advance_to_3__9TSaveChCrFPv(void* p);
void destroy_if_keyboard_idle__9TSaveChCrFPv(void* p);
int save_1__9TSaveChCrFPv(void* p);
void save_if_dirty__9TSaveChCrFPv(void* p);
void update_save_state__9TSaveChCrFPv(void *arg0);
void update_save_status__9TSaveChCrFPv(void *arg0);
int request_queued_main_phase(void);
s32 TKeyBoardControl__sub_8000F9CC(s32);
int TSaveChCr__sub_80339F30(void*);
s32 TSaveChCr__sub_8033A138(void *);
int TSaveChCr__sub_8033A184(void*, void*);
int close_and_advance__9TSaveChCrFPvPv(void*, int);
s32 poll_memcard_status();
int queue_destruction__7TObjectFv(void*);
s32 save_character__9TSaveChCrFPv(void *);

void destroy_if_keyboard_idle__9TSaveChCrFPv(void* p) { if (*(int*)((char*)p + 0x38) == 0) { queue_destruction__7TObjectFv(p); request_queued_main_phase(); } }
int TSaveChCr__sub_80339B94(void* p) { return close_window__9TSaveChCrFPv(p); }
void save_if_dirty__9TSaveChCrFPv(void* p) { if (TSaveChCr__sub_80339F30(p) != 0) { TSaveChCr__sub_8033A184(p, (void*)4); } }
int close_and_advance_to_3__9TSaveChCrFPv(void* p) { return close_and_advance__9TSaveChCrFPvPv(p, 3); }
void update_save_status__9TSaveChCrFPv(void *arg0) {
    s32 var_r3;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x38) <= 0) {
        M2C_FIELD(arg0, s32 *, 0x28) = 0;
        M2C_FIELD(arg0, s32 *, 0x2C) = poll_memcard_status();
        if ((s32) M2C_FIELD(arg0, s32 *, 0x2C) != 0) {
            TSaveChCr__sub_8033A184((void*)(arg0), (void*)(1));
            return;
        }
        if ((s32) M2C_FIELD(arg0, s32 *, 0x20) == 0) {
            var_r3 = save_character__9TSaveChCrFPv(arg0);
        } else {
            var_r3 = TSaveChCr__sub_8033A138(arg0);
        }
        if (var_r3 == 7) {
            TSaveChCr__sub_8033A184((void*)(arg0), (void*)(4));
            return;
        }
        queue_destruction__7TObjectFv((void*)(arg0));
        TKeyBoardControl__sub_8000F9CC(9);
    }
}
int close_and_advance_step2__9TSaveChCrFPv(void* p) { return close_and_advance__9TSaveChCrFPvPv(p, 2); }
void TSaveChCr__sub_80339CE4(void) {  }
int save_1__9TSaveChCrFPv(void* p) { return close_and_advance__9TSaveChCrFPvPv(p, 1); }
void update_save_state__9TSaveChCrFPv(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x2C);
    if (!(temp_r4 & 2)) {
        if (temp_r4 & 1) {
            if ((u32) M2C_FIELD(arg0, u32 *, 0x3C) == 0U) {
                close_and_advance__9TSaveChCrFPvPv((void*)(arg0), 0);
            }
        } else {
            if (temp_r4 & 4) {
                TSaveChCr__sub_8033A184((void*)(arg0), (void*)(1));
                return;
            }
            if (temp_r4 == 0) {
                TSaveChCr__sub_8033A184((void*)(arg0), (void*)(2));
            }
        }
    }
}
void fn_80339D78(u8 *arg0) {
    ((M2C_UNK)close_window__9TSaveChCrFPv((void*)(arg0)));
    if (M2C_FIELD(arg0, s32 *, 0x2C) & 1) {
        ((M2C_UNK)close_and_advance__9TSaveChCrFPvPv((void*)((void *) (arg0)), (int)((int) (0))));
    }
}
s32 TAdSinglePlyChrSelectGC__sub_80339DBC(void) {
    if ((find_card_file__15TAdPlayerLoadGCFiPv((int) (0), (void *) (lbl_804C8914)) != 0) || (find_card_file__15TAdPlayerLoadGCFiPv((int) (0), (void *) (lbl_804C88C0)) != 0) || (find_card_file__15TAdPlayerLoadGCFiPv((int) (0), (void *) (lbl_804C89BC)) != 0)) {
        return 0;
    }
    return 1;
}

}
