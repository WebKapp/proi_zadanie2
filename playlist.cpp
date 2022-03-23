//
// Created by Kacper Murygin on 18/03/2022.
//
#include <iostream>
#include "playlist.h"
using namespace std;

Playlist::Playlist() {

}

string Playlist::getAuthor() {
    return std::string();
}

string Playlist::getName() {
    return std::string();
}

float Playlist::getTotalTime() {
    return 0;
}

void Playlist::setName() {

}

void Playlist::setAuthor() {

}

bool Playlist::checkIfContains(string keySong) {
    if (find(songs.begin(), songs.end(), keySong) != songs.end()) {
        return true;
    }
    else
        return false;
}

void Playlist::addSong(string newSong) {
    if (not checkIfContains(newSong)){
        songs.push_back(newSong);
    }
    else
        cout << "Song already in collection";
}

int Playlist::getIndexOfSong(string Song){
    for (int i = 0; i < songs.size(); i++)
    {
        if (songs[i] == Song)
        {
            return i;
        }
    }
}

void Playlist::modifySong(string oldSong, string newSong) {
    if (checkIfContains(oldSong)){
        int index = getIndexOfSong(oldSong);
        songs[index] = newSong;
    }
}

void Playlist::removeSong(string song) {
    if (checkIfContains(song))
        remove(songs.begin(),songs.end(),song)
}

int Playlist::numberOfSongs() {
    return songs.size()
}
