#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

int run_task__16TQuestListOnlineFPv(void* p);
int set_field_20__12TQuestListVMFPvi(void*, int);

int run_task__16TQuestListOnlineFPv(void* p) { return set_field_20__12TQuestListVMFPvi(p, 5); }

}
#else
#if PSO_CLASS_PACKAGE == 0x80217560
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int get_selected_quest_id__16TQuestListOnlineFv(void);

extern void *TQuestListOnline__data_805D6194;
extern void *TQuestListOnline__data_805D61E0;

int get_selected_quest_id__16TQuestListOnlineFv(void) {
    if (((void *) TQuestListOnline__data_805D61E0 != NULL) && ((u32) M2C_FIELD(TQuestListOnline__data_805D61E0, u32 *, 0x40) != 0U)) {
        return M2C_FIELD(TQuestListOnline__data_805D6194, u8 *, 1);
    }
    return -1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8021758C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 get_unlocked_tier__16TQuestListOnlineFv(void);
s32 TODoorVoShip__sub_801F44BC(M2C_UNK);
s32 is_flag_set__6TLobbyFv();
s32 TLobby__sub_80071698(M2C_UNK);

extern s32 lbl_805D61F8;

u8 get_unlocked_tier__16TQuestListOnlineFv(void) {
    if (is_flag_set__6TLobbyFv() != 0) {
        switch ((s32) lbl_805D61F8) {
        case 0:
            return (u8) TLobby__sub_80071698(0);
        case 1:
            return (u8) TLobby__sub_80071698(1);
        default:
            return 0U;
        }
    } else {
        if (TODoorVoShip__sub_801F44BC(0x33) != 0) {
            return 4U;
        }
        if (TODoorVoShip__sub_801F44BC(0x2A) != 0) {
            return 3U;
        }
        if (TODoorVoShip__sub_801F44BC(0x20) != 0) {
            return 2U;
        }
        return (u8) (TODoorVoShip__sub_801F44BC(0x17) != 0);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80217654
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void close_windows__16TQuestListOnlineFPv(void *arg0);
M2C_UNK TWindow__close(void *);

void close_windows__16TQuestListOnlineFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x44) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x44));
        M2C_FIELD(arg0, u32 *, 0x44) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x40) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x40));
        M2C_FIELD(arg0, u32 *, 0x40) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x3C) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x3C));
        M2C_FIELD(arg0, u32 *, 0x3C) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x38) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x38));
        M2C_FIELD(arg0, u32 *, 0x38) = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80217754
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 init__16TQuestListOnlineFv(void);
s32 TLobby__sub_8001EEF4();
s32 TLobby__sub_8001EEFC(M2C_UNK *);

extern M2C_UNK lbl_8044BEB0[];
extern s32 TQuestListOnline__data_805D61E4;

