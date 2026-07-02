#include "types.h"

extern "C" {

void TAdMcSelectGC__sub_8032A0F0(void);
void TAdMcSelectGC__sub_8032A118(void);
void TAdMcSelectGC__sub_8032A140(void* p);
int TAdMcSelectGC__sub_8032A14C(void);
int TAdMcSelectCursorGC__sub_8032A668(void);
int TAdMcSelectCursorGC__sub_8032A6A4(void);
int TAdMcSelectMcGC__sub_8032AA54(void);
int TAdMcSelectMcGC__sub_8032AA90(void);
int fn_802C78EC(void);
int fn_802C7920(void);

void TAdMcSelectGC__sub_8032A0F0(void) { fn_802C78EC(); TAdMcSelectMcGC__sub_8032AA54(); TAdMcSelectCursorGC__sub_8032A668(); }
void TAdMcSelectGC__sub_8032A118(void) { TAdMcSelectCursorGC__sub_8032A6A4(); TAdMcSelectMcGC__sub_8032AA90(); fn_802C7920(); }
void TAdMcSelectGC__sub_8032A140(void* p) { *(s32*)((char*)p + 0x1c) = 0; }

    extern int lbl_805D6C94;
int TAdMcSelectGC__sub_8032A14C(void) {  return lbl_805D6C94; }

}
