#include "unity.h"
#include "racine.h"

// Squelette de programme de test a completer...

void JT_structurel_racine(void)
{
  // Test structurel fct racine
  // utiliser TEST_ASSERT_EQUAL_FLOAT(valeur attendue, racine(v1,v2,v3));
  TEST_FAIL_MESSAGE("Pas de test defini !");
}


void JT_fonctionnel_racine(void)
{
  // Test fonctionnel fct racine
  TEST_FAIL_MESSAGE("Pas de test defini !");
}


int racineTest(void)
{
  UNITY_BEGIN();
  RUN_TEST(JT_structurel_racine);
  RUN_TEST(JT_fonctionnel_racine);
  return UNITY_END();
}
