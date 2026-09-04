#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 alloc_global_buffer(void);
s32 buffer_init(void);
s32 free__23TAdSinglePlyChrSelectGCFv(void);
s32 free_buffer__23TAdSinglePlyChrSelectGCFv(void);
void free_callbacks__23TAdSinglePlyChrSelectGCFv(void);
s32 free_data__23TAdSinglePlyChrSelectGCFv(void);
s32 get_player_count__23TAdSinglePlyChrSelectGCFv(void);
int get_serial_access_field_118__23TAdSinglePlyChrSelectGCFPv(void* p);
s32 increment_frame__23TAdSinglePlyChrSelectGCFv(void);
s32 init_and_register__23TAdSinglePlyChrSelectGCFi(s32 arg0);
s32 init_buffer(void);
void init_timestamped_data(void);
s32 update_elapsed_time__23TAdSinglePlyChrSelectGCFPv(void *arg0);
M2C_UNK DateToSeconds__FP9DateStampPi(M2C_UNK *, s32 *);
s32 TAdSinglePlyChrSelectGC__sub_801FC900();
M2C_UNK TAdSinglePlyChrSelectGC__sub_80200690(s32, s32);
u32 TAdSinglePlyChrSelectGC__sub_80201204(s32, M2C_UNK);
void __dl__FPv(void*);
u32 alloc__22TQuestVmDownLoadServerFPv(s32);
s32 alloc__23TAdSinglePlyChrSelectGCFPv(M2C_UNK);
M2C_UNK getDateStamp__FP9DateStamp(M2C_UNK *);
int get_field_118__22TAdEnterSerialAccessGCFv(void*);
u32 get_type__23TAdSinglePlyChrSelectGCFPv(s32);
M2C_UNK init_slots__23TAdSinglePlyChrSelectGCFv();
M2C_UNK memset(M2C_UNK, s32, s32);
void register_callback__23TAdSinglePlyChrSelectGCFis(void*, int);
void safe_free__23TAdSinglePlyChrSelectGCFUi(void*);
M2C_UNK set_id__23TAdSinglePlyChrSelectGCFPvi(s32, M2C_UNK);
M2C_UNK set_save_slot__23TAdSinglePlyChrSelectGCFi(M2C_UNK);

extern void *lbl_805D5F64;

s32 increment_frame__23TAdSinglePlyChrSelectGCFv(void) {
    if ((void *) lbl_805D5F64 != NULL) {
        M2C_FIELD(lbl_805D5F64, s32 *, 0x14) = (s32) (M2C_FIELD(lbl_805D5F64, s32 *, 0x14) + 1);
        return M2C_FIELD(lbl_805D5F64, s32 *, 0x14);
    }
    return 0;
}

extern void *lbl_805D5F64;

s32 get_player_count__23TAdSinglePlyChrSelectGCFv(void) {
    if ((void *) lbl_805D5F64 != NULL) {
        return M2C_FIELD(lbl_805D5F64, s32 *, 4);
    }
    return 0;
}

extern M2C_UNK lbl_80513904[];

s32 update_elapsed_time__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    M2C_UNK sp10[4];
    s32 spC;
    s32 sp8;

    if (arg0 != NULL) {
        DateToSeconds__FP9DateStampPi((M2C_UNK *)(lbl_80513904), (s32 *)(&spC));
        getDateStamp__FP9DateStamp(sp10);
        DateToSeconds__FP9DateStampPi((M2C_UNK *)(sp10), (s32 *)(&sp8));
        M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) + (sp8 - spC));
        return M2C_FIELD(arg0, s32 *, 0xC);
    }
    return 0;
}

s32 init_and_register__23TAdSinglePlyChrSelectGCFi(s32 arg0) {
    s32 var_r29;
    u32 temp_r30;
    u32 temp_r31;

    var_r29 = alloc__23TAdSinglePlyChrSelectGCFPv(0x1156C);
    if (var_r29 != 0) {
        var_r29 = TAdSinglePlyChrSelectGC__sub_801FC900();
    }
    TAdSinglePlyChrSelectGC__sub_80200690(var_r29, arg0);
    temp_r30 = get_type__23TAdSinglePlyChrSelectGCFPv(var_r29);
    set_id__23TAdSinglePlyChrSelectGCFPvi(var_r29, 0);
    temp_r31 = TAdSinglePlyChrSelectGC__sub_80201204(var_r29, 0x1156C);
    register_callback__23TAdSinglePlyChrSelectGCFis((void*)(var_r29), (int)(1));
    if (temp_r30 == temp_r31) {
        return 1;
    }
    return 0;
}

