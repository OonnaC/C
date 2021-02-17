#include "unity.h"
#include "facto.h"


void test_ok(void)
{
  TEST_ASSERT_EQUAL_INT_MESSAGE(1, facto(0), "cas de base");  // message affiche si test fail
  TEST_ASSERT_EQUAL_INT(1, facto(1));
  TEST_ASSERT_EQUAL_INT(2, facto(2));
  TEST_ASSERT_EQUAL_INT(6, facto(3));
  TEST_ASSERT_EQUAL_INT(120, facto(5));
  TEST_IGNORE();  // pour ignorer les tests suivants de test_ok, juste pour voir la primitive
  TEST_ASSERT_EQUAL_INT(600, facto(6));
}

void test_ko(void)
{
  TEST_ASSERT_EQUAL_INT_MESSAGE(0, facto(-1),"0 attendu pour code erreur : indefini");
}

int factoTest(void)
{
UNITY_BEGIN();
RUN_TEST(test_ok);
RUN_TEST(test_ko);
return UNITY_END();
}
