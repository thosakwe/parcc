add_executable(parcc main.cpp ast/Definition.h ast/Grammar.cpp ast/Grammar.h ast/TokenDefinition.cpp ast/TokenDefinition.h ast/Alternative.cpp ast/Alternative.h)

install(TARGETS parcc RUNTIME DESTINATION bin)
