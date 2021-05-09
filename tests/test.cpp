#include "../header/rectangle.hpp"
#include "constr_test.hpp"
#include "per_test.hpp"
#include "area_test.hpp"
#include "gtest/gtest.h"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
