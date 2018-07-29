// Copyright (c) 2018, Tobechukwu Osakwe.
//
// All rights reserved.
//
// Use of this source code is governed by a
// GPLv3-style license that can be found in the LICENSE file.
#ifndef PARCC_TOPLEVELDEFINITION_H
#define PARCC_TOPLEVELDEFINITION_H

namespace parcc
{
    class Definition
    {
        virtual bool IsTokenDefinition() = 0;

        virtual bool IsNodeDefinition() = 0;
    };
}

#endif //PARCC_TOPLEVELDEFINITION_H
