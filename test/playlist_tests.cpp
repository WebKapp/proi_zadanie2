//
// Created by Kacper Murygin on 24/03/2022.
//
#include <string>
#include "catch.hh"
#include "../playlist.h"
//Playlist(string Name, string Author, string DateCreated, string DateModified, vector<string> Songs, double TotalTime)
TEST_CASE("playlist simple tests", "[playlist]")
{
    Playlist playlist1("playlista1", "Kacper Murygin", "10.02.2020", "20.02.2021", {"Innuendo", "Born this way"}, 14);
    CHECK(playlist1.getAuthor() == "Kacper Murygin");
    CHECK(playlist1.getName() == "playlista1");
    CHECK(playlist1.getDateCreated() == "10.02.2020");
    CHECK(playlist1.getDateModified() == "20.02.2021");
    vector<string> songss = {"Innuendo", "Born this way"};
    CHECK(playlist1.getSongs() == songss);
    CHECK(playlist1.getTotalTime() == 14);

    SECTION("modification of name"){
        playlist1.setName("playlista super");
        CHECK(playlist1.getName() == "playlista super");
    }

    SECTION("modification of author"){
        playlist1.setAuthor("Freddie Mercury");
        CHECK(playlist1.getAuthor() == "Freddie Mercury");
    }

    SECTION("modification of dateCreated"){
        playlist1.setDateCreated("02.03.2022");
        CHECK(playlist1.getDateCreated() == "02.03.2022");
    }

    SECTION("modification of dateModified"){
        playlist1.setDateModified("20.04.2022");
        CHECK(playlist1.getDateModified() == "20.04.2022");
    }



}