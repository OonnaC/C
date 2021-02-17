#include "unity.h"
#include "foncF.h"

// Squelette de programme de test a completer...
void JT_F_inst(void)
{
    // Test structurel fct f, pour couverture instructions, branches, chemins

    //TEST_FAIL_MESSAGE("Pas de test defini !");

}


void JT_F_SomAbs_Fonc(void)
{
    TEST_ASSERT_EQUAL_INT(13,f(7,6,0));
    TEST_ASSERT_EQUAL_INT(5,f(2,3,0));
    TEST_ASSERT_EQUAL_INT(8,f(1,-2,5));

    // Test fonctionnel Specification SomAbs
    //TEST_FAIL_MESSAGE("Pas de test defini !");

}


int foncFTest(void)
{
  UNITY_BEGIN();
  RUN_TEST(JT_F_inst);
  RUN_TEST(JT_F_SomAbs_Fonc);
  return UNITY_END();
}
