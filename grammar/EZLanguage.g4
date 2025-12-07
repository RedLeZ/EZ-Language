grammar EZLanguage;

program: (
    statement
    | classDeclaration
    | tryCatchStatement
    | runStatement
)* EOF;

statement: 
        envDeclaration 
        | includeStatement 
        | friendStatement 
        | friendFunctionCall 
        | expressionStatement 
        | variableDeclaration 
        | controlFlowStatement 
        | foreachStatement;

envDeclaration: 'env' IDENTIFIER ';';
includeStatement: 'import' IDENTIFIER ';';
friendStatement: 'friend' IDENTIFIER ':' IDENTIFIER 'as' IDENTIFIER ';';


classDeclaration: accessModifier? 'class' IDENTIFIER '(' ')' ('extends' IDENTIFIER)? ('implements' IDENTIFIER (',' IDENTIFIER)*)? '{' (variableDeclaration | functionDeclaration)* '}';

variableDeclaration: accessModifier? type IDENTIFIER ('=' expression)? ';';

functionDeclaration: accessModifier? type IDENTIFIER '(' parameterList? ')' '{' (statement)* '}';
parameterList: parameter (',' parameter)*;
parameter: type IDENTIFIER;

functionCall: IDENTIFIER '(' argumentList? ')';
friendFunctionCall: IDENTIFIER '.' IDENTIFIER '(' argumentList? ')';
argumentList: expression (',' expression)*;

controlFlowStatement: ifStatement | loopStatement;
ifStatement: 'if' '(' expression ')' '{' statement* '}' ('else if' '(' expression ')' '{' statement* '}')* ('else' '{' statement* '}')?;
loopStatement: ('while' | 'for') '(' expression? ')' '{' statement* '}';
foreachStatement: 'for' IDENTIFIER 'in' IDENTIFIER '{' statement* '}';

tryCatchStatement: 'try' '{' statement* '}' ('catch' '(' IDENTIFIER ')' '{' statement* '}')? ('finally' '{' statement* '}')?;

runStatement: 'run' IDENTIFIER ':' STRING ';';

expressionStatement: expression ';';
expression: primaryExpression (OPERATOR primaryExpression)*;
primaryExpression: IDENTIFIER | literal | functionCall | friendFunctionCall | '(' expression ')';
literal: STRING | NUMBER | BOOLEAN;

accessModifier: 'public' | 'private' | 'protected';

type: baseType ('[]')?;
baseType: 'int' | 'float' | 'boolean' | 'string' | 'void' | mapType;
mapType: 'map' '<' baseType ',' baseType '>';

OPERATOR: '+' | '-' | '*' | '/' | '==' | '!=' | '>' | '<' | '>=' | '<=' | '&&' | '||' | '!' | '&' | '|' | '^' | '~' | '+=' | '-=' | '*=' | '/=';

BOOLEAN: 'true' | 'false';
IDENTIFIER: [a-zA-Z_][a-zA-Z_0-9]*;
STRING: '"' .*? '"';
NUMBER: [0-9]+('.'[0-9]+)?;
LINE_COMMENT: '//' ~[\r\n]* -> skip;
BLOCK_COMMENT: '/*' .*? '*/' -> skip;
WS: [ \t\r\n]+ -> skip;
