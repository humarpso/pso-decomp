#include "pso/boss/TObjDFRecover.h"

TObjDFRecover *TObjDFRecover::create(TObject *parent, u16 id, const f32 *position) {
    return new TObjDFRecover(parent, id, position);
}