s32 init__16TQuestListOnlineFv(void) {
    TQuestListOnline__data_805D61E4 = 0;
    if (TLobby__sub_8001EEF4() != 0) {
        TQuestListOnline__data_805D61E4 = TLobby__sub_8001EEFC(lbl_8044BEB0);
        return 1;
    }
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802177A0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void invoke_callback_2c_and_queue_destruction__16TQuestListOnlineFPv(void *arg0);
void invoke_callback_34_and_queue_destruction__16TQuestListOnlineFPv(void *arg0);
void invoke_callback_28_and_queue_destruction__16TQuestListOnlineFPv(void *arg0);
M2C_UNK queue_destruction__7TObjectFv(void *);

void invoke_callback_2c_and_queue_destruction__16TQuestListOnlineFPv(void *arg0) {
    M2C_UNK (*temp_r12)();

    temp_r12 = M2C_FIELD(arg0, M2C_UNK (**)(), 0x2C);
    if (temp_r12 != NULL) {
        temp_r12();
    }
    queue_destruction__7TObjectFv(arg0);
}

void invoke_callback_34_and_queue_destruction__16TQuestListOnlineFPv(void *arg0) {
    M2C_UNK (*temp_r12)();

    temp_r12 = M2C_FIELD(arg0, M2C_UNK (**)(), 0x34);
    if (temp_r12 != NULL) {
        temp_r12();
    }
    queue_destruction__7TObjectFv(arg0);
}

void invoke_callback_28_and_queue_destruction__16TQuestListOnlineFPv(void *arg0) {
    M2C_UNK (*temp_r12)();

    temp_r12 = M2C_FIELD(arg0, M2C_UNK (**)(), 0x28);
    if (temp_r12 != NULL) {
        temp_r12();
    }
    queue_destruction__7TObjectFv(arg0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802178A0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void invoke_callback_30_and_queue_destruction__16TQuestListOnlineFPv(void *arg0);
M2C_UNK queue_destruction__7TObjectFv(void *);

void invoke_callback_30_and_queue_destruction__16TQuestListOnlineFPv(void *arg0) {
    M2C_UNK (*temp_r12)();

    temp_r12 = M2C_FIELD(arg0, M2C_UNK (**)(), 0x30);
    if (temp_r12 != NULL) {
        temp_r12();
    }
    queue_destruction__7TObjectFv(arg0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80217BA8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void request_quest_list__16TQuestListOnlineFi(s32 arg0);
s32 TLobby__sub_8001EEF4();
s32 TLobby__sub_8001EEFC(M2C_UNK *);
M2C_UNK set_field_20__12TQuestListVMFPvi(s32, M2C_UNK);

extern M2C_UNK lbl_8044BEB0[];
extern s32 TQuestListOnline__data_805D61E4;

void request_quest_list__16TQuestListOnlineFi(s32 arg0) {
    if (TLobby__sub_8001EEF4() != 0) {
        TQuestListOnline__data_805D61E4 = TLobby__sub_8001EEFC(lbl_8044BEB0);
        set_field_20__12TQuestListVMFPvi(arg0, 6);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80218160
#include "types.h"

extern "C" {

void reset_state__16TQuestListOnlineFPv(void* a0);
int set_field_20__12TQuestListVMFPvi(void*, void*);
int fn_801DB6F0(void*);

    extern int TLobby__data_805D5580;
    extern int lbl_805D61E8;
    extern int lbl_805D61EC;
    extern int lbl_805D61F0;
    extern int lbl_805D61F4;
void reset_state__16TQuestListOnlineFPv(void* a0) { fn_801DB6F0((void*)(TLobby__data_805D5580)); lbl_805D61E8 = 0; lbl_805D61F0 = 0; lbl_805D61EC = 0; lbl_805D61F4 = 0; set_field_20__12TQuestListVMFPvi(a0, (void*)12); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8021824C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__dt__16TQuestListOnlineFv(void *arg0, s16 arg1);
M2C_UNK TWindow__close(void *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__15TShopWindowBaseFv(void *, M2C_UNK);

extern M2C_UNK __vt__16TQuestListOnline[];
extern s32 TQuestListOnline__data_805D61E0;

void *__dt__16TQuestListOnlineFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TQuestListOnline;
        if ((u32) M2C_FIELD(arg0, u32 *, 0x38) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x38));
            M2C_FIELD(arg0, u32 *, 0x38) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x3C) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x3C));
            M2C_FIELD(arg0, u32 *, 0x3C) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x40) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x40));
            M2C_FIELD(arg0, u32 *, 0x40) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x44) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x44));
            M2C_FIELD(arg0, u32 *, 0x44) = 0U;
        }
        TQuestListOnline__data_805D61E0 = 0;
        __dt__15TShopWindowBaseFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80218310
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TQuestListOnline__ct(void *arg0, void *arg1, void *arg2, void *arg3);
void __ct__13GameListEntryFv(void *);
void __ct__15TShopWindowBaseFv(void *);
void set_field_20__12TQuestListVMFPvi(void *, int);

extern M2C_UNK __vt__16TQuestListOnline[];
extern void *lbl_805D3688;
void memset(void *, int, int);
extern void * TQuestListOnline__data_805D61E0;
struct VOff_80218310_arg0 { char pad_0[0x4C]; char f_4C[1]; };

void *TQuestListOnline__ct(void *arg0, void *arg1, void *arg2, void *arg3) {
    struct VOff_80218310_arg0 *self = (struct VOff_80218310_arg0 *)arg0;
    __ct__15TShopWindowBaseFv(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TQuestListOnline;
    __ct__13GameListEntryFv(self->f_4C);
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D3688;
    M2C_FIELD(arg0, u32 *, 0x38) = 0;
    M2C_FIELD(arg0, u32 *, 0x3C) = 0;
    M2C_FIELD(arg0, u32 *, 0x40) = 0;
    M2C_FIELD(arg0, u32 *, 0x44) = 0;
    M2C_FIELD(arg0, void **, 0x6C) = arg2;
    M2C_FIELD(arg0, u32 *, 0x48) = 0;
    M2C_FIELD(arg0, u32 *, 0x28) = 0;
    M2C_FIELD(arg0, u32 *, 0x2C) = 0;
    M2C_FIELD(arg0, u32 *, 0x34) = 0;
    M2C_FIELD(arg0, u32 *, 0x68) = 0;
    M2C_FIELD(arg0, void **, 0x24) = arg3;
    memset(self->f_4C, 0, 28);
    set_field_20__12TQuestListVMFPvi(arg0, 0);
    TQuestListOnline__data_805D61E0 = arg0;
    return arg0;
}

}
#endif
#endif
