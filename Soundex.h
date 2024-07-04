#ifndef SOUNDEX_H
#define SOUNDEX_H

#include "Soundex.h"
#include <ctype.h>
#include <string.h>


char getSoundexCode(char c) {
    static const char lookup[26] = {
        // A, B,  C,  D, E, F,  G,  H, I, J, K, L,  M,  N,  O, P, Q,  R, S,  T, U, V, W, X,  Y, Z
        '0', '1', '2', '3', '0', '1', '2', '0', '0', '2', '2', '4', '5', '5', '0', '1', '2', '6', '2', '3', '0', '1', '0', '2', '0', '2'
    };

    c = toupper(c);
    if (c >= 'A' && c <= 'Z') {
        return lookup[c - 'A'];
    }
    return '0'; // For characters not in the alphabet (A-Z)
}

void generateSoundex(const char *name, char *soundex) {
    if (!name || !*name) {
        strcpy(soundex, "0000");
        return;
    }

    // Initialize with the first letter (capitalized)
    soundex[0] = toupper(name[0]);
    int sIndex = 1;
    char prev_code = getSoundexCode(soundex[0]);

    for (int i = 1; name[i] != '\0' && sIndex < 4; i++) {
        char code = getSoundexCode(name[i]);
        if (code != '0' && code != prev_code) {
            soundex[sIndex++] = code;
            prev_code = code;
        }
    }

    // Pad with zeros if necessary
    while (sIndex < 4) {
        soundex[sIndex++] = '0';
    }

    soundex[4] = '\0';
}

#endif // SOUNDEX_H
