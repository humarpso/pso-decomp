#include "types.h"

extern "C" {
extern u8 lbl_805005A4[];
extern u8 lbl_80500598[];
void *TQuestVmDownLoadServer__sub_8007ECB0(void *arg0);
void *TQuestVmDownLoadServer__sub_8007EC58(void *arg0, s16 arg1);
void __register_global_object(void *obj, void *dtor, void *entry);
void register_global_instance_dtor__22TQuestVmDownLoadServerFv(void);
}

extern "C" {

int TQuestVmDownLoadServer__sub_8007EBDC(void* p);
void *TQuestVmDownLoadServer__sub_8007EC58(void *arg0, s16 arg1);
void *TQuestVmDownLoadServer__sub_8007ECB0(void *arg0);
int alloc__22TQuestVmDownLoadServerFPv(void* p);
void __ct__7TObjectFP7TObject(void *, s32);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
int alloc__23TAdSinglePlyChrSelectGCFPv(void* p);
int fn_803DE864(void*);
s32 xfree__FPv();
int xmalloc__FUl(void*);

int TQuestVmDownLoadServer__sub_8007EBDC(void* p) { return fn_803DE864(p); }
int alloc__22TQuestVmDownLoadServerFPv(void* p) { return xmalloc__FUl(p); }

extern s32 lbl_8048DF58[];

void register_global_instance_dtor__22TQuestVmDownLoadServerFv(void) {
    __register_global_object(TQuestVmDownLoadServer__sub_8007ECB0(lbl_805005A4), (void *)TQuestVmDownLoadServer__sub_8007EC58, lbl_80500598);
}

void *TQuestVmDownLoadServer__sub_8007EC58(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_8048DF58;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern s32 lbl_8048DF58[];

void *TQuestVmDownLoadServer__sub_8007ECB0(void *arg0) {
    __ct__7TObjectFP7TObject(arg0, 0);
    *(s32 **)((s8 *)arg0 + 0x18) = lbl_8048DF58;
    return arg0;
}

}

__declspec(section ".ctors") static void *const __sinit_TQuestVmDownLoadServer_8007EBDC_cpp_ref = (void *)register_global_instance_dtor__22TQuestVmDownLoadServerFv;
