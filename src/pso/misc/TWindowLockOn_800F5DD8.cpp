#include "types.h"
#include "pso/misc/TWindowLockOn.h"
#include "pso/boss/TBoss3Volopt.h"
#include "pso/enemy/TObjEneLappy.h"

s32 TWindowLockOn::get_target_id() { return *(s32*)((char*)this + 0x370); }
