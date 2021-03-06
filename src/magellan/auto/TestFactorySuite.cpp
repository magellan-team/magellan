#include "magellan/auto/TestFactorySuite.h"
#include "magellan/core/TestSuite.h"

MAGELLAN_NS_BEGIN

Test* TestFactorySuite::make()
{
    auto suite = new TestSuite("All Tests");
    
    for (auto factory : factories)
    {
        suite->addTest(factory->make()); 
    }
    
    return suite;
}

void TestFactorySuite::addFactory(TestFactory& factory)
{
    factories.insert(&factory);
}

MAGELLAN_NS_END
