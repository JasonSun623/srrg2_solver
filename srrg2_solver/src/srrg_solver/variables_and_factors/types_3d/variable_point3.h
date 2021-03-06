#pragma once
#include "srrg_solver/solver_core/variable.h"
#include <srrg_geometry/geometry3d.h>

namespace srrg2_solver {
  using namespace srrg2_core;

  // point variable
  struct VariablePoint3 : public Variable_<3, Vector3_> {
    using BaseVariableType = VariablePoint3;

    virtual ~VariablePoint3();
    virtual void setZero() override;

    virtual void applyPerturbation(const Vector3f& pert) override;

    void draw(ViewerCanvasPtr canvas_) const override;

  };

} // namespace srrg2_solver
