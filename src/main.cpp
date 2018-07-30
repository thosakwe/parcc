// Copyright (c) 2018, Tobechukwu Osakwe.
//
// All rights reserved.
//
// Use of this source code is governed by a
// GPLv3-style license that can be found in the LICENSE file.
#include <antlr4-runtime.h>
#include <fstream>
#include <iostream>
#include "parcc_grammar/ParccLexer.h"
#include "parcc_grammar/ParccParser.h"

int main(int argc, const char **argv) {
    const char *filename = nullptr;
    const char *outputFilename = nullptr;

    for (int i = 1; i < argc; i++) {
        auto *arg = argv[i];

        if (i < argc - 1) {
            auto *next = argv[i + 1];

            if (strcmp(arg, "--out") == 0 || strcmp(arg, "-o") == 0) {
                outputFilename = next;
                i++;
                continue;
            }
        }

        if (strcmp(arg, "--help") == 0 || strcmp(arg, "-h") == 0) {
            // TODO: Print help
            return 0;
        } else {
            filename = arg;
        }
    }

    if (filename == nullptr) {
        std::cerr << "fatal error: no input file" << std::endl;
        return 1;
    }

    antlr4::ANTLRInputStream inputStream;

    if (strcmp(filename, "-") == 0) {
        inputStream.load(std::cin);
    } else {
        std::ifstream ifs(filename);

        if (!ifs) {
            std::cerr << "fatal error: could not open file" << std::endl;
            return 1;
        }

        inputStream.load(ifs);
    }

    parcc_grammar::ParccLexer lexer(&inputStream);
    antlr4::CommonTokenStream tokenStream(&lexer);
    parcc_grammar::ParccParser parser(&tokenStream);
    auto *grammar = parser.grammarUnit();

    if (parser.getNumberOfSyntaxErrors() > 0) {
        std::cerr << "fatal error: syntax error(s) occurred; please correct them" << std::endl;
        return 1;
    }

    if (grammar == nullptr) {
        std::cerr << "fatal error: could not parse file" << std::endl;
        return 1;
    }

    if (grammar->definition().empty()) {
        std::cerr << "fatal error: grammar is empty" << std::endl;
    }

    return 0;
}