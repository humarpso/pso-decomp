#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TAdLoadQuestGC__ct(void *arg0);
void TAdLoadQuestGC__sub_8030984C(void);
void TAdLoadQuestGC__sub_80309850(void);
void *TAdLdQuestPrtGC__ct(void *, void *);
void get_or_create_cell__14TAdLoadQuestGCFii(void *, int);
void get_or_create_line__14TAdLoadQuestGCFii(void *, int);
void get_or_create_prt_txt__14TAdLoadQuestGCFii(void *, int);
void __ct__7TObjectFP7TObject(void *);
void *__nw__7TObjectFUl(int);

extern M2C_UNK __vt__14TAdLoadQuestGC[];
extern void *TAdLoadQuestGC__class_name;

void *TAdLoadQuestGC__ct(void *arg0) {
    void *o;
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__14TAdLoadQuestGC;
    M2C_FIELD(arg0, void **, 0x0) = TAdLoadQuestGC__class_name;
    get_or_create_cell__14TAdLoadQuestGCFii(arg0, 0);
    get_or_create_prt_txt__14TAdLoadQuestGCFii(arg0, 0);
    get_or_create_cell__14TAdLoadQuestGCFii(arg0, 1);
    get_or_create_cell__14TAdLoadQuestGCFii(arg0, 2);
    get_or_create_line__14TAdLoadQuestGCFii(arg0, 0);
    get_or_create_line__14TAdLoadQuestGCFii(arg0, 1);
    get_or_create_prt_txt__14TAdLoadQuestGCFii(arg0, 1);
    get_or_create_prt_txt__14TAdLoadQuestGCFii(arg0, 2);
    o = __nw__7TObjectFUl(0x158);
    if (o != NULL) {
        o = TAdLdQuestPrtGC__ct(o, arg0);
    }
    M2C_FIELD(arg0, void **, 0x1C) = o;
    return arg0;
}

void TAdLoadQuestGC__sub_8030984C(void) {  }
void TAdLoadQuestGC__sub_80309850(void) {  }

}
