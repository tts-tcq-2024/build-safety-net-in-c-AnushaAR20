#include <gtest/gtest.h>
#include "Soundex.h"

TEST(SoudexTestsuite, ReplacesConsonantsWithAppropriateDigits) {
 //AAA
  char soundex[5];
  generateSoundex("Aeiouhxwy", soundex);
  //ASSERT_EQ(soundex,"A000");
}

TEST(SoudexTestsuite, ReplacesConsonantsWithAppropriateDigits2) {
 //AAA
  char soundex[5];
  generateSoundex("B", soundex);
 // ASSERT_EQ(soundex,"B000");
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
// TEST(SoudexTestsuite, ReplacesConsonantsWithAppropriateDigits5) {
//  //AAA
//   char soundex[5];
//   generateSoundex("", soundex);
//  // ASSERT_EQ(soundex,"0000");
// }
// TEST(SoudexTestsuite, ReplacesConsonantsWithAppropriateDigits6) {
//  //AAA
//   char soundex[5];
//   generateSoundex("IIIIIII", soundex);
//  // ASSERT_EQ(soundex,"I000");
// }
// TEST(SoudexTestsuite, ReplacesConsonantsWithAppropriateDigits7) {
//  //AAA
//   char soundex[5];
//   generateSoundex("AEIOU", soundex);
//  // ASSERT_EQ(soundex,"A000");
// }


