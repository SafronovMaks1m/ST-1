// Copyright 2025 UNN-CS

#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"

TEST(st1, checkPrime1) { EXPECT_EQ(checkPrime(0), false); }

TEST(st1, checkPrime2) { EXPECT_EQ(checkPrime(1), false); }

TEST(st1, checkPrime4) { EXPECT_EQ(checkPrime(16), false); }

TEST(st1, checkPrime5) { EXPECT_EQ(checkPrime(17), true); }

TEST(st1, checkPrime6) { EXPECT_EQ(checkPrime(15), false); }

TEST(st1, checkPrime7) { EXPECT_EQ(checkPrime(121), false); }

TEST(st1, checkPrime8) { EXPECT_EQ(checkPrime(7919), true); }

TEST(st1, nPrime1) { EXPECT_EQ(nPrime(1), 2); }

TEST(st1, nPrime2) { EXPECT_EQ(nPrime(3), 5); }

TEST(st1, nPrime3) { EXPECT_EQ(nPrime(10), 29); }

TEST(st1, nPrime4) { EXPECT_EQ(nPrime(500), 3571); }

TEST(st1, nPrime5) { EXPECT_EQ(nPrime(0), 0); }

TEST(st1, nextPrime1) { EXPECT_EQ(nextPrime(2), 3); }

TEST(st1, nextPrime2) { EXPECT_EQ(nextPrime(4), 5); }

TEST(st1, nextPrime3) { EXPECT_EQ(nextPrime(11), 13); }

TEST(st1, nextPrime4) { EXPECT_EQ(nextPrime(100), 101); }

TEST(st1, nextPrime5) { EXPECT_EQ(nextPrime(7), 11); }

TEST(st1, sumPrime1) {
  uint64_t res = sumPrime(2000000);
  uint64_t expected = 142913828922;
  EXPECT_EQ(expected, res);
}

TEST(st1, sumPrime2) {
  uint64_t res = sumPrime(10);
  uint64_t expected = 17;
  EXPECT_EQ(expected, res);
}

TEST(st1, sumPrime3) {
  uint64_t res = sumPrime(20);
  uint64_t expected = 77;
  EXPECT_EQ(expected, res);
}

TEST(st1, sumPrime4) {
  uint64_t res = sumPrime(2);
  EXPECT_EQ(0, res);
}
