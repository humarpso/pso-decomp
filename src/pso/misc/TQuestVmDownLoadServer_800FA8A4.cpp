#include "types.h"
#include "pso/misc/TFogCtrl.h"
#include "pso/misc/TQuestVmDownLoadServer.h"

struct RecoveredGlobal_800FA95C_lbl_8049C700 {
    s32 value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_800FA95C_lbl_80515F48 {
    s32 value;
    u8 remaining[0x24];
};

extern "C" {
void *__nw__7TObjectFUl(int);
extern u32 fog_ctrl_instance;
s32 request_fog__8TFogCtrlFPvii(u32, s32, s32);
extern s32 TFogCtrl__fog_instance_table[];
s32 select_fog__8TFogCtrlFPvii(u32, s32, s32);
extern s32 TFogCtrl__fog_instance_table[];
s32 restore_fog__8TFogCtrlFl(s32, s32);
extern s32 TFogCtrl__fog_instance_table[];
void __ct__7TObjectFP7TObject(void *, void *);
extern s32 lbl_8049C700[];
extern RecoveredGlobal_800FA95C_lbl_80515F48 lbl_80515F48;
extern s32 lbl_805D2B1C;
s32 TFogCtrl__sub_800FAC84(void *p);
extern s32 TFogCtrl__fog_instance_table[];
}

extern "C" {

void *TQuestVmDownLoadServer__sub_800FA904(void *arg0, s16 arg1);
int parse_serial_value__22TAdEnterSerialAccessGCFv(void*);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
s32 queue_destruction__7TObjectFv(void*);
int update_all__8TFogCtrlFv(void*);

int TQuestVmDownLoadServer::get_serial_access() { return parse_serial_value__22TAdEnterSerialAccessGCFv(this); }
int TQuestVmDownLoadServer::poll_serial_access() { return parse_serial_value__22TAdEnterSerialAccessGCFv(this); }
int TQuestVmDownLoadServer::update() { return update_all__8TFogCtrlFv(this); }

extern s32 lbl_8049C700[];

void *TQuestVmDownLoadServer__sub_800FA904(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_8049C700;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern u32 fog_ctrl_instance;

typedef char RecoveredGlobal_800FA95C_lbl_8049C700_size[sizeof(RecoveredGlobal_800FA95C_lbl_8049C700) == 0x18 ? 1 : -1];
typedef char RecoveredGlobal_800FA95C_lbl_80515F48_size[sizeof(RecoveredGlobal_800FA95C_lbl_80515F48) == 0x28 ? 1 : -1];
u8 *TQuestVmDownLoadServer::init_object() {
    u8 *arg0 = (u8 *)this;
    __ct__7TObjectFP7TObject(arg0, &lbl_80515F48.value);
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_800FA95C_lbl_8049C700 *)&lbl_8049C700).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) lbl_805D2B1C;
    return arg0;
}

void TQuestVmDownLoadServer::destroy_instance() {
    if ((u32) fog_ctrl_instance != 0U) {
        queue_destruction__7TObjectFv((void*)fog_ctrl_instance);
    }
    fog_ctrl_instance = 0U;
}
void TFogCtrl::create_instance() {
    void *o;
    o = __nw__7TObjectFUl(0x1C);
    if (o != NULL) {
        o = ((TQuestVmDownLoadServer *)o)->init_object();
    }
    (*(void * *)&fog_ctrl_instance) = o;
}
s32 TFogCtrl::update_all(s32 arg0, s32 arg1) {
    s32 var_r29 = 0;
    s32 *var_r30 = TFogCtrl__fog_instance_table;
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
s32 TFogCtrl::apply_all(s32 arg0, s32 arg1) {
    s32 var_r29 = 0;
    s32 *var_r30 = TFogCtrl__fog_instance_table;
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

s32 TFogCtrl::update_first_active_fog() {
    s32 i;
    for (i = 0; i < 4; i++) {
        if ((void *)((s32 *)&TFogCtrl__fog_instance_table)[i] != NULL) {
            return TFogCtrl__sub_800FAC84((void *)((s32 *)&TFogCtrl__fog_instance_table)[i]);
        }
    }
    return 0;
}

s32 TFogCtrl::update_all(s32 arg0) {
    s32 var_r29;
    s32 var_r31;
    s32 temp_r3;
    var_r29 = 0;
    var_r31 = 0;
    do {
        temp_r3 = *(TFogCtrl__fog_instance_table + var_r31);
        if ((u32) temp_r3 != 0U) {
            restore_fog__8TFogCtrlFl(temp_r3, arg0);
        }
        var_r29 += 1;
        var_r31 += 1;
    } while (var_r29 != 4);
    return 1;
}

}
