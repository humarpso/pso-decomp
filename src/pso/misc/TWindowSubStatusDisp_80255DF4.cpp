#include "types.h"
#include "pso/misc/TWindowSubStatusDisp.h"
#include "pso/misc/TWindowHelpItem.h"
#include "pso/misc/TWindowSubMag.h"
#include "pso/ui/TWindowInputNumber.h"

extern "C" {

s16 TWindowSubStatusDisp::get_item_type() { return *(s16*)((char*)this + 0x2fa); }
s16 TWindowSubStatusDisp::get_field_2F8() { return *(s16*)((char*)this + 0x2f8); }
s16 TWindowSubStatusDisp::get_stat() { return *(s16*)((char*)this + 0x2f2); }

s16 TWindowSubStatusDisp::get_value() { return *(s16*)((char*)this + 0x2ce); }

}
