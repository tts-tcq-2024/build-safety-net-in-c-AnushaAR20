#include <gtest/gtest.h>
#include "Soundex.h"

void test_ReplacesConsonantsWithAppropriateDigits(void) {
    char soundex[5];
    generateSoundex("AX", soundex);
    TEST_ASSERT_EQUAL_STRING("A200", soundex);
}
/*
TEST(SoudexTestsuite, ReplacesConsonantsWithAppropriateDigits) {
 //AAA
  char soundex[5];
  generateSoundex("AX", soundex);
  ASSERT_EQ(soundex,"A200");
}

TEST(SoudexTestsuite, ReplacesConsonantsWithAppropriateDigits2) {
 //AAA
  char soundex[5];
  generateSoundex("AB", soundex);
 // ASSERT_EQ(soundex,"A100");
}
TEST(SoudexTestsuite, ReplacesConsonantsWithAppropriateDigits3) {
 //AAA
  char soundex[5];
  generateSoundex("#", soundex);
 // ASSERT_EQ(soundex,"0000");
}
TEST(SoudexTestsuite, ReplacesConsonantsWithAppropriateDigits4) {
 //AAA
  char soundex[5];
  generateSoundex("LAIO", soundex);
 // ASSERT_EQ(soundex,"L000");
}
*/

