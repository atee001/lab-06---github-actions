#include "../header/rectangle.hpp"
#include "constr_test.hpp"

#include "area_test.hpp"
#include "gtest/gtest.h"
#include "peri_test.hpp"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
