//
// Created by Kacper Murygin on 18/03/2022.
//
#include <iostream>
#include "playlist.h"
using namespace std;

Playlist::Playlist(string Name, string Author, string DateCreated, string DateModified, vector<string> Songs, int TotalTime)
{
    name = Name;
    author = Author;
    dateCreated = DateCreated;
    dateModified = DateModified;
    if (checkTime(TotalTime))
        totalTime = TotalTime;
    songs = Songs;
    totalTime = TotalTime;
}

string Playlist::getAuthor() {
    return author;
}

string Playlist::getName() {
    return name;
}

int Playlist::getTotalTime() {
    return totalTime;
}

void Playlist::setName(string newName) {
    name = newName;
}

void Playlist::setAuthor(string newAuthor) {
    author = newAuthor;
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
            return i;
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
        remove(songs.begin(),songs.end(),song);
}

int Playlist::numberOfSongs() {
    return songs.size();
}

string Playlist::getDateCreated() {
    return dateCreated;
}

string Playlist::getDateModified() {
    return dateModified;
}

void Playlist::setTotalTime(int newTime) {
    totalTime = newTime;
}

void Playlist::setDateCreated(string newDate) {
    dateCreated = newDate;
}

void Playlist::setDateModified(string newDate) {
    dateModified = newDate;
}

bool Playlist::checkTime(int checkedTime) {
    if (checkedTime > 0)
        return true;
    else
        return false;
}

vector<string> Playlist::getSongs() {
    return songs;
}
