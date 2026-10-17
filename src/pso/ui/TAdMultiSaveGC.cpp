#include "types.h"

extern "C" {

void *TAdMultiSaveGC__ct(void *arg0);
void *__dt__14TAdMultiSaveGCFv(void *arg0, s16 arg1);
void copy_chr_slots_from_request__23TAdSinglePlyChrSelectGCFv(void);
void *__ct__12TAdBackTxtGCFv(void *, void *);
void __ct__7TObjectFP7TObject(void *);
void *__ct__9TAdBackGCFv(void *, void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void *__nw__7TObjectFUl(int);
void queue_destruction__7TObjectFv(void *);

extern s32 __vt__14TAdMultiSaveGC[];

void *__dt__14TAdMultiSaveGCFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__14TAdMultiSaveGC;
        if (*(void **)((s8 *)arg0 + 0x20) != NULL) { queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0x20)); *(s32 *)((s8 *)arg0 + 0x20) = 0; }
        if (*(void **)((s8 *)arg0 + 0x24) != NULL) { queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0x24)); *(s32 *)((s8 *)arg0 + 0x24) = 0; }
        if (*(void **)((s8 *)arg0 + 0x2C) != NULL) { queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0x2C)); *(s32 *)((s8 *)arg0 + 0x2C) = 0; }
        if (*(void **)((s8 *)arg0 + 0x28) != NULL) { queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0x28)); *(s32 *)((s8 *)arg0 + 0x28) = 0; }
        if (*(void **)((s8 *)arg0 + 0x30) != NULL) { queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0x30)); *(s32 *)((s8 *)arg0 + 0x30) = 0; }
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
    *(void **)((s8 *)arg0 + 0x0) = TAdMultiSaveGC__name;
    *(u32 *)((s8 *)arg0 + 0x1C) = 0;
    *(u32 *)((s8 *)arg0 + 0x20) = 0;
    *(u32 *)((s8 *)arg0 + 0x24) = 0;
    *(u32 *)((s8 *)arg0 + 0x28) = 0;
    *(u32 *)((s8 *)arg0 + 0x2C) = 0;
    *(u32 *)((s8 *)arg0 + 0x30) = 0;
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
