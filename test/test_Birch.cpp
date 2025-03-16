#include "TComplex.h"

#include <gtest.h>


///Тесты для класса TAllInstruments
TEST(TComplex, can_create_Complex_with_positive_count)
{
  ASSERT_NO_THROW(TComplex<double> z(8,5));
}


TEST(TComplex, can_get_real_part_of_number)
{
  TComplex<double> z(8,5);
  EXPECT_NEAR(8, z.GetRe(), 0.000001);
}


TEST(TComplex, can_get_imaginary_part_of_number)
{
  TComplex<double> z(8, 5);
  EXPECT_NEAR(5, z.GetIm(), 0.000001);
}


TEST(TComplex, can_copy)
{
  TComplex<double> z(2,3);
  TComplex<double> p(z);
  EXPECT_NEAR(1, p==z, 0.000001);
}


TEST(TComplex, can_set_real_part_of_number)
{
  TComplex<double> z;

  z.SetRe(3);
  EXPECT_NE(0, z.GetRe());
}


TEST(TComplex, can_set_imaginary_part_of_number)
{
  TComplex<double> z;

  z.SetIm(3);
  EXPECT_NE(0, z.GetIm());
}


TEST(TComplex, can_add_numbers)
{
  TComplex<double> z(2, 3),p(3,5),r(5,8);
  EXPECT_NEAR(1, (z+p)==r, 0.000001);
}


TEST(TComplex, can_subtract_numbers)
{
  TComplex<double> z(2, 3), p(3, 5), r(-1, -2);
  EXPECT_NEAR(1, (z - p) == r, 0.000001);
}


TEST(TComplex, can_multiply_numbers)
{
  TComplex<double> z(2, 3), p(3, 5), r(-9, 19);
  EXPECT_NEAR(1, (z * p) == r, 0.000001);
}


TEST(TComplex, can_divide_numbers)
{
  TComplex<double> z(4, 0), p(2,0), r(2,0);
  EXPECT_NEAR(1, (z / p) == r, 0.000001);
}


TEST(TComplex, can_equal_add_numbers)
{
  TComplex<double> z(2, 3), p(3, 5), r(5, 8);
  z += p;
  EXPECT_NEAR(1, z == r, 0.000001);
}


TEST(TComplex, can_equal_subtract_numbers)
{
  TComplex<double> z(2, 3), p(3, 5), r(-1, -2);
  z -= p;
  EXPECT_NEAR(1, z == r, 0.000001);
}


TEST(TComplex, can_equal_multiply_numbers)
{
  TComplex<double> z(2, 3), p(3, 5), r(-9, 19);
  z *= p;
  EXPECT_NEAR(1, z == r, 0.000001);
}


TEST(TComplex, can_equal_divide_numbers)
{
  TComplex<double> z(4, 0), p(2, 0), r(2, 0);
  z /= p;
  EXPECT_NEAR(1, z == r, 0.000001);
}


TEST(TComplex, can_assign_numbers)
{
  TComplex<double> z(4, 0), p(2, 0);
  z = p;
  EXPECT_NEAR(1, z == p, 0.000001);
}


TEST(TComplex, can_equal_numbers)
{
  TComplex<double> z(6, 4), p(6, 4);
  EXPECT_NEAR(1, z == p, 0.000001);
}


TEST(TComplex, can_not_equal_numbers)
{
  TComplex<double> z(6, 4), p(4, 4);
  EXPECT_NEAR(1, z != p, 0.000001);
}


TEST(TComplex, can_abs_number)
{
  TComplex<double> z(3, 4);
  EXPECT_NEAR(5, z.Abs(), 0.000001);
}


TEST(TComplex, can_pow_numbers)
{
  TComplex<double> z(6, 4),p(20,48),r(0,0);
  r = z.Pow(2);
  r -= p;
  EXPECT_NEAR(0, r.Abs(), 0.000001);
}


TEST(TComplex, can_impow_numbers)
{
  TComplex<double> z(6, 4), p(2,0), r,y(20,48);
  r = z.ImPow(p);
  r -= r;
  EXPECT_NEAR(0, r.Abs(), 0.000001);
}


TEST(TComplex, throws_pow_uncertainty_0_0)
{
  TComplex<double> z(0, 0);
  ASSERT_ANY_THROW(z.Pow(0));
}


TEST(TComplex, throws_impow_uncertainty_0_0)
{
  TComplex<double> z(0, 0),r(0,0);
  ASSERT_ANY_THROW(z.ImPow(r));
}