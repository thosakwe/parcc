// Copyright (c) 2018, Tobechukwu Osakwe.
//
// All rights reserved.
//
// Use of this source code is governed by a
// GPLv3-style license that can be found in the LICENSE file.
#ifndef PARCC_ALTERNATIVE_H
#define PARCC_ALTERNATIVE_H

namespace parcc
{
    enum AlternativeType
    {
        IDENTIFIER,
        STRING_LITERAL,
        REGULAR_EXPRESSION,
        OPTIONAL,
        SWITCH,
        OR,
        PARENTHESIZED
    };

    class Alternative
    {
        virtual AlternativeType GetType() = 0;

        template<typename T>
        const T *As() {
            return (const T *) this;
        }
    };
}

#endif //PARCC_ALTERNATIVE_H
