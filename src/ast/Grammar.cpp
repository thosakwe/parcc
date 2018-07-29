// Copyright (c) 2018, Tobechukwu Osakwe.
//
// All rights reserved.
//
// Use of this source code is governed by a
// GPLv3-style license that can be found in the LICENSE file.
#include "Grammar.h"

parcc::Grammar::~Grammar() {
    for (auto *definition : definitions) {
        delete definition;
    }

    definitions.clear();
}

const std::vector<Definition *> &parcc::Grammar::GetDefinitions() const {
    return definitions;
}

void parcc::Grammar::AddDefinition(const parcc::Definition *definition) {
    definitions.push_back(definition);
}
