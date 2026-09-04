#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TQuestVmDownLoadServer__sub_800FA904(void *arg0, s16 arg1);
void destroy_instance__22TQuestVmDownLoadServerFv(void);
int get_serial_access__22TQuestVmDownLoadServerFPv(void* p);
int poll_serial_access__22TQuestVmDownLoadServerFPv(void* p);
int update__22TQuestVmDownLoadServerFPv(void* p);
int TAdEnterSerialAccessGC__sub_8032182C(void*);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
M2C_UNK queue_destruction__7TObjectFv(void*);
int update_all__8TFogCtrlFv(void*);

int get_serial_access__22TQuestVmDownLoadServerFPv(void* p) { return TAdEnterSerialAccessGC__sub_8032182C(p); }
int poll_serial_access__22TQuestVmDownLoadServerFPv(void* p) { return TAdEnterSerialAccessGC__sub_8032182C(p); }
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

void destroy_instance__22TQuestVmDownLoadServerFv(void) {
    if ((u32) lbl_805D5390 != 0U) {
        queue_destruction__7TObjectFv((void*)lbl_805D5390);
    }
    lbl_805D5390 = 0U;
}

}
