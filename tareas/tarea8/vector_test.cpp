#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch2/catch.hpp"

#include "vector_ops.hpp"

TEST_CASE( "Mean of a vector is computed", "[mean]" ) {
  std::vector<double> data;
  REQUIRE(mean(data) == 0 );
  //crear vectores de prueba y comprobar los resultados con REQUIRE
}
