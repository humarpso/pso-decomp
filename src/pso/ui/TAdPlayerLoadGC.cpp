#include "pso/TAdPlayerLoadGC.h"

TAdPlayerLoadGC::~TAdPlayerLoadGC() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
s32 get_instance__15TAdPlayerLoadGCFv();
void set_state__15TAdPlayerLoadGCFi(int);
s32 TAdPlayerLoadGC__sub_801E0D8C(int);
s32 get_load_result__15TAdPlayerLoadGCFv(int);
s32 TAdPlayerLoadGC__sub_801E1B50(int);
s32 TAdPlayerLoadGC__sub_801E1E38(int);
s32 check_memcard_status__15TAdPlayerLoadGCFi(int);
s32 TAdPlayerLoadGC__sub_801E2048(int, void *);
s32 TAdPlayerLoadGC__sub_801FD770();
s32 TAdPlayerLoadGC__sub_801FD814();
s32 TAdSinglePlyChrSelectGC__sub_801FEB84();
s32 TAdSinglePlyChrSelectGC__sub_801FF2D4();
int fn_802D6BDC(void);
void fn_802D6BE4(int a0);
extern M2C_UNK lbl_804C88C0[];
extern M2C_UNK lbl_804C8914[];
void run_task__15TAdPlayerLoadGCFv(u8 *arg0);
}

