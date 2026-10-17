#include "types.h"
#include "pso/object/TObjQuestCol_80196B3C.h"
#include "pso/object/TObjQuestColBase.h"
#include "pso/object/TObjQuestCol.h"

extern "C" {

void TObjQuestColBase__ct(void *);
s32 is_within_range__16TObjQuestColBaseFf(f32);

extern s32 __vt__12TObjQuestCol[];
extern void *TObjQuestCol__class_name;

void *TObjQuestCol__ct(void *arg0) {
    TObjQuestColBase__ct(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__12TObjQuestCol;
    *(void * *)&((TObjQuestCol *)arg0)->m_name = TObjQuestCol__class_name;
    return arg0;
}

s32 TObjQuestColBase::update_trigger_state(f32 farg0) {
    if (is_within_range__16TObjQuestColBaseFf(farg0 * farg0) != 0) {
        if ((s32) this->m_b4 != 0) {
            this->m_b4 = 0;
            return 1;
        }
        return 0;
    }
    if ((s32) this->m_b4 != 0) {
        return 2;
    }
    this->m_b4 = 1;
    return 3;
}

}
