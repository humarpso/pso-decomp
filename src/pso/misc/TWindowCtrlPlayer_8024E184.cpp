#include "types.h"

extern "C" {

int TWindowCtrl__sub_8024DAAC(void*);
int TWindowCtrl__sub_8024DAC4(void*);
int show_active_window__11TWindowCtrlFPv(void*);
int TWindowCtrl__sub_8024DCE8(void*);
int TWindowCtrl__sub_8024DE60(void* a0 = 0);
int TWindowCtrl__sub_8024DF5C(void* a0 = 0);
int TWindowCtrl__sub_8024DFF4(void* a0 = 0);
int fn_8024E0F0(void* a0 = 0);
void run_all_updates__11TWindowCtrlFPv(void* p);
void run_task__17TWindowCtrlPlayerFv(void* p);
void render__17TWindowCtrlPlayerFv(void);

void render__17TWindowCtrlPlayerFv(void) {  }
void run_task__17TWindowCtrlPlayerFv(void* p) { fn_8024E0F0(p); run_all_updates__11TWindowCtrlFPv(p); }

}
