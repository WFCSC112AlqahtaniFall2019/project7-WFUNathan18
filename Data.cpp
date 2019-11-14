//
// Created by Nathan Maynard on 11/12/19.
//

#include <iostream>
#include <fstream>
#include "Data.h"

Data::Data(ifstream inFile) {
    //Temporary strings for integer values, will be converted to ints when reading file
    string strSongDnc, strSongEng, strSongKey, strSongLdn, strSongMod, strSongSpc,
    strSongAcu, strSongIns, strSongLvn, strSongVal, strSongTmp, strSongDMC, strSongTim;

    //Read and assign members
    getline(inFile, songID, ',');
    getline(inFile, songName, ',');
    getline(inFile, songArtist, ',');
    getline(inFile, strSongDnc, ','); songDanceability = stoi(strSongDnc);
    getline(inFile, strSongEng, ','); songEnergy = stoi(strSongEng);
    getline(inFile, strSongKey, ','); songKey = stoi(strSongKey);
    getline(inFile, strSongLdn, ','); songLoudness = stoi(strSongLdn);
    getline(inFile, strSongMod, ','); songMode = stoi(strSongMod);
    getline(inFile, strSongSpc, ','); songSpeechiness = stoi(strSongSpc);
    getline(inFile, strSongAcu, ','); songAcousticness = stoi(strSongAcu);
    getline(inFile, strSongIns, ','); songInstrumentalness = stoi(strSongIns);
    getline(inFile, strSongLvn, ','); songLiveness = stoi(strSongLvn);
    getline(inFile, strSongVal, ','); songValence = stoi(strSongVal);
    getline(inFile, strSongTmp, ','); songTempo = stoi(strSongTmp);
    getline(inFile, strSongDMC, ','); songDuration_MS = stoi(strSongDMC);
    getline(inFile, strSongTim, ','); songTimeSignature = stoi(strSongTim);
}

ostream& operator<<(ostream& out, const Data &D) {
    out << D.songID << ","
    << D.songName << ","
    << D.songArtist << ","
    << D.songDanceability << ","
    << D.songEnergy << ","
    << D.songKey << ","
    << D.songLoudness << ","
    << D.songMode << ","
    << D.songSpeechiness << ","
    << D.songAcousticness << ","
    << D.songInstrumentalness << ","
    << D.songLiveness << ","
    << D.songValence << ","
    << D.songTempo << ","
    << D.songDuration_MS << ","
    << D.songTimeSignature << endl;

    return out;
}

bool Data::operator>(Data D) {
    if (this->songLoudness > D.songLoudness)
        return true;

    return false;
}

bool Data::operator<(Data D) {
    if (this->songLoudness < D.songLoudness)
        return true;

    return false;
}