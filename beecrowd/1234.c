#include <stdio.h>
#include <ctype.h>
#include <string.h>

void makeDancingSentence(char sentence[]) {
    int upper = 1; // Começa com maiúscula
    for (int i = 0; sentence[i] != '\0'; i++) {
        if (isalpha(sentence[i])) { // Verifica se é letra
            if (upper) {
                sentence[i] = toupper(sentence[i]);
            } else {
                sentence[i] = tolower(sentence[i]);
            }
            upper = !upper; // Alterna maiúscula/minúscula
        }
    }
}

int main() {
    char sentence[51];
    
    while (fgets(sentence, sizeof(sentence), stdin)) { // Lê entrada até EOF
        makeDancingSentence(sentence);
        printf("%s", sentence); // Imprime a frase convertida
    }
    
    return 0;
}