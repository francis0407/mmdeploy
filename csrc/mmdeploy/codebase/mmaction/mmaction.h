// Copyright (c) OpenMMLab. All rights reserved.

#ifndef MMDEPLOY_SRC_CODEBASE_MMACTION_MMACTION_H_
#define MMDEPLOY_SRC_CODEBASE_MMACTION_MMACTION_H_

#include "mmdeploy/codebase/common.h"
#include "mmdeploy/core/device.h"
#include "mmdeploy/core/module.h"
#include "mmdeploy/core/serialization.h"

namespace mmdeploy {
namespace mmaction {

struct Label {
  int label_id;
  float score;
  MMDEPLOY_ARCHIVE_MEMBERS(label_id, score);
};

using Labels = std::vector<Label>;

DECLARE_CODEBASE(MMAction, mmaction);
}  // namespace mmaction

MMDEPLOY_DECLARE_REGISTRY(mmaction::MMAction);
}  // namespace mmdeploy

#endif  // MMDEPLOY_SRC_CODEBASE_MMACTION_MMACTION_H_
