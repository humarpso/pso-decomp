#include "types.h"

extern "C" {

int fn_80072188(void*);
int fn_802A1544(void*);
int fn_802A1588(void*);
int fn_802A15BC(void*);
int fn_802A1668(void*);
void fn_802A14E4(void* p);

void fn_802A14E4(void* p) { *(unsigned char*)((char*)p + 0x3) = 0; *(unsigned char*)((char*)p + 0x2) = 0; *(unsigned char*)((char*)p + 0x1) = 0; *(unsigned char*)(p) = 0; fn_80072188(p); fn_802A1668((char*)p + 0x34c); fn_802A15BC((char*)p + 0x370); fn_802A1588((char*)p + 0x3c0); fn_802A1544(p); }

}
