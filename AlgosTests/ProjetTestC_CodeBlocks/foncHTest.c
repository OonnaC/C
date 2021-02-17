#include "unity.h"
#include "foncH.h"

// Squelette de programme de test a completer...

void JT_H_inst(void)
{
  // Test structurel fct h, pour couverture instructions, branches
  TEST_FAIL_MESSAGE("Pas de test defini !");
}

void JT_H_chemins(void)
{
  // Test structurel fct h, pour couverture chemins
 TEST_FAIL_MESSAGE("Pas de test defini !");
}


void JT_H_SomAbs_Fonc(void)
{
  // Test fonctionnel Specification SomAbs
 TEST_FAIL_MESSAGE("Pas de test defini !");
}


int foncHTest(void)
{
  UNITY_BEGIN();
  RUN_TEST(JT_H_inst);
  RUN_TEST(JT_H_chemins);
  RUN_TEST(JT_H_SomAbs_Fonc);
  return UNITY_END();
}
