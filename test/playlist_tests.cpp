//
// Created by Kacper Murygin on 24/03/2022.
//
#include <string>
#include "catch.hh"
#include "../playlist.h"

TEST_CASE("playlist simple tests", "[playlist]")
{
    Playlist playlist1("kacper", "kacper");

    CHECK(playlist1.getAuthor() == "kacper");
    CHECK(playlist1.getName() == "kacper");
}