#include "types.h"
#include "pso/misc/TWindowMainMenu.h"

extern "C" {

void TWindowMainMenu__sub_8024E3CC(void);
void TWindowMainMenu__sub_8024E3D0(void);
int TWindowMainMenu__sub_8024E3D4(void* p);
int TWindowMainMenu__sub_8024E3E0(void* p);
int TWindowMainMenu__sub_8024E3F4(void* p);
void TWindowMainMenu__vt4(void);
void TWindowMainMenu__vt6(void);
int update_window_entry_list(void*, void*);
s32 draw_window_tab(s32, s32, s32, f32);
void * get_array_entry__20TWindowSubStatusDispFi(s32 a0 = 0, s32 a1 = 0);
int initialize_subwindow__9TWindowDDFv(void*);
void render_status__14TWindowDepositFl(void *arg0, s32 arg1);

void TWindowMainMenu__sub_8024E3CC(void) {  }
void TWindowMainMenu__sub_8024E3D0(void) {  }
int TWindowMainMenu__sub_8024E3D4(void* p) { return (*(u32*)((char*)p + 0x4c) >> 3) & 0x1; }
int TWindowMainMenu__sub_8024E3E0(void* p) { return *(u32*)((char*)p + 0x4c) & 0x1; }

void TWindowMainMenu__vt4(void) {  }
void TWindowMainMenu__vt6(void) {  }

int TWindowMainMenu__sub_8024E3F4(void* p) { return (*(u16*)((char*)p + 0x1c) >> 6) & 0x1; }
void TWindowMainMenu::set_entry_field_20(s32 arg0, s32 arg1) {
    *(s32 *)((s8 *)(get_array_entry__20TWindowSubStatusDispFi(arg0, 1)) + 0x20) = arg1;
}

}
