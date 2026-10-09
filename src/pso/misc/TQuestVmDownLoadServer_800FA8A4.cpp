#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_800FA95C_lbl_8049C700 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_800FA95C_lbl_80515F48 {
    M2C_UNK value;
    u8 remaining[0x24];
};

extern "C" {
void *__nw__7TObjectFUl(int);
extern u32 lbl_805D5390;
void create_instance__8TFogCtrlFv(void);
M2C_UNK request_fog__8TFogCtrlFPvii(u32, s32, s32);
extern M2C_UNK TFogCtrl__fog_instance_table[];
s32 update_all__8TFogCtrlFii(s32 arg0, s32 arg1);
M2C_UNK select_fog__8TFogCtrlFPvii(u32, s32, s32);
extern M2C_UNK TFogCtrl__fog_instance_table[];
s32 apply_all__8TFogCtrlFii(s32 arg0, s32 arg1);
M2C_UNK restore_fog__8TFogCtrlFPvi(M2C_UNK, s32);
extern M2C_UNK TFogCtrl__fog_instance_table[];
s32 update_all__8TFogCtrlFi(s32 arg0);
void __ct__7TObjectFP7TObject(void *, void *);
extern M2C_UNK lbl_8049C700[];
extern RecoveredGlobal_800FA95C_lbl_80515F48 lbl_80515F48;
extern s32 lbl_805D2B1C;
u8 *init_object__22TQuestVmDownLoadServerFPv(u8 *arg0);
s32 TFogCtrl__sub_800FAC84(void *p);
extern M2C_UNK TFogCtrl__fog_instance_table[];
s32 update_first_active_fog__8TFogCtrlFv(void);
}

extern "C" {

void *TQuestVmDownLoadServer__sub_800FA904(void *arg0, s16 arg1);
void destroy_instance__22TQuestVmDownLoadServerFv(void);
int get_serial_access__22TQuestVmDownLoadServerFPv(void* p);
int poll_serial_access__22TQuestVmDownLoadServerFPv(void* p);
int update__22TQuestVmDownLoadServerFPv(void* p);
int parse_serial_value__22TAdEnterSerialAccessGCFv(void*);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
M2C_UNK queue_destruction__7TObjectFv(void*);
int update_all__8TFogCtrlFv(void*);

int get_serial_access__22TQuestVmDownLoadServerFPv(void* p) { return parse_serial_value__22TAdEnterSerialAccessGCFv(p); }
int poll_serial_access__22TQuestVmDownLoadServerFPv(void* p) { return parse_serial_value__22TAdEnterSerialAccessGCFv(p); }
int update__22TQuestVmDownLoadServerFPv(void* p) { return update_all__8TFogCtrlFv(p); }

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

extern u32 lbl_805D5390;

typedef char RecoveredGlobal_800FA95C_lbl_8049C700_size[sizeof(RecoveredGlobal_800FA95C_lbl_8049C700) == 0x18 ? 1 : -1];
typedef char RecoveredGlobal_800FA95C_lbl_80515F48_size[sizeof(RecoveredGlobal_800FA95C_lbl_80515F48) == 0x28 ? 1 : -1];
u8 *init_object__22TQuestVmDownLoadServerFPv(u8 *arg0) {
    __ct__7TObjectFP7TObject(arg0, &lbl_80515F48.value);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_800FA95C_lbl_8049C700 *)&lbl_8049C700).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D2B1C;
    return arg0;
}

void destroy_instance__22TQuestVmDownLoadServerFv(void) {
    if ((u32) lbl_805D5390 != 0U) {
        queue_destruction__7TObjectFv((void*)lbl_805D5390);
    }
    lbl_805D5390 = 0U;
}
void create_instance__8TFogCtrlFv(void) {
    void *o;
    o = __nw__7TObjectFUl(0x1C);
    if (o != NULL) {
        o = init_object__22TQuestVmDownLoadServerFPv((u8 *)(o));
    }
    (*(void * *)&lbl_805D5390) = o;
}
s32 update_all__8TFogCtrlFii(s32 arg0, s32 arg1) {
    s32 var_r29 = 0;
    M2C_UNK *var_r30 = TFogCtrl__fog_instance_table;
    s32 var_r31 = 0;
    do {
        u32 v = (u32)var_r30[var_r31];
        if (v != 0U) {
            request_fog__8TFogCtrlFPvii(v, arg0, arg1);
        }
        var_r29 += 1;
        var_r31 += 1;
    } while (var_r29 != 4);
    return 1;
}
s32 apply_all__8TFogCtrlFii(s32 arg0, s32 arg1) {
    s32 var_r29 = 0;
    M2C_UNK *var_r30 = TFogCtrl__fog_instance_table;
    s32 var_r31 = 0;
    do {
        u32 v = (u32)var_r30[var_r31];
        if (v != 0U) {
            select_fog__8TFogCtrlFPvii(v, arg0, arg1);
        }
        var_r29 += 1;
        var_r31 += 1;
    } while (var_r29 != 4);
    return 1;
}

s32 update_first_active_fog__8TFogCtrlFv(void) {
    s32 i;
    for (i = 0; i < 4; i++) {
        if ((void *)((s32 *)&TFogCtrl__fog_instance_table)[i] != NULL) {
            return TFogCtrl__sub_800FAC84((void *)((s32 *)&TFogCtrl__fog_instance_table)[i]);
        }
    }
    return 0;
}

s32 update_all__8TFogCtrlFi(s32 arg0) {
    s32 var_r29;
    s32 var_r31;
    M2C_UNK temp_r3;
    var_r29 = 0;
    var_r31 = 0;
    do {
        temp_r3 = *(TFogCtrl__fog_instance_table + var_r31);
        if ((u32) temp_r3 != 0U) {
            restore_fog__8TFogCtrlFPvi(temp_r3, arg0);
        }
        var_r29 += 1;
        var_r31 += 1;
    } while (var_r29 != 4);
    return 1;
}

}
