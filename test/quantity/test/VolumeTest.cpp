#include <magellan/magellan.hpp>
#include "quantity/volume/Volume.h"

USING_HAMCREST_NS

FIXTURE(VolumeTest)
{
    TEST("1 tbsp should equal to 3 tsps")
    {
        ASSERT_THAT(Volume(1, TBSP), eq(Volume(3, TSP)));
    }

    TEST("1 oz should equal to 2 tbsps")
    {
        ASSERT_THAT(Volume(1, OZ), eq(Volume(2, TBSP)));
    }
};

