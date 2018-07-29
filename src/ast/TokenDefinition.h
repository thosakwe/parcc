// Copyright (c) 2018, Tobechukwu Osakwe.
//
// All rights reserved.
//
// Use of this source code is governed by a
// GPLv3-style license that can be found in the LICENSE file.
#ifndef PARCC_TOKENDEFINITION_H
#define PARCC_TOKENDEFINITION_H

#include "Definition.h"

namespace parcc
{
    class TokenDefinition : public Definition
    {
    public:
        TokenDefinition(const TokenDefinition &other) = delete;

        TokenDefinition(const TokenDefinition &&other) = delete;
    };
}

#endif //PARCC_TOKENDEFINITION_H
