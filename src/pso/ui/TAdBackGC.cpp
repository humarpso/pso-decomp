#include "types.h"

extern "C" {

int TAdBackGC__sub_8001C5A0(void* p, int a1, int a2);
int render_logo_with_default(void* p, int a1, int a2);

int draw_title_background_quads(void*, int, int, int);

int TAdBackGC__sub_8001C5A0(void* p, int a1, int a2) { return draw_title_background_quads(p, a1, a2, 1); }
int render_logo_with_default(void* p, int a1, int a2) { return draw_title_background_quads(p, a1, a2, 0); }

}
