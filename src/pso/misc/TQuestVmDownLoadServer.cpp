#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

void close_message__22TQuestVmDownLoadServerFPv(void* p);
int close__17TMedicalCenterMesFPv(void*);

void close_message__22TQuestVmDownLoadServerFPv(void* p) { if (*(unsigned int*)((char*)p + 0x294) != 0) { close__17TMedicalCenterMesFPv((char*)p + 0x1c); *(int*)((char*)p + 0x294) = 0; } }

}
#else
#if PSO_CLASS_PACKAGE == 0x8006FC34
#include "types.h"

extern "C" {

void split_time_hms__22TQuestVmDownLoadServerFiPvPvPv(s32 arg0, s32 *arg1, s32 *arg2, s32 *arg3);

void split_time_hms__22TQuestVmDownLoadServerFiPvPvPv(s32 arg0, s32 *arg1, s32 *arg2, s32 *arg3) {
    *arg1 = arg0 / 3600;
    if ((s32) *arg1 > 0x63) {
        *arg1 = 0x63;
    }
    *arg2 = (arg0 / 60) % 60;
    *arg3 = arg0 % 60;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8007EB14
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TQuestVmDownLoadServer__sub_8007EB14(void);

extern s32 TQuestVmDownLoadServer__data_805D5F24;

s32 TQuestVmDownLoadServer__sub_8007EB14(void) {
    return TQuestVmDownLoadServer__data_805D5F24;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8007EBDC
#include "types.h"
typedef s32 M2C_UNK;
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TQuestVmDownLoadServer__sub_8007EBDC(void* p);
int alloc__22TQuestVmDownLoadServerFPv(void* p);
int alloc__23TAdSinglePlyChrSelectGCFPv(void* p);
int fn_803DE864(void*);
M2C_UNK xfree__FPv();
int xmalloc__FUl(void*);

int TQuestVmDownLoadServer__sub_8007EBDC(void* p) { return fn_803DE864(p); }
int alloc__22TQuestVmDownLoadServerFPv(void* p) { return xmalloc__FUl(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8007EC58
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TQuestVmDownLoadServer__sub_8007EC58(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

extern M2C_UNK lbl_8048DF58[];

void *TQuestVmDownLoadServer__sub_8007EC58(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8048DF58;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8007ECB0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TQuestVmDownLoadServer__sub_8007ECB0(void *arg0);
void __ct__7TObjectFP7TObject(void *, s32);

extern M2C_UNK lbl_8048DF58[];

void *TQuestVmDownLoadServer__sub_8007ECB0(void *arg0) {
    __ct__7TObjectFP7TObject(arg0, 0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8048DF58;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80080788
#include "types.h"

extern "C" {

void clear_flag4_bit4__22TQuestVmDownLoadServerFPv(void* p);

void clear_flag4_bit4__22TQuestVmDownLoadServerFPv(void* p) { *(u16*)((char*)p + 0x4) &= 0xfffffffb; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800F9CE4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_ready__22TQuestVmDownLoadServerFv(void);
M2C_UNK wait_ready_loop__6TLobbyFv();

extern s32 lbl_805D49B4;
extern s32 lbl_805D5354;
extern s32 TQuestVmDownLoadServer__data_805D5F18;

s32 is_ready__22TQuestVmDownLoadServerFv(void) {
    wait_ready_loop__6TLobbyFv();
    if ((s32) lbl_805D49B4 != 0) {
        return 0;
    }
    if ((s32) TQuestVmDownLoadServer__data_805D5F18 != 0) {
        return 0;
    }
    return lbl_805D5354 ? 1 : 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800FA8A4
#include "types.h"

extern "C" {

int get_serial_access__22TQuestVmDownLoadServerFPv(void* p);
int poll_serial_access__22TQuestVmDownLoadServerFPv(void* p);
int update__22TQuestVmDownLoadServerFPv(void* p);
int TAdEnterSerialAccessGC__sub_8032182C(void*);
int update_all__8TFogCtrlFv(void*);

int get_serial_access__22TQuestVmDownLoadServerFPv(void* p) { return TAdEnterSerialAccessGC__sub_8032182C(p); }
int poll_serial_access__22TQuestVmDownLoadServerFPv(void* p) { return TAdEnterSerialAccessGC__sub_8032182C(p); }
int update__22TQuestVmDownLoadServerFPv(void* p) { return update_all__8TFogCtrlFv(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800FA904
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TQuestVmDownLoadServer__sub_800FA904(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

extern M2C_UNK lbl_8049C700[];

void *TQuestVmDownLoadServer__sub_800FA904(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8049C700;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800FA9A8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void destroy_instance__22TQuestVmDownLoadServerFv(void);
M2C_UNK queue_destruction__7TObjectFv(void*);

extern u32 lbl_805D5390;

void destroy_instance__22TQuestVmDownLoadServerFv(void) {
    if ((u32) lbl_805D5390 != 0U) {
        queue_destruction__7TObjectFv((void*)lbl_805D5390);
    }
    lbl_805D5390 = 0U;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801F6B80
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void clear_field2A0__22TQuestVmDownLoadServerFv(void);

extern void *TQuestVmDownLoadServer__data_805D5F24;

void clear_field2A0__22TQuestVmDownLoadServerFv(void) {
    if ((void *) TQuestVmDownLoadServer__data_805D5F24 != NULL) {
        M2C_FIELD(TQuestVmDownLoadServer__data_805D5F24, s32 *, 0x2A0) = 0;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801F6B98
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TQuestVmDownLoadServer__sub_801F6B98(void);

extern void *TQuestVmDownLoadServer__data_805D5F24;

void TQuestVmDownLoadServer__sub_801F6B98(void) {
    if ((void *) TQuestVmDownLoadServer__data_805D5F24 != NULL) {
        M2C_FIELD(TQuestVmDownLoadServer__data_805D5F24, s32 *, 0x2A0) = 0;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801F6BB0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_field230__22TQuestVmDownLoadServerFv(void);

extern void *TQuestVmDownLoadServer__data_805D5F24;

s32 get_field230__22TQuestVmDownLoadServerFv(void) {
    if ((void *) TQuestVmDownLoadServer__data_805D5F24 != NULL) {
        return M2C_FIELD(TQuestVmDownLoadServer__data_805D5F24, s32 *, 0x230);
    }
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801F6BCC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void create__22TQuestVmDownLoadServerFv(void);
M2C_UNK TQuestVmDownLoadServer__ct(void *, s32);
void *__nw__7TObjectFUl(M2C_UNK);

extern u32 TQuestVmDownLoadServer__data_805D5F24;
extern s32 tl_00;

void create__22TQuestVmDownLoadServerFv(void) {
    void *temp_r3;

    if ((u32) TQuestVmDownLoadServer__data_805D5F24 == 0U) {
        temp_r3 = __nw__7TObjectFUl(0x2A8);
        if (temp_r3 != 0) {
            TQuestVmDownLoadServer__ct(temp_r3, tl_00);
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801F6E88
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void check_client_connections__22TQuestVmDownLoadServerFPv(void *arg0);
s32 TAdPlayerLoadGC__sub_801E1E38(s32);
M2C_UNK clear_flag4_bit4__22TQuestVmDownLoadServerFPv(void *);
M2C_UNK TQuestVmDownLoadServer__sub_801F6E08(void *, s32, M2C_UNK);
M2C_UNK set_flag_4__9TObjLukerFPv(void *);
s32 TQuestVmDownLoadServer__sub_8006EF6C(M2C_UNK);

extern s32 lbl_805D55C0;
extern s32 TQuestVmDownLoadServer__data_805D5F18;

void check_client_connections__22TQuestVmDownLoadServerFPv(void *arg0) {
    s32 temp_r0;
    s32 temp_r3;
    s32 var_r30;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x2A0);
    if ((temp_r0 == 0) || (temp_r0 == 0x15) || (temp_r0 == 0x16)) {
        return;
    }
    {
        if ((s32) lbl_805D55C0 != 0) {
            if ((u32) M2C_FIELD(arg0, u32 *, 0x29C) != 0U) {
                set_flag_4__9TObjLukerFPv(M2C_FIELD(arg0, void **, 0x29C));
            }
        } else {
            if ((u32) M2C_FIELD(arg0, u32 *, 0x29C) != 0U) {
                clear_flag4_bit4__22TQuestVmDownLoadServerFPv(M2C_FIELD(arg0, void **, 0x29C));
            }
            var_r30 = 0;
            M2C_FIELD(arg0, s32 *, 0x234) = 0;
            do {
                if (TAdPlayerLoadGC__sub_801E1E38(var_r30) != 0) {
                    M2C_FIELD(arg0, s32 *, 0x234) = (s32) (M2C_FIELD(arg0, s32 *, 0x234) | (1 << var_r30));
                }
                var_r30 += 1;
            } while (var_r30 < 8);
            temp_r3 = M2C_FIELD(arg0, s32 *, 0x234);
            if (temp_r3 != (s32) M2C_FIELD(arg0, s32 *, 0x238)) {
                M2C_FIELD(arg0, s32 *, 0x238) = temp_r3;
                if ((s32) TQuestVmDownLoadServer__data_805D5F18 != 0) {
                    TQuestVmDownLoadServer__data_805D5F18 = 0;
                    TQuestVmDownLoadServer__sub_801F6E08(arg0, TQuestVmDownLoadServer__sub_8006EF6C(0xB), 1);
                    M2C_FIELD(arg0, s32 *, 0x2A0) = 0x12;
                } else {
                    M2C_FIELD(arg0, s32 *, 0x2A0) = 1;
                }
            }
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801F6F90
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void close__22TQuestVmDownLoadServerFPv(void *arg0);
M2C_UNK update_state__13TAdMcSelectGCFv();
M2C_UNK TQuestVmDownLoadServer__sub_801F6E08(void *, s32, M2C_UNK);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(void *);
s32 TAdSinglePlyChrSelectGC__sub_80132F2C(M2C_UNK, M2C_UNK);
M2C_UNK clear_selected_and_update_entry__14TWindowSubItemFPv(void *);

extern s32 TQuestVmDownLoadServer__data_805D5F18;

void close__22TQuestVmDownLoadServerFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x260) != 0U) {
        safe_free__23TAdSinglePlyChrSelectGCFUi(M2C_FIELD(arg0, void **, 0x260));
        M2C_FIELD(arg0, u32 *, 0x260) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x28C) != 0U) {
        clear_selected_and_update_entry__14TWindowSubItemFPv(M2C_FIELD(arg0, void **, 0x28C));
    }
    update_state__13TAdMcSelectGCFv();
    TQuestVmDownLoadServer__sub_801F6E08(arg0, TAdSinglePlyChrSelectGC__sub_80132F2C(0x29, 1), 1);
    M2C_FIELD(arg0, s32 *, 0x2A0) = 4;
    TQuestVmDownLoadServer__data_805D5F18 = 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801F7010
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void destroy__22TQuestVmDownLoadServerFPv(void *arg0);
void TQuestVmDownLoadServer__sub_801F8D30(void);
void allow_rendering__7TObjectFv(void *);
void set_ready__6TSceneFv(void *);
void queue_destruction__7TObjectFv(void *);

extern void *lbl_805D55D4;

void destroy__22TQuestVmDownLoadServerFPv(void *arg0) {
    set_ready__6TSceneFv(arg0);
    if (lbl_805D55D4 != NULL) {
        allow_rendering__7TObjectFv(lbl_805D55D4);
    }
    TQuestVmDownLoadServer__sub_801F8D30();
    queue_destruction__7TObjectFv(arg0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801F7058
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void close_download__22TQuestVmDownLoadServerFPv(void *arg0);
s32 TAdPlayerLoadGC__sub_801E1B50(s32);
M2C_UNK TQuestVmDownLoadServer__sub_801F6E08(void *, s32, M2C_UNK);
s32 TQuestVmDownLoadServer__sub_8006EF6C(M2C_UNK);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(void *);
M2C_UNK clear_selected_and_update_entry__14TWindowSubItemFPv(void *);
M2C_UNK reset_quest_id__23TAdSinglePlyChrSelectGCFv();

extern s32 lbl_805D49B4;

void close_download__22TQuestVmDownLoadServerFPv(void *arg0) {
    if (TAdPlayerLoadGC__sub_801E1B50(M2C_FIELD(arg0, s32 *, 0x25C)) == 0) {
        reset_quest_id__23TAdSinglePlyChrSelectGCFv();
        if ((u32) M2C_FIELD(arg0, u32 *, 0x260) != 0U) {
            safe_free__23TAdSinglePlyChrSelectGCFUi(M2C_FIELD(arg0, void **, 0x260));
            M2C_FIELD(arg0, u32 *, 0x260) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x28C) != 0U) {
            clear_selected_and_update_entry__14TWindowSubItemFPv(M2C_FIELD(arg0, void **, 0x28C));
        }
        TQuestVmDownLoadServer__sub_801F6E08(arg0, TQuestVmDownLoadServer__sub_8006EF6C(0x41), 1);
        M2C_FIELD(arg0, s32 *, 0x2A0) = 0x13;
        lbl_805D49B4 = 0;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801F70E4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void write_quest_data__22TQuestVmDownLoadServerFPv(void *arg0);
M2C_UNK TQuestVmDownLoadServer__sub_801F6E08(void *, s32, M2C_UNK);
s32 TQuestVmDownLoadServer__sub_8006EF6C(M2C_UNK);
s32 TAdSinglePlyChrSelectGC__sub_80132F2C(M2C_UNK, M2C_UNK);
s32 draw_window_bg__23TAdSinglePlyChrSelectGCFiiii(s32, M2C_UNK *, s32, s32);
M2C_UNK set_quest_download_server__23TAdSinglePlyChrSelectGCFi(s32);

extern M2C_UNK lbl_8044BEF4[];
extern s32 lbl_805D49B4;

void write_quest_data__22TQuestVmDownLoadServerFPv(void *arg0) {
    set_quest_download_server__23TAdSinglePlyChrSelectGCFi(M2C_FIELD(arg0, s32 *, 0x25C));
    lbl_805D49B4 = 1;
    if (draw_window_bg__23TAdSinglePlyChrSelectGCFiiii(M2C_FIELD(arg0, s32 *, 0x25C), lbl_8044BEF4, M2C_FIELD(arg0, s32 *, 0x260), M2C_FIELD(arg0, s32 *, 0x26C)) == 0) {
        M2C_FIELD(arg0, s32 *, 0x2A0) = 0x10;
        TQuestVmDownLoadServer__sub_801F6E08(arg0, TQuestVmDownLoadServer__sub_8006EF6C(0xC), 1);
        return;
    }
    TQuestVmDownLoadServer__sub_801F6E08(arg0, TAdSinglePlyChrSelectGC__sub_80132F2C(0x29, 2), 1);
    M2C_FIELD(arg0, s32 *, 0x2A0) = 0x17;
    lbl_805D49B4 = 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801F7360
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void finish_download__22TQuestVmDownLoadServerFPv(void *arg0);
s32 TAdPlayerLoadGC__sub_801E1B50(s32);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(void *);
M2C_UNK clear_selected_and_update_entry__14TWindowSubItemFPv(void *);
M2C_UNK reset_quest_id__23TAdSinglePlyChrSelectGCFv();

extern s32 lbl_805D49B4;

void finish_download__22TQuestVmDownLoadServerFPv(void *arg0) {
    if (TAdPlayerLoadGC__sub_801E1B50(M2C_FIELD(arg0, s32 *, 0x25C)) == 0) {
        reset_quest_id__23TAdSinglePlyChrSelectGCFv();
        if ((u32) M2C_FIELD(arg0, u32 *, 0x260) != 0U) {
            safe_free__23TAdSinglePlyChrSelectGCFUi(M2C_FIELD(arg0, void **, 0x260));
            M2C_FIELD(arg0, u32 *, 0x260) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x28C) != 0U) {
            clear_selected_and_update_entry__14TWindowSubItemFPv(M2C_FIELD(arg0, void **, 0x28C));
        }
        M2C_FIELD(arg0, s32 *, 0x2A0) = 0xE;
        lbl_805D49B4 = 0;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801F73D4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void write_quest_data_named__22TQuestVmDownLoadServerFPv(u8 *arg0);
M2C_UNK TQuestVmDownLoadServer__sub_801F6E08(void *, s32, M2C_UNK);
s32 TQuestVmDownLoadServer__sub_8006EF6C(M2C_UNK);
s32 TAdSinglePlyChrSelectGC__sub_80132F2C(M2C_UNK, M2C_UNK);
s32 draw_window_bg__23TAdSinglePlyChrSelectGCFiiii(s32, void *, s32, s32);
M2C_UNK set_quest_download_server__23TAdSinglePlyChrSelectGCFi(s32);

extern s32 lbl_805D49B4;

void write_quest_data_named__22TQuestVmDownLoadServerFPv(u8 *arg0) {
    set_quest_download_server__23TAdSinglePlyChrSelectGCFi(M2C_FIELD(arg0, s32 *, 0x25C));
    lbl_805D49B4 = 1;
    if (draw_window_bg__23TAdSinglePlyChrSelectGCFiiii(M2C_FIELD(arg0, s32 *, 0x25C), arg0 + 0x27D, M2C_FIELD(arg0, s32 *, 0x260), M2C_FIELD(arg0, s32 *, 0x268)) == 0) {
        M2C_FIELD(arg0, s32 *, 0x2A0) = 0xD;
        TQuestVmDownLoadServer__sub_801F6E08(arg0, TQuestVmDownLoadServer__sub_8006EF6C(0xC), 1);
        return;
    }
    TQuestVmDownLoadServer__sub_801F6E08(arg0, TAdSinglePlyChrSelectGC__sub_80132F2C(0x29, 2), 1);
    M2C_FIELD(arg0, s32 *, 0x2A0) = 0x17;
    lbl_805D49B4 = 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801F75FC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void abort_download__22TQuestVmDownLoadServerFPv(void *arg0);
s32 TAdPlayerLoadGC__sub_801E1B50(s32);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(void *);
M2C_UNK reset_quest_id__23TAdSinglePlyChrSelectGCFv();

extern s32 lbl_805D49B4;

void abort_download__22TQuestVmDownLoadServerFPv(void *arg0) {
    if (TAdPlayerLoadGC__sub_801E1B50(M2C_FIELD(arg0, s32 *, 0x25C)) == 0) {
        reset_quest_id__23TAdSinglePlyChrSelectGCFv();
        if ((u32) M2C_FIELD(arg0, u32 *, 0x260) != 0U) {
            safe_free__23TAdSinglePlyChrSelectGCFUi(M2C_FIELD(arg0, void **, 0x260));
            M2C_FIELD(arg0, u32 *, 0x260) = 0U;
        }
        M2C_FIELD(arg0, s32 *, 0x2A0) = 0xB;
        lbl_805D49B4 = 0;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801F7660
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void load_quest_data__22TQuestVmDownLoadServerFPv(u8 *arg0);
M2C_UNK TQuestVmDownLoadServer__sub_801F6E08(void *, s32, M2C_UNK);
s32 TQuestVmDownLoadServer__sub_8006EF6C(M2C_UNK);
s32 TAdSinglePlyChrSelectGC__sub_80132F2C(M2C_UNK, M2C_UNK);
s32 draw_window_bg__23TAdSinglePlyChrSelectGCFiiii(s32, void *, s32, s32);
M2C_UNK set_quest_download_server__23TAdSinglePlyChrSelectGCFi(s32);

extern s32 lbl_805D49B4;
extern s32 TQuestVmDownLoadServer__data_805D5F18;

void load_quest_data__22TQuestVmDownLoadServerFPv(u8 *arg0) {
    set_quest_download_server__23TAdSinglePlyChrSelectGCFi(M2C_FIELD(arg0, s32 *, 0x25C));
    lbl_805D49B4 = 1;
    if (draw_window_bg__23TAdSinglePlyChrSelectGCFiiii(M2C_FIELD(arg0, s32 *, 0x25C), arg0 + 0x270, M2C_FIELD(arg0, s32 *, 0x260), M2C_FIELD(arg0, s32 *, 0x264)) == 0) {
        M2C_FIELD(arg0, s32 *, 0x2A0) = 0xA;
        TQuestVmDownLoadServer__sub_801F6E08(arg0, TQuestVmDownLoadServer__sub_8006EF6C(0xC), 1);
        TQuestVmDownLoadServer__data_805D5F18 = 1;
        return;
    }
    TQuestVmDownLoadServer__sub_801F6E08(arg0, TAdSinglePlyChrSelectGC__sub_80132F2C(0x29, 2), 1);
    M2C_FIELD(arg0, s32 *, 0x2A0) = 0x17;
    lbl_805D49B4 = 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801F79CC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void handle_confirm_window__22TQuestVmDownLoadServerFPv(void *arg0);
M2C_UNK update_state__13TAdMcSelectGCFv();
M2C_UNK TQuestVmDownLoadServer__sub_801F6E08(void *, s32, M2C_UNK);
s32 is_visible__17TWindowSubComCardFPv(u32);
s32 get_status_flag__17TWindowSubComCardFPv(u32);
M2C_UNK TWindow__close(void *);
s32 TWindowSubComCard__sub_80265BF8(u32);
s32 TAdSinglePlyChrSelectGC__sub_80132F2C(M2C_UNK, M2C_UNK);
M2C_UNK clear_selected_and_update_entry__14TWindowSubItemFPv(void *);

void handle_confirm_window__22TQuestVmDownLoadServerFPv(void *arg0) {
    s32 temp_r3;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x290) != 0U) {
        if (is_visible__17TWindowSubComCardFPv(M2C_FIELD(arg0, u32 *, 0x290)) != 0) {
            temp_r3 = TWindowSubComCard__sub_80265BF8(M2C_FIELD(arg0, u32 *, 0x290));
            if (temp_r3 == 0) {
                if ((u32) M2C_FIELD(arg0, u32 *, 0x290) != 0U) {
                    TWindow__close(M2C_FIELD(arg0, void **, 0x290));
                    M2C_FIELD(arg0, u32 *, 0x290) = 0U;
                }
                M2C_FIELD(arg0, s32 *, 0x2A0) = 7;
                return;
            }
            if (temp_r3 == 1) {
                if ((u32) M2C_FIELD(arg0, u32 *, 0x290) != 0U) {
                    TWindow__close(M2C_FIELD(arg0, void **, 0x290));
                    M2C_FIELD(arg0, u32 *, 0x290) = 0U;
                }
                if ((u32) M2C_FIELD(arg0, u32 *, 0x28C) != 0U) {
                    clear_selected_and_update_entry__14TWindowSubItemFPv(M2C_FIELD(arg0, void **, 0x28C));
                }
                update_state__13TAdMcSelectGCFv();
                TQuestVmDownLoadServer__sub_801F6E08(arg0, TAdSinglePlyChrSelectGC__sub_80132F2C(0x29, 1), 1);
                M2C_FIELD(arg0, s32 *, 0x2A0) = 4;
                return;
            }
            goto block_12;
        }
block_12:
        if (get_status_flag__17TWindowSubComCardFPv(M2C_FIELD(arg0, u32 *, 0x290)) != 0) {
            if ((u32) M2C_FIELD(arg0, u32 *, 0x290) != 0U) {
                TWindow__close(M2C_FIELD(arg0, void **, 0x290));
                M2C_FIELD(arg0, u32 *, 0x290) = 0U;
            }
            if ((u32) M2C_FIELD(arg0, u32 *, 0x28C) != 0U) {
                clear_selected_and_update_entry__14TWindowSubItemFPv(M2C_FIELD(arg0, void **, 0x28C));
            }
            update_state__13TAdMcSelectGCFv();
            TQuestVmDownLoadServer__sub_801F6E08(arg0, TAdSinglePlyChrSelectGC__sub_80132F2C(0x29, 1), 1);
            M2C_FIELD(arg0, s32 *, 0x2A0) = 4;
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801F7D50
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void open__22TQuestVmDownLoadServerFPv(void *arg0);
u32 create__13TAdMcSelectGCFPv(s32);
M2C_UNK TQuestVmDownLoadServer__sub_801F6E08(void *, s32, M2C_UNK);
M2C_UNK disallow_rendering__7TObjectFv(u32);
s32 TAdSinglePlyChrSelectGC__sub_80132F2C(M2C_UNK, M2C_UNK);
M2C_UNK reset_counter__6TSceneFv();

extern u32 lbl_805D55D4;
extern s32 tl_03;

void open__22TQuestVmDownLoadServerFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x29C) == 0U) {
        reset_counter__6TSceneFv();
        u32 temp_r3 = lbl_805D55D4;
        if (temp_r3 != 0U) {
            disallow_rendering__7TObjectFv(temp_r3);
        }
        M2C_FIELD(arg0, u32 *, 0x29C) = create__13TAdMcSelectGCFPv(tl_03);
    }
    M2C_FIELD(arg0, s32 *, 0x2A0) = 4;
    TQuestVmDownLoadServer__sub_801F6E08(arg0, TAdSinglePlyChrSelectGC__sub_80132F2C(0x29, 1), 1);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801F7F84
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void close_window__22TQuestVmDownLoadServerFPv(void *arg0);
M2C_UNK close_message__22TQuestVmDownLoadServerFPv(void *);
M2C_UNK TWindow__close(u32);
M2C_UNK update_state__13TAdMcSelectGCFv();

void close_window__22TQuestVmDownLoadServerFPv(void *arg0) {
    u32 temp_r3;
    M2C_FIELD(arg0, s32 *, 0x2A0) = 2;
    temp_r3 = (u32) M2C_FIELD(arg0, u32 *, 0x290);
    if (temp_r3 != 0U) {
        TWindow__close(temp_r3);
        M2C_FIELD(arg0, u32 *, 0x290) = 0U;
    }
    close_message__22TQuestVmDownLoadServerFPv(arg0);
    M2C_FIELD(arg0, s32 *, 0x22C) = 0;
    if ((u32) M2C_FIELD(arg0, u32 *, 0x29C) != 0U) {
        update_state__13TAdMcSelectGCFv();
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801F830C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 *TQuestVmDownLoadServer__vt0(u8 *arg0, s16 arg1);
M2C_UNK close_message__22TQuestVmDownLoadServerFPv(void *);
M2C_UNK TWindow__close(void *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__7TObjectFv(void *, M2C_UNK);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(void *);
M2C_UNK destroy__17TMedicalCenterMesFPvs(void *, M2C_UNK);
M2C_UNK queue_destruction__7TObjectFv(void *);

extern M2C_UNK __vt__22TQuestVmDownLoadServer[];
extern s32 TQuestVmDownLoadServer__data_805D5F18;
extern s32 TQuestVmDownLoadServer__data_805D5F24;

u8 *TQuestVmDownLoadServer__vt0(u8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = (M2C_UNK *)__vt__22TQuestVmDownLoadServer;
        M2C_FIELD(arg0, void **, 0x1C) = (void *) ((u8 *)__vt__22TQuestVmDownLoadServer + 0x18);
        if ((u32) M2C_FIELD(arg0, u32 *, 0x260) != 0U) {
            safe_free__23TAdSinglePlyChrSelectGCFUi(M2C_FIELD(arg0, void **, 0x260));
            M2C_FIELD(arg0, u32 *, 0x260) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x29C) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x29C));
            M2C_FIELD(arg0, u32 *, 0x29C) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x290) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x290));
            M2C_FIELD(arg0, u32 *, 0x290) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x28C) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x28C));
            M2C_FIELD(arg0, u32 *, 0x28C) = 0U;
        }
        close_message__22TQuestVmDownLoadServerFPv(arg0);
        TQuestVmDownLoadServer__data_805D5F24 = 0;
        TQuestVmDownLoadServer__data_805D5F18 = 0;
        destroy__17TMedicalCenterMesFPvs(arg0 + 0x1C, 0);
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801F9010
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void reset_download__22TQuestVmDownLoadServerFv(void);
M2C_UNK fn_801F9030();

void reset_download__22TQuestVmDownLoadServerFv(void) {
    fn_801F9030();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80219EC4
#include "types.h"

extern "C" {

void TQuestVmDownLoadServer__sub_80219EC4(void* p);

void TQuestVmDownLoadServer__sub_80219EC4(void* p) { *(u16*)((char*)p + 0x70) |= 0x8; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802226D8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 is_idle__22TQuestVmDownLoadServerFPv(void *arg0);

u8 is_idle__22TQuestVmDownLoadServerFPv(void *arg0) {
    return (u8) ((s8) *M2C_FIELD(arg0, u8 **, 0x204) == 0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802226F0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 read_byte__22TQuestVmDownLoadServerFPv(void *arg0);
void TQuestVmDownLoadServer__sub_80222704(void *arg0, s32 arg1);
void TQuestVmDownLoadServer__sub_80222754(void *arg0, s8 arg1);
void TQuestVmDownLoadServer__sub_80222768(void *arg0, s32 arg1, s32 arg2);
M2C_UNK TAdSinglePlyChrSelectGC__sub_8039DCE0(s32, s32);
s32 strlen(s32);

u8 read_byte__22TQuestVmDownLoadServerFPv(void *arg0) {
    u8 *temp_r4;

    temp_r4 = M2C_FIELD(arg0, u8 **, 0x204);
    M2C_FIELD(arg0, u8 **, 0x204) = (u8 *) (temp_r4 + 1);
    return *temp_r4;
}

void TQuestVmDownLoadServer__sub_80222704(void *arg0, s32 arg1) {
    s32 temp_r31;

    temp_r31 = strlen(arg1);
    TAdSinglePlyChrSelectGC__sub_8039DCE0(M2C_FIELD(arg0, s32 *, 0x208), arg1);
    M2C_FIELD(arg0, s32 *, 0x208) = (s32) (M2C_FIELD(arg0, s32 *, 0x208) + temp_r31);
}

void TQuestVmDownLoadServer__sub_80222754(void *arg0, s8 arg1) {
    s8 *temp_r5;

    temp_r5 = M2C_FIELD(arg0, s8 **, 0x208);
    M2C_FIELD(arg0, s8 **, 0x208) = (s8 *) (temp_r5 + 1);
    *temp_r5 = arg1;
}

void TQuestVmDownLoadServer__sub_80222768(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x204) = arg1;
    M2C_FIELD(arg0, s32 *, 0x208) = arg2;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80222814
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 poll_field_20c__22TQuestVmDownLoadServerFPv(void *arg0);
s32 is_ready__18TWindowMessagePageFPv(void *);

s32 poll_field_20c__22TQuestVmDownLoadServerFPv(void *arg0) {
    void *temp_r3 = M2C_FIELD(arg0, void **, 0x20C);
    if (temp_r3 != NULL) {
        return is_ready__18TWindowMessagePageFPv(temp_r3);
    }
    return 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80222848
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void send_message__22TQuestVmDownLoadServerFPvii(void *arg0, s32 arg1, s32 arg2);
void format_and_send_message__22TQuestVmDownLoadServerFPvii(u8 *arg0, s32 arg1, s32 arg2);
s32 TLobby__sub_80222C54(s32);
s32 TLobby__sub_80222CBC(s32);
M2C_UNK TWindowMessagePage__sub_8026AE20(u32, void *, s32);
M2C_UNK TQuestVmDownLoadServer__sub_80222774(void *, s32, void *);
M2C_UNK memset(void *, M2C_UNK, M2C_UNK);

void send_message__22TQuestVmDownLoadServerFPvii(void *arg0, s32 arg1, s32 arg2) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x20C) != 0U) {
        TWindowMessagePage__sub_8026AE20((u32)(M2C_FIELD(arg0, u32 *, 0x20C)), (void *)(TLobby__sub_80222CBC(arg1)), (s32)(arg2 | 0x80));
    }
}

void format_and_send_message__22TQuestVmDownLoadServerFPvii(u8 *arg0, s32 arg1, s32 arg2) {
    s32 temp_r31;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x20C) != 0U) {
        temp_r31 = TLobby__sub_80222C54(arg1);
        memset(arg0 + 4, 0, 0x200);
        TQuestVmDownLoadServer__sub_80222774(arg0, temp_r31, arg0 + 4);
        TWindowMessagePage__sub_8026AE20((u32)(M2C_FIELD(arg0, u32 *, 0x20C)), (void *)(arg0 + 4), (s32)(arg2 | 0x80));
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80222910
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void display_message__22TQuestVmDownLoadServerFPvii(u8 *arg0, s32 arg1, s32 arg2);
M2C_UNK TQuestVmDownLoadServer__sub_80222774(void *, s32, void *);
M2C_UNK TWindowMessagePage__sub_8026AE20(u32, void *, s32);
M2C_UNK memset(void *, M2C_UNK, M2C_UNK);

void display_message__22TQuestVmDownLoadServerFPvii(u8 *arg0, s32 arg1, s32 arg2) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x20C) != 0U) {
        memset(arg0 + 4, 0, 0x200);
        TQuestVmDownLoadServer__sub_80222774(arg0, arg1, arg0 + 4);
        TWindowMessagePage__sub_8026AE20(M2C_FIELD(arg0, u32 *, 0x20C), arg0 + 4, arg2 | 0x80);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8033BC88
#include "types.h"

extern "C" {

void init__22TQuestVmDownLoadServerFPvPvPvPvPv(void* p, void* a1, void* a2, void* a3, void* a4);
int TWindowSubComCard__sub_8033BDB0(void*, void*, void*, void*, void*);
int TWindowSubComCard__sub_8033BF90(void*);

void init__22TQuestVmDownLoadServerFPvPvPvPvPv(void* p, void* a1, void* a2, void* a3, void* a4) { TWindowSubComCard__sub_8033BF90(p); TWindowSubComCard__sub_8033BDB0(p, a1, a2, a3, a4); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8033C22C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TKeyBoardControl__sub_8000F8EC();
s32 TQuestVmDownLoadServer__sub_8006EF6C(s32);
s32 init__22TQuestVmDownLoadServerFPvPvPvPvPv(void *, s32, s32, s32, s32);
s32 poll_memcard_status__15TAdPlayerLoadGCFPv();
s32 TWindowSubComCard__sub_8033C024(void *, s32);
int TWindowSubComCard__sub_8033C178(void* p);
void TWindowSubComCard__sub_8033C198(void);
int TWindowSubComCard__sub_8033C19C(void* p);
void render__16TCheckMemoryCardFv(void);
int update_card_display__17TWindowSubComCardFPvPvPvPvPv(void*, int, int, int, int);
int TWindowSubComCard__sub_8033BF90(void*);

void init_from_keyboard_state__22TQuestVmDownLoadServerFPv(void *arg0) {
    s32 var_r31;
    s32 var_r6;

    if (TKeyBoardControl__sub_8000F8EC() == 0xF) {
        var_r31 = TQuestVmDownLoadServer__sub_8006EF6C(0xA);
        var_r6 = TQuestVmDownLoadServer__sub_8006EF6C(0xE);
        init__22TQuestVmDownLoadServerFPvPvPvPvPv(arg0, var_r31, -2, var_r6, 0);
        return;
    }
    var_r31 = TQuestVmDownLoadServer__sub_8006EF6C(0x62);
    var_r6 = TQuestVmDownLoadServer__sub_8006EF6C(0xE);
    if (M2C_FIELD(arg0, s32 *, 0x28) & 0x20) {
        var_r31 = TQuestVmDownLoadServer__sub_8006EF6C(0x6D);
        var_r6 = TQuestVmDownLoadServer__sub_8006EF6C(0xE);
    }
    init__22TQuestVmDownLoadServerFPvPvPvPvPv(arg0, var_r31, -2, var_r6, 0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803E5668
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TQuestVmDownLoadServer__sub_803E5668(void);

s32 TQuestVmDownLoadServer__sub_803E5668(void) {
    return -1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803E6F40
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_buffer_size__22TQuestVmDownLoadServerFv(void);

s32 get_buffer_size__22TQuestVmDownLoadServerFv(void) {
    return 0x48;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803E719C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TQuestVmDownLoadServer__sub_803E719C(u8 arg0, s32 arg1);

s32 TQuestVmDownLoadServer__sub_803E719C(u8 arg0, s32 arg1) {
    return arg0 | ((arg1 & 0x100) + 0x2400);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803E7B8C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_active__22TQuestVmDownLoadServerFv(void);

extern u8 *lbl_805D7858;

void set_active__22TQuestVmDownLoadServerFv(void) {
    M2C_FIELD(lbl_805D7858, s32 *, 4) = 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803E8788
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TQuestVmDownLoadServer__sub_803E8788(void);

s32 TQuestVmDownLoadServer__sub_803E8788(void) {
    return -1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803E8918
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TQuestVmDownLoadServer__sub_803E8918(void);

extern s8 lbl_805D7868;

void TQuestVmDownLoadServer__sub_803E8918(void) {
    lbl_805D7868 = 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803EC8A0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_download_command__22TQuestVmDownLoadServerFUsi(u16 arg0, s32 arg1);

s32 is_download_command__22TQuestVmDownLoadServerFUsi(u16 arg0, s32 arg1) {
    if ((arg1 != 0) && (arg0 == 0x213C)) {
        return 1;
    }
    if ((s32) (arg0 & 0xFF00) == 0x2500) {
        return 1;
    }
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803ECCE8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_sjis_lead_byte__22TQuestVmDownLoadServerFUc(u8 arg0);

s32 is_sjis_lead_byte__22TQuestVmDownLoadServerFUc(u8 arg0) {
    if ((arg0 < 0x81U) || (arg0 > 0xFCU) || ((arg0 >= 0xA0U) && (arg0 < 0xE0U))) {
        return 0;
    }
    return 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803ECFC0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void push_download_entry__22TQuestVmDownLoadServerFPv(M2C_UNK *arg0);

extern s32 lbl_805D78AC;
extern M2C_UNK *lbl_805D78B0;

void push_download_entry__22TQuestVmDownLoadServerFPv(M2C_UNK *arg0) {
    if (arg0 != NULL) {
        *arg0 = (long) (lbl_805D78B0);
        lbl_805D78B0 = arg0;
        lbl_805D78AC += 1;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803EED94
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_download_state__22TQuestVmDownLoadServerFv(void);

extern s32 lbl_805D7900;

s32 get_download_state__22TQuestVmDownLoadServerFv(void) {
    return lbl_805D7900;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803F0BD8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TQuestVmDownLoadServer__sub_803F0BD8(void);
s32 TQuestVmDownLoadServer__sub_803F0BE0(void);

s32 TQuestVmDownLoadServer__sub_803F0BD8(void) {
    return 0;
}

s32 TQuestVmDownLoadServer__sub_803F0BE0(void) {
    return 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803F0BE8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TQuestVmDownLoadServer__sub_803F0BE8(u8 *arg0);

extern u32 lbl_805D7924;
extern s32 lbl_805D7928;

void TQuestVmDownLoadServer__sub_803F0BE8(u8 *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 4) == (u32) lbl_805D7924) {
        lbl_805D7928 = 0;
    }
}

}
#endif
#endif
