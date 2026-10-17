#include "types.h"
#include "pso/object/TObject_80019A50.h"
#include "pso/ui/TAdSinglePlyChrSelectGC_801FBF54.h"
#include "pso/ui/TAdMultiSaveGC.h"

extern "C" {

void *__ct__12TAdBackTxtGCFv(void *, void *);
void __ct__7TObjectFP7TObject(void *);
void *__ct__9TAdBackGCFv(void *, void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void *__nw__7TObjectFUl(int);

extern s32 __vt__14TAdMultiSaveGC[];

void *__dt__14TAdMultiSaveGCFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__14TAdMultiSaveGC;
        if (*(void **)((s8 *)arg0 + 0x20) != NULL) { queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0x20)); *(s32 *)&((TAdMultiSaveGC *)arg0)->m_20 = 0; }
        if (*(void **)((s8 *)arg0 + 0x24) != NULL) { queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0x24)); *(s32 *)&((TAdMultiSaveGC *)arg0)->m_24 = 0; }
        if (*(void **)((s8 *)arg0 + 0x2C) != NULL) { queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0x2C)); *(s32 *)&((TAdMultiSaveGC *)arg0)->m_2c = 0; }
        if (*(void **)((s8 *)arg0 + 0x28) != NULL) { queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0x28)); *(s32 *)&((TAdMultiSaveGC *)arg0)->m_28 = 0; }
        if (*(void **)((s8 *)arg0 + 0x30) != NULL) { queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0x30)); *(s32 *)&((TAdMultiSaveGC *)arg0)->m_30 = 0; }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern void *TAdMultiSaveGC__name;

void *TAdMultiSaveGC__ct(void *arg0) {
    void *o;
    void *o2;
    __ct__7TObjectFP7TObject(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__14TAdMultiSaveGC;
    *(void * *)&((TAdMultiSaveGC *)arg0)->m_name = TAdMultiSaveGC__name;
    ((TAdMultiSaveGC *)arg0)->m_1c = 0;
    ((TAdMultiSaveGC *)arg0)->m_20 = 0;
    ((TAdMultiSaveGC *)arg0)->m_24 = 0;
    ((TAdMultiSaveGC *)arg0)->m_28 = 0;
    ((TAdMultiSaveGC *)arg0)->m_2c = 0;
    ((TAdMultiSaveGC *)arg0)->m_30 = 0;
    o = __nw__7TObjectFUl(0x24);
    if (o != NULL) {
        __ct__9TAdBackGCFv(o, arg0);
    }
    o2 = __nw__7TObjectFUl(0x28);
    if (o2 != NULL) {
        __ct__12TAdBackTxtGCFv(o2, arg0);
    }
    copy_chr_slots_from_request__23TAdSinglePlyChrSelectGCFv();
    return arg0;
}

}
