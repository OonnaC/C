#include "unity.h"
#include "max.h"

// Squelette de programme de test a completer...

void JT_structurel_max(void)
{
  // Test structurel fct maximum
  TEST_FAIL_MESSAGE("Pas de test defini !");
}


void JT_fonctionnel_max(void)
{
  // Test fonctionnel fct maximum
  TEST_FAIL_MESSAGE("Pas de test defini !");
}

int maxTest(void)
{
  UNITY_BEGIN();
  RUN_TEST(JT_structurel_max);
  RUN_TEST(JT_fonctionnel_max);
  return UNITY_END();
}
