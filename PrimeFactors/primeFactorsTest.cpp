#include <iostream>
#include <vector>

#include "gmock/gmock.h"
#include "primefactors.cpp"
using std::vector;
using namespace std;

TEST(PrimeFactors, Of1) {
  PrimeFactor pf;
  vector<int> expected = {};
  EXPECT_EQ(expected, pf.of(1));
}
TEST(PrimeFactors, Of2) {
  PrimeFactor pf;
  vector<int> expected = {2};
  EXPECT_EQ(expected, pf.of(2));
}