// Copyright (c) 2018, Tobechukwu Osakwe.
//
// All rights reserved.
//
// Use of this source code is governed by a
// GPLv3-style license that can be found in the LICENSE file.
#ifndef PARCC_LEXERGENERATOR_H
#define PARCC_LEXERGENERATOR_H

#include <ostream>
#include "parcc_grammar/ParccParser.h"

namespace parcc
{
    class LexerGenerator
    {
    public:
        LexerGenerator(std::ostream &stream);

        LexerGenerator(const LexerGenerator &other) = delete;

        LexerGenerator(const LexerGenerator &&other) = delete;

        std::ostream &GetStream();

        void Generate();

    private:
        std::ostream &stream;
    };
}

#endif //PARCC_LEXERGENERATOR_H
