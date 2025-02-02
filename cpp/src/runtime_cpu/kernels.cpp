//
// Copyright 2019 FRAGATA COMPUTER SYSTEMS AG
// Copyright 2014-2018 Intel Corporation
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

//
// Based on neon, Intel(R) Nervana(tm) reference deep learning framework.
// Ported from Python to C++ and partly modified by FRAGATA COMPUTER SYSTEMS AG.
//

#include <cassert>

#include "runtime/arhat.h"
#include "runtime_cpu/arhat.h"
#include "runtime_cpu/arhat_kernels.h"

#include "private.h"

//
//    Random number generation and rounding
//

// commonFrand

float frand() {
    return arhat::cpu::Frand();
}

// commonRound

unsigned short fp32_to_fp16(float val) {
    // not yet implemented
    assert(false);
    return 0;
}

// commonFp16toFp32

float fp16_to_fp32(unsigned short val) {
    // not yet implemented
    assert(false);
    return 0.0f;
}

