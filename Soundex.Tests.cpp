#include <gtest/gtest.h>
#include "Soundex.h"

TEST(SoudexTestsuite, ReplacesConsonantsWithAppropriateDigits) {
 //AAA
  char soundex[5];
  generateSoundex("AX", soundex);
 // ASSERT_EQ(soundex,"A200");
}
void test_IgnoresVowelsAndSpecialCharacters(void) {
    char soundex[5];
    generateSoundex("Aeiouhxwy", soundex);
    ASSERT_EQ("A000", soundex);
}


