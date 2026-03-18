%{
#include <stdio.h>
int sc = 0, wc = 0, lc = 0, cc = 0;
%}

%%
[\n] { lc++; cc++; }
[ \t] { sc++; cc++; }
[^\t\n ]+ { wc++; cc += yyleng; }
%%

int yywrap() { return 1; }

int main(int argc, char* argv[]) {
    if(argc > 1) {
        FILE *fp = fopen(argv[1], "r");
        if(fp) {
            yyin = fp;
        }
    }
    yylex();
    printf("Lines: %d\nWords: %d\nSpaces: %d\nCharacters: %d\n", lc, wc, sc, cc);
    return 0;
}