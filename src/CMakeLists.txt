add_executable(parcc
        main.cpp
        parcc_grammar/ParccLexer.cpp parcc_grammar/ParccLexer.h
        parcc_grammar/ParccParser.cpp parcc_grammar/ParccParser.h)

find_library(ANTLR4 antlr4-runtime)
target_link_libraries(parcc ${ANTLR4})

install(TARGETS parcc RUNTIME DESTINATION bin)