extern "C" {

void *TAdPlayerLoadGC__sub_802D655C(void *arg0, s16 arg1);
void *__ct__15TAdPlayerLoadGCFv(void *arg0, void *arg1, void *arg2);
int fn_802D6BDC(void);
void fn_802D6BE4(int a0);
void render__15TAdPlayerLoadGCFv(void);
void __ct__7TObjectFP7TObject(void *);
void free_obj_heap__10TObjPlayerFPv(void *);
void item_equip_variant_deleting_dtor_80120CF8(void *, int);
void set_state__15TAdPlayerLoadGCFi(int);

extern M2C_UNK lbl_804E24F0[];

void *TAdPlayerLoadGC__sub_802D655C(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804E24F0;
        item_equip_variant_deleting_dtor_80120CF8(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

void render__15TAdPlayerLoadGCFv(void) {  }

extern M2C_UNK __vt__15TAdPlayerLoadGC[];
extern void *lbl_805D3F48;

void run_task__15TAdPlayerLoadGCFv(u8 *arg0) {
    u32 temp_r0;
    fn_802D6BE4((int) (M2C_FIELD(arg0, u32 *, 0x1C)));
    if (TAdPlayerLoadGC__sub_801E1E38((int) (0)) == 0) {
        M2C_FIELD(arg0, u32 *, 0x1C) = 0U;
    }
    temp_r0 = M2C_FIELD(arg0, u32 *, 0x1C);
    switch (temp_r0) {
    case 0:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x20) == 2) {
            if ((TAdPlayerLoadGC__sub_801E1B50((int) (1)) == 0) && (TAdPlayerLoadGC__sub_801E1E38((int) (0)) != 0)) {
                M2C_FIELD(arg0, u32 *, 0x1C) = 1U;
            }
        } else if (TAdPlayerLoadGC__sub_801E1E38((int) (0)) != 0) {
            M2C_FIELD(arg0, u32 *, 0x1C) = 1U;
        }
        break;
    case 1:
        if ((TAdPlayerLoadGC__sub_801E0D8C((int) (0)) != 0) || ((u32)get_load_result__15TAdPlayerLoadGCFv((int) (0)) != 0xFFFFFF83U)) {
            M2C_FIELD(arg0, u32 *, 0x1C) = 2U;
        }
        break;
    case 2:
        if ((TAdPlayerLoadGC__sub_801E0D8C((int) (0)) != 0) || ((u32)get_load_result__15TAdPlayerLoadGCFv((int) (0)) != 0xFFFFFF21U)) {
            M2C_FIELD(arg0, u32 *, 0x1C) = 3U;
        }
    case 3:
        if (TAdPlayerLoadGC__sub_801E0D8C((int) (0)) != 0) {
            M2C_FIELD(arg0, u32 *, 0x1C) = 4U;
        }
        break;
    case 4:
        if (check_memcard_status__15TAdPlayerLoadGCFi((int) (0)) == 0) {
            M2C_FIELD(arg0, u32 *, 0x1C) = 5U;
        }
        break;
    case 5:
        if ((u32)TAdPlayerLoadGC__sub_801E2048((int) (0), (void *) (lbl_804C88C0)) != 0xFFFFFF41U) {
            M2C_FIELD(arg0, u32 *, 0x1C) = 6U;
        }
        break;
    case 6:
        if ((TAdPlayerLoadGC__sub_801E2048((int) (0), (void *) (lbl_804C88C0)) == 0) && (get_instance__15TAdPlayerLoadGCFv() == 0)) {
            M2C_FIELD(arg0, u32 *, 0x1C) = 7U;
        }
        break;
    case 7:
        if ((u32)TAdPlayerLoadGC__sub_801E2048((int) (0), (void *) (lbl_804C8914)) != 0xFFFFFF41U) {
            M2C_FIELD(arg0, u32 *, 0x1C) = 8U;
        }
        break;
    case 8:
        if ((u32)TAdSinglePlyChrSelectGC__sub_801FF2D4() != 0xFFFFFF05U) {
            M2C_FIELD(arg0, u32 *, 0x1C) = 9U;
        }
        break;
    case 9:
        if (get_instance__15TAdPlayerLoadGCFv() == 0) {
            M2C_FIELD(arg0, u32 *, 0x1C) = 0xAU;
        }
        break;
    case 10:
        if (TAdPlayerLoadGC__sub_801FD770() != 1) {
            M2C_FIELD(arg0, u32 *, 0x1C) = 0xBU;
        }
        break;
    case 11:
        if (TAdPlayerLoadGC__sub_801FD770() != 5) {
            M2C_FIELD(arg0, u32 *, 0x1C) = 0xCU;
        }
        break;
    case 12:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x20) == 1) {
            M2C_FIELD(arg0, u32 *, 0x1C) = 0xDU;
        }
        break;
    case 13:
        if (TAdPlayerLoadGC__sub_801E1E38((int) (1)) == 0) {
            M2C_FIELD(arg0, u32 *, 0x1C) = 0xDU;
        } else {
            M2C_FIELD(arg0, u32 *, 0x1C) = 0xEU;
        }
        break;
    case 14:
        if (TAdPlayerLoadGC__sub_801E1E38((int) (1)) == 0) {
            M2C_FIELD(arg0, u32 *, 0x1C) = 0xDU;
        } else if ((TAdPlayerLoadGC__sub_801E0D8C((int) (1)) != 0) || ((u32)get_load_result__15TAdPlayerLoadGCFv((int) (1)) != 0xFFFFFF83U)) {
            M2C_FIELD(arg0, u32 *, 0x1C) = 0xFU;
        }
        break;
    case 15:
        if (TAdPlayerLoadGC__sub_801E1E38((int) (1)) == 0) {
            M2C_FIELD(arg0, u32 *, 0x1C) = 0xDU;
        } else if ((TAdPlayerLoadGC__sub_801E0D8C((int) (1)) != 0) || ((u32)get_load_result__15TAdPlayerLoadGCFv((int) (1)) != 0xFFFFFF21U)) {
            M2C_FIELD(arg0, u32 *, 0x1C) = 0x10U;
        }
    case 16:
        if (TAdPlayerLoadGC__sub_801E1E38((int) (1)) == 0) {
            M2C_FIELD(arg0, u32 *, 0x1C) = 0xDU;
        } else if (TAdPlayerLoadGC__sub_801E0D8C((int) (1)) != 0) {
            M2C_FIELD(arg0, u32 *, 0x1C) = 0x11U;
        }
        break;
    case 17:
        if (TAdPlayerLoadGC__sub_801E1E38((int) (1)) == 0) {
            M2C_FIELD(arg0, u32 *, 0x1C) = 0xDU;
        } else if (check_memcard_status__15TAdPlayerLoadGCFi((int) (1)) == 0) {
            M2C_FIELD(arg0, u32 *, 0x1C) = 0x12U;
        }
        break;
    case 18:
        if (TAdPlayerLoadGC__sub_801E1E38((int) (1)) == 0) {
            M2C_FIELD(arg0, u32 *, 0x1C) = 0xDU;
        } else if ((u32)TAdPlayerLoadGC__sub_801E2048((int) (1), (void *) (lbl_804C88C0)) != 0xFFFFFF41U) {
            M2C_FIELD(arg0, u32 *, 0x1C) = 0x13U;
        }
        break;
    case 19:
        if (TAdPlayerLoadGC__sub_801E1E38((int) (1)) == 0) {
            M2C_FIELD(arg0, u32 *, 0x1C) = 0xDU;
        } else if ((TAdPlayerLoadGC__sub_801E2048((int) (1), (void *) (lbl_804C88C0)) == 0) && (get_instance__15TAdPlayerLoadGCFv() == 0)) {
            M2C_FIELD(arg0, u32 *, 0x1C) = 0x14U;
        }
        break;
    case 20:
        if (TAdPlayerLoadGC__sub_801E1E38((int) (1)) == 0) {
            M2C_FIELD(arg0, u32 *, 0x1C) = 0xDU;
        } else if ((u32)TAdPlayerLoadGC__sub_801E2048((int) (1), (void *) (lbl_804C8914)) != 0xFFFFFF41U) {
            M2C_FIELD(arg0, u32 *, 0x1C) = 0x15U;
        }
        break;
    case 21:
        if (TAdPlayerLoadGC__sub_801E1E38((int) (1)) == 0) {
            M2C_FIELD(arg0, u32 *, 0x1C) = 0xDU;
        } else if ((TAdPlayerLoadGC__sub_801E2048((int) (1), (void *) (lbl_804C88C0)) == 0) && ((u32)TAdSinglePlyChrSelectGC__sub_801FEB84() != 0xFFFFFF05U)) {
            M2C_FIELD(arg0, u32 *, 0x1C) = 0x16U;
        }
        break;
    case 22:
        if (TAdPlayerLoadGC__sub_801E1E38((int) (1)) == 0) {
            M2C_FIELD(arg0, u32 *, 0x1C) = 0xDU;
        } else if (get_instance__15TAdPlayerLoadGCFv() == 0) {
            M2C_FIELD(arg0, u32 *, 0x1C) = 0x17U;
        }
        break;
    case 23:
        if (TAdPlayerLoadGC__sub_801E1E38((int) (1)) == 0) {
            M2C_FIELD(arg0, u32 *, 0x1C) = 0xDU;
        } else if (TAdPlayerLoadGC__sub_801FD814() != 1) {
            M2C_FIELD(arg0, u32 *, 0x1C) = 0x18U;
        }
        break;
    case 24:
        if (TAdPlayerLoadGC__sub_801E1E38((int) (1)) == 0) {
            M2C_FIELD(arg0, u32 *, 0x1C) = 0xDU;
        } else if (TAdPlayerLoadGC__sub_801FD814() != 5) {
            M2C_FIELD(arg0, u32 *, 0x1C) = 0x19U;
        }
        break;
    case 25:
        if (TAdPlayerLoadGC__sub_801E1E38((int) (1)) == 0) {
            M2C_FIELD(arg0, u32 *, 0x1C) = 0xDU;
        }
        break;
    }
    if (fn_802D6BDC() != 0) {
        set_state__15TAdPlayerLoadGCFi((int) (0));
        M2C_FIELD(arg0, u32 *, 0x1C) = 0U;
    }
}

void *__ct__15TAdPlayerLoadGCFv(void *arg0, void *arg1, void *arg2) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__15TAdPlayerLoadGC;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D3F48;
    M2C_FIELD(arg0, u32 *, 0x1C) = 0;
    M2C_FIELD(arg0, void **, 0x20) = arg2;
    set_state__15TAdPlayerLoadGCFi(0);
    return arg0;
}

    extern int lbl_805D63D0;
int fn_802D6BDC(void) {  return lbl_805D63D0; }

    extern int lbl_805D6AA0;
void fn_802D6BE4(int a0) { lbl_805D6AA0 = a0; }

}
