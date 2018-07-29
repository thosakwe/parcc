add_executable(parcc main.cpp ast/Definition.h ast/Grammar.cpp ast/Grammar.h)

install(TARGETS parcc RUNTIME DESTINATION bin)
