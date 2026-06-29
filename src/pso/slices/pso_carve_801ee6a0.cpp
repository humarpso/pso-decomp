#include "types.h"

extern "C" {

int fn_801EE6A0(void* p);
int fn_801EE6C0(void* p);
void fn_801EE6E0(void);
void fn_801EE704(void);
int TObjDoor__sub_801A3C0C(void);
int fn_801A3C18(void);
int TObjDoor__sub_801F3754(void);
int fn_801F3760(void);
int TWindowCtrl__sub_8024A4EC(void*);
int TWindowCtrl__sub_8024A530(void*);

int fn_801EE6A0(void* p) { return TWindowCtrl__sub_8024A4EC(p); }
int fn_801EE6C0(void* p) { return TWindowCtrl__sub_8024A530(p); }
void fn_801EE6E0(void) { fn_801A3C18(); TObjDoor__sub_801A3C0C(); }
void fn_801EE704(void) { fn_801F3760(); TObjDoor__sub_801F3754(); }

}
