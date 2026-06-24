#include "types.h"

extern "C" {

void fn_8032A0F0(void);
void fn_8032A118(void);
void fn_8032A140(void* p);
int fn_802C78EC(void);
int fn_802C7920(void);
int fn_8032A668(void);
int fn_8032A6A4(void);
int fn_8032AA54(void);
int fn_8032AA90(void);

void fn_8032A0F0(void) { fn_802C78EC(); fn_8032AA54(); fn_8032A668(); }
void fn_8032A118(void) { fn_8032A6A4(); fn_8032AA90(); fn_802C7920(); }
void fn_8032A140(void* p) { *(s32*)((char*)p + 0x1c) = 0; }

}
