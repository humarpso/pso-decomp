#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

int TChCrTagInformation__vt4(void);
void *__dt__19TChCrTagInformationFv(void *arg0, s16 arg1);
int render__19TChCrTagInformationFv(void* p);
void run_task__19TChCrTagInformationFv(void* p);
int TChCrTagInformation__sub_802A1E8C(void*);
int TChCrTag__sub_802A1A00(void*);
int TObjCMAssignMenu__sub_802A1C04(void*);
void __dl__7TObjectFPv(void *);
void __dt__8TChCrTagFv(void *, int);
void fn_803098DC(void);

int render__19TChCrTagInformationFv(void* p) { return TObjCMAssignMenu__sub_802A1C04(p); }

void run_task__19TChCrTagInformationFv(void* p) { TChCrTag__sub_802A1A00(p); TChCrTagInformation__sub_802A1E8C(p); }
int TChCrTagInformation__vt4(void) { return 0; }

extern M2C_UNK __vt__19TChCrTagInformation[];

void *__dt__19TChCrTagInformationFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__19TChCrTagInformation;
        fn_803098DC();
        __dt__8TChCrTagFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