extern s32 lbl_805D5F68;

void init_timestamped_data(void) {
    char sp8[0x18];

    init_slots__23TAdSinglePlyChrSelectGCFv();
    memset((M2C_UNK)(lbl_805D5F68), (s32)(0), (s32)(0xE28C));
    getDateStamp__FP9DateStamp((M2C_UNK *) sp8);
    DateToSeconds__FP9DateStampPi((M2C_UNK *)((M2C_UNK *) sp8), (s32 *)(lbl_805D5F68 + 0xE284));
    set_save_slot__23TAdSinglePlyChrSelectGCFi(0);
}

extern u32 lbl_805D5F98;

s32 free_buffer__23TAdSinglePlyChrSelectGCFv(void) {
    if ((u32) lbl_805D5F98 != 0U) {
        safe_free__23TAdSinglePlyChrSelectGCFUi((void*)lbl_805D5F98);
        lbl_805D5F98 = 0U;
        return 1;
    }
    return 0;
}

extern u32 lbl_805D5F9C;

s32 free_data__23TAdSinglePlyChrSelectGCFv(void) {
    if ((u32) lbl_805D5F9C != 0U) {
        safe_free__23TAdSinglePlyChrSelectGCFUi((void*)lbl_805D5F9C);
        lbl_805D5F9C = 0U;
        return 1;
    }
    return 0;
}

extern s32 lbl_805D5F88;
extern u32 lbl_805D5F98;

s32 buffer_init(void) {
    s32 temp_r31;

    if ((u32) lbl_805D5F98 == 0U) {
        temp_r31 = lbl_805D5F88 << 0xD;
        lbl_805D5F98 = alloc__22TQuestVmDownLoadServerFPv(temp_r31);
        memset((M2C_UNK)(lbl_805D5F98), (s32)(0), (s32)(temp_r31));
        return 1;
    }
    return 0;
}

extern s32 lbl_805D5F90;
extern u32 lbl_805D5F9C;

s32 alloc_global_buffer(void) {
    s32 temp_r31;

    if ((u32) lbl_805D5F9C == 0U) {
        temp_r31 = lbl_805D5F90 << 0xD;
        lbl_805D5F9C = alloc__22TQuestVmDownLoadServerFPv(temp_r31);
        memset((M2C_UNK)(lbl_805D5F9C), (s32)(0), (s32)(temp_r31));
        return 1;
    }
    return 0;
}

extern u32 lbl_805D5F94;

s32 free__23TAdSinglePlyChrSelectGCFv(void) {
    if ((u32) lbl_805D5F94 != 0U) {
        safe_free__23TAdSinglePlyChrSelectGCFUi((void*)lbl_805D5F94);
        lbl_805D5F94 = 0U;
        return 1;
    }
    return 0;
}

extern s32 lbl_805D5F84;
extern u32 lbl_805D5F94;

s32 init_buffer(void) {
    s32 temp_r31;

    if ((u32) lbl_805D5F94 == 0U) {
        temp_r31 = lbl_805D5F84 << 0xD;
        lbl_805D5F94 = alloc__22TQuestVmDownLoadServerFPv(temp_r31);
        memset((M2C_UNK)(lbl_805D5F94), (s32)(0), (s32)(temp_r31));
        return 1;
    }
    return 0;
}

extern u32 lbl_805D5F5C;
extern u32 lbl_805D5F70;

void free_callbacks__23TAdSinglePlyChrSelectGCFv(void) {
    if ((u32) lbl_805D5F5C != 0U) {
        register_callback__23TAdSinglePlyChrSelectGCFis((void*)((void*)lbl_805D5F5C), (int)(1));
        lbl_805D5F5C = 0U;
    }
    if ((u32) lbl_805D5F70 != 0U) {
        __dl__FPv((void*)lbl_805D5F70);
        lbl_805D5F70 = 0U;
    }
}

int get_serial_access_field_118__23TAdSinglePlyChrSelectGCFPv(void* p) { return get_field_118__22TAdEnterSerialAccessGCFv(p); }

}
