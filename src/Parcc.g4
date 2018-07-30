grammar Parcc;

grammarUnit: definition*;

definition:
    'token' ruleDef #TokenDefinition
    | 'node' ruleDef #NodeDefinition
;

ruleDef: ID ':' alternative+ ';';

alternative:
    ID #ReferenceAlternative
    | STRING #StringLiteralAlternative
    | REGEX #RegularExpressionAlternative
    | 'switch' '{' ruleDef* '}' #SwitchAlternative
    | '(' ruleDef ')' #ParenthesizedAlternative
    | ruleDef '|' ruleDef #OrAlternative
;

WS: [ \n\r\t]+ -> skip;
COMMENT: '#' (~('\n'))* -> skip;
REGEX: '/' (('\\/') | (~('/' | '\n')))+ '/';
STRING: '\'' (('\\\'') | (~('\'' | '\n')))+ '\'' ;
ID: [A-Za-z_] [A-Za-z0-9]*;