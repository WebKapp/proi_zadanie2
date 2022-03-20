//
// Created by Kacper Murygin on 18/03/2022.
//
#include<string>
#include<vector>
#include "date.h"

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
    Date dateCreated;
    Date dateModified;
    float totalTime;
public:
    void setName(string newName);
    void setAuthor(string newAuthor);
    void setTotalTime(string newTotalTime);


#endif //PLAYLIST_H
