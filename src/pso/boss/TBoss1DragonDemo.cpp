#ifndef PSO_CLASS_PACKAGE
#include "pso/TBoss1DragonDemo.h"

TBoss1DragonDemo::~TBoss1DragonDemo() {}
#else
#if PSO_CLASS_PACKAGE == 0x8002B68C
#include "types.h"

extern "C" {

void TBoss1DragonDemo__sub_8002B68C(void);
void TBoss1DragonDemo__sub_8002B690(void);
void render__16TBoss1DragonDemoFv(void);

void TBoss1DragonDemo__sub_8002B68C(void) {  }
void TBoss1DragonDemo__sub_8002B690(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8002B694
#include "types.h"

extern "C" {

void TBoss1DragonDemo__sub_8002B68C(void);
void TBoss1DragonDemo__sub_8002B690(void);
void render__16TBoss1DragonDemoFv(void);

void render__16TBoss1DragonDemoFv(void) {  }

}
#endif
#endif
