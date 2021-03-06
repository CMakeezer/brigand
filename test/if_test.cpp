
#include <brigand/functions/if.hpp>
#include <brigand/types/bool.hpp>

static_assert(std::is_same<brigand::if_<brigand::true_type, long, bool>::type, long>::value, "invalid if_ result");
static_assert(std::is_same<brigand::if_<brigand::false_type, long, bool>::type, bool>::value, "invalid if_ result");

static_assert(std::is_same<brigand::if_c<true, long, bool>::type, long>::value, "invalid if_ result");
static_assert(std::is_same<brigand::if_c<false, long, bool>::type, bool>::value, "invalid if_ result");
