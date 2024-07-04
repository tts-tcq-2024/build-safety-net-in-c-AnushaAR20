#include <gtest/gtest.h>
#include "Soundex.h"

TEST(SoudexTestsuite, ReplacesConsonantsWithAppropriateDigits) {
 //AAA
  char soundex[5];
  generateSoundex("AX", soundex);
 // ASSERT_EQ(soundex,"A200");
}
TEST(SoudexTestsuite, ReplacesConsonantsWithAppropriateDigits_02) {
 //AAA
  char soundex[5];
  generateSoundex("Rubin", soundex);
  ASSERT_EQ(soundex,"R150");
}
TEST(SoudexTestsuite, ReplacesConsonantsWithAppropriateDigits_03) {
 //AAA
  char soundex[5];
  generateSoundex("Bob", soundex);
  ASSERT_EQ(soundex,"B100");
}
TEST(SoudexTestsuite, ReplacesConsonantsWithAppropriateDigits_04) {
 //AAA
  char soundex[5];
  generateSoundex("Z", soundex);
  ASSERT_EQ(soundex,"Z000");
}
TEST(SoudexTestsuite, ReplacesConsonantsWithAppropriateDigits_05) {
 //AAA
  char soundex[5];
  generateSoundex("A", soundex);
  ASSERT_EQ(soundex,"A000");
}
TEST(SoudexTestsuite, ReplacesConsonantsWithAppropriateDigits_06) {
 //AAA
  char soundex[5];
  generateSoundex("$", soundex);
  ASSERT_EQ(soundex,"0000");
}
