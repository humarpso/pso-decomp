#include "types.h"
#include "pso/ui/TAdLoadQuestGC_80309788.h"
#include "pso/ui/TAdLoadQuestGC.h"

extern "C" {

void *TAdLdQuestPrtGC__ct(void *, void *);
void get_or_create_cell__14TAdLoadQuestGCFii(void *, int);
void get_or_create_line__14TAdLoadQuestGCFii(void *, int);
void get_or_create_prt_txt__14TAdLoadQuestGCFii(void *, int);
void __ct__7TObjectFP7TObject(void *);
void *__nw__7TObjectFUl(int);

extern s32 __vt__14TAdLoadQuestGC[];
extern void *TAdLoadQuestGC__class_name;

void *TAdLoadQuestGC__ct(void *arg0) {
    void *o;
    __ct__7TObjectFP7TObject(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__14TAdLoadQuestGC;
    *(void * *)&((TAdLoadQuestGC *)arg0)->m_name = TAdLoadQuestGC__class_name;
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
    *(void * *)&((TAdLoadQuestGC *)arg0)->quest_display = o;
    return arg0;
}

void TAdLoadQuestGC__sub_8030984C(void) {  }
void TAdLoadQuestGC__sub_80309850(void) {  }

}
