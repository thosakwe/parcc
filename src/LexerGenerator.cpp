// Copyright (c) 2018, Tobechukwu Osakwe.
//
// All rights reserved.
//
// Use of this source code is governed by a
// GPLv3-style license that can be found in the LICENSE file.
#include "LexerGenerator.h"

parcc::LexerGenerator::LexerGenerator(std::ostream &stream) : stream(stream) {

}

std::ostream &parcc::LexerGenerator::GetStream() {
    return stream;
}

void parcc::LexerGenerator::Generate() {

}
