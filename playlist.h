//
// Created by Kacper Murygin on 18/03/2022.
//
#include<string>
#include<vector>

using namespace std;

#ifndef PLAYLIST_H
#define PLAYLIST_H
//Lista ma nazwę, autora, datę utworzenia i modyfikacji, łączny czas trwania i składa się z piosenek.
//Na potrzeby tego zadania piosenki mogą być reprezentowane za pomocą tytułów.
class Playlist {
private:
    string name;
    string author;
    vector<string> songs;
    float totalTime{};
    string dateCreated;
    string dateModified;
public:
    Playlist(string n, string a);
    string getName();
    string getAuthor();
    double getTotalTime();
    void setName(string newName);
    void setAuthor(string newAuthor);

    //vector songs- methods
    bool checkIfContains(string song);
    int getIndexOfSong(string Song);
    void addSong(string newSong);
    void modifySong(string oldSong, string newSong);
    void removeSong(string Song);
    int numberOfSongs();
};

#endif //PLAYLIST_H