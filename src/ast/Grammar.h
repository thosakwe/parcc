// Copyright (c) 2018, Tobechukwu Osakwe.
//
// All rights reserved.
//
// Use of this source code is governed by a
// GPLv3-style license that can be found in the LICENSE file.
#ifndef PARCC_GRAMMAR_H
#define PARCC_GRAMMAR_H

#include <vector>
#include "Definition.h"

namespace parcc
{
    class Grammar
    {
    public:
        Grammar() = default;

        Grammar(const Grammar &other) = delete;

        Grammar(const Grammar &&other) = delete;

        ~Grammar();

        const std::vector<Definition *> &GetDefinitions() const;

        void AddDefinition(const Definition *definition);

    private:
        std::vector<Definition *> definitions;
    };
}

#endif //PARCC_GRAMMAR_H
