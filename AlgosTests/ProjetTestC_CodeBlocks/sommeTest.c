#include "unity.h"
#include "somme.h"


void test_ok2(void)
{
  TEST_ASSERT_EQUAL_INT(0, sumto(0));
  TEST_ASSERT_EQUAL_INT(1, sumto(1));
  TEST_ASSERT_EQUAL_INT(3, sumto(2));
 //TEST_IGNORE();  // pour ignorer les tests suivants de test_ok2, juste pour voir la primitive
  TEST_ASSERT_EQUAL_INT(21, sumto(6));
}

void test_ko2(void)
{
  TEST_ASSERT_EQUAL_INT_MESSAGE(-1, sumto(-1), "-1 attendu pour code erreur : indefini");
}

int sommeTest(void)
{
  UNITY_BEGIN();
  RUN_TEST(test_ok2);
  RUN_TEST(test_ko2);
  return UNITY_END();
}
