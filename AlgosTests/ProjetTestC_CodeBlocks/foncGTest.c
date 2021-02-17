#include "unity.h"
#include "foncG.h"

// Squelette de programme de test a completer...

void JT_G_inst(void)
{
  // Test structurel fct g, pour couverture instructions, branches
  TEST_FAIL_MESSAGE("Pas de test defini !");
}

void JT_G_chemins(void)
{
  // Test structurel fct g, pour couverture chemins
  TEST_FAIL_MESSAGE("Pas de test defini !");
}


void JT_G_SomAbs_Fonc(void)
{
  // Test fonctionnel Specification SomAbs
  TEST_FAIL_MESSAGE("Pas de test defini !");
}


int foncGTest(void)
{
  UNITY_BEGIN();
  RUN_TEST(JT_G_inst);
  RUN_TEST(JT_G_chemins);
  RUN_TEST(JT_G_SomAbs_Fonc);
  return UNITY_END();
}
