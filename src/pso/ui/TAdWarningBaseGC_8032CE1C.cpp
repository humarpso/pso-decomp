#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct TAdWarningBaseGC {
    char pad0[0x1C];
    s32 state;
    void enter_request_state();
    void request_aram_load_state(void *);
    void wait_aram_request();
    void destroy();
};
typedef TAdWarningBaseGC TAdWarningBaseGC_8032CEB4;
typedef void (TAdWarningBaseGC_8032CEB4::*Act_8032CEB4)();

extern "C" {

}

extern "C" {
u8 * get_quest_download_file_header(void);
void request_aram_load_state__16TAdWarningBaseGCFPv(u8 *arg0);
void DCInvalidateRange(void *, u32);
void run_frame__6TLobbyFv(void);
void ARQPostRequest(void *, u32, u32, u32, u32, u32, u32, void (*)(u32));
void clear_aram_request_busy(u32);
extern u8 ad_warning_arq_request[];
extern u32 ad_warning_aram_base;
extern s32 warning_aram_load_done_flag;
extern int TAdWarningBaseGC__aram_alloc_size;
extern s32 aram_request_busy_flag;
s32 load_from_aram_sync__16TAdWarningBaseGCFi(s32 arg0);
void DCFlushRange(void *, u32);
void ARQPostRequest(void *, u32, u32, u32, u32, u32, u32, void (*)(u32));
void clear_aram_request_busy(u32);
extern u8 ad_warning_arq_request[];
extern u32 ad_warning_aram_base;
extern u32 TAdWarningBaseGC__aram_capacity;
extern int TAdWarningBaseGC__aram_alloc_size;
extern s32 aram_request_busy_flag;
s32 post_aram_request__16TAdWarningBaseGCFii(s32 arg0, s32 arg1);
}

extern "C" {

void wait_aram_request__16TAdWarningBaseGCFv(void *arg0);
void enter_request_state__16TAdWarningBaseGCFv(void* p);
int TAdWarningBaseGC__sub_8032D020(void);
void *TAdWarningBaseGC__sub_8032D0B8(void *arg0, s16 arg1);
int get_alloc_size__16TAdWarningBaseGCFv(void);
void *init_vtable__16TAdWarningBaseGCFPv(void *arg0);
void __ct__7TObjectFP7TObject(void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

extern s32 warning_aram_load_done_flag;
extern s32 aram_request_busy_flag;

void wait_aram_request__16TAdWarningBaseGCFv(void *arg0) {
    if ((s32) aram_request_busy_flag == 0) {
        M2C_FIELD(arg0, s32 *, 0x1C) = 3;
        warning_aram_load_done_flag = 1;
    }
}

void request_aram_load_state__16TAdWarningBaseGCFPv(u8 *arg0) {
    s32 temp_r4;
    u32 temp_r3_2;
    u8 *temp_r3;
    temp_r3 = (u8 *)(get_quest_download_file_header());
    if (temp_r3 != NULL) {
        temp_r4 = M2C_FIELD(temp_r3, s32 *, 0x34);
        if (temp_r4 > 0) {
            temp_r3_2 = M2C_FIELD(temp_r3, u32 *, 0x38);
            if ((temp_r3_2 != 0U) && (post_aram_request__16TAdWarningBaseGCFii((s32)((s32) temp_r3_2), (s32)(temp_r4)) != 0)) {
                M2C_FIELD(arg0, s32 *, 0x1C) = 2;
                return;
            }
        }
    }
    M2C_FIELD(arg0, s32 *, 0x1C) = 3;
}

void enter_request_state__16TAdWarningBaseGCFv(void* p) { *(s32*)((char*)p + 0x1c) = 1; }

    extern int TAdWarningBaseGC__aram_alloc_size;

void dispatch_state_action__16TAdWarningBaseGCFPv(TAdWarningBaseGC_8032CEB4 *self) {
    static Act_8032CEB4 tbl[4] = {
        &TAdWarningBaseGC::enter_request_state,
        (Act_8032CEB4)&TAdWarningBaseGC::request_aram_load_state,
        &TAdWarningBaseGC::wait_aram_request,
        &TAdWarningBaseGC::destroy,
    };
    (self->*tbl[self->state])();
}

s32 load_from_aram_sync__16TAdWarningBaseGCFi(s32 arg0) {
    u32 size;
    if (warning_aram_load_done_flag == 0) {
        return 0;
    }
    size = ((*(s32 *)&TAdWarningBaseGC__aram_alloc_size) + 0x1F) & ~0x1F;
    DCInvalidateRange((void *)arg0, size);
    aram_request_busy_flag = 1;
    ARQPostRequest(ad_warning_arq_request, 4, 1, 1, ad_warning_aram_base, arg0, size, clear_aram_request_busy);
loop:
    if (aram_request_busy_flag != 0) {
        run_frame__6TLobbyFv();
        goto loop;
    }
    DCInvalidateRange((void *)arg0, size);
    return 1;
}

int get_alloc_size__16TAdWarningBaseGCFv(void) {  return TAdWarningBaseGC__aram_alloc_size; }

    extern int TAdWarningBaseGC__aram_alloc_size;
int TAdWarningBaseGC__sub_8032D020(void) {  return ((TAdWarningBaseGC__aram_alloc_size + 0x1f) & 0xffffffe0); }

extern M2C_UNK lbl_804EDBD0[];

s32 post_aram_request__16TAdWarningBaseGCFii(s32 arg0, s32 arg1) {
    u32 size;
    size = (arg1 + 0x1F) & ~0x1F;
    (*(s32 *)&TAdWarningBaseGC__aram_alloc_size) = arg1;
    if (size > TAdWarningBaseGC__aram_capacity) {
        return 0;
    }
    DCFlushRange((void *)arg0, size);
    aram_request_busy_flag = 1;
    ARQPostRequest(ad_warning_arq_request, 4, 0, 1, arg0, ad_warning_aram_base, size, clear_aram_request_busy);
    return 1;
}

void *TAdWarningBaseGC__sub_8032D0B8(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804EDBD0;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_804EDBD0[];

void *init_vtable__16TAdWarningBaseGCFPv(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804EDBD0;
    M2C_FIELD(arg0, u32 *, 0x1C) = 0;
    return arg0;
}

}
