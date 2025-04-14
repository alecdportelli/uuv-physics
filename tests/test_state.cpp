#include <catch2/catch_test_macros.hpp>
#include "UUV-Physics/state.hpp"

TEST_CASE("Initial state is zero", "[state]") {
    State s;

    REQUIRE(s.position.isZero());
    REQUIRE(s.rotation.isZero());
    REQUIRE(s.linear_velocity.isZero());
    REQUIRE(s.angular_velocity.isZero());
}
