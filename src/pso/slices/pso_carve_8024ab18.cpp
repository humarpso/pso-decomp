#include "types.h"

extern "C" {

int fn_8024ABDC(void*);
int fn_8024C640(void*);
void fn_8024AB18(void* p);

void fn_8024AB18(void* p) { if (fn_8024C640(p) == 0) { fn_8024ABDC(p); } }

}
