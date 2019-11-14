//
// Created by Nathan Maynard on 11/12/19.
//

#include <iostream>
#include "Data.h"

Data::Data() {
    songID = "No ID";
    songName = "No Name";
    songArtist = "No Artist";
    songDanceability = 0;
    songEnergy = 0;
    songKey = 0;
    songLoudness = 0;
    songMode = 0;
    songSpeechiness = 0;
    songAcousticness = 0;
    songInstrumentalness = 0;
    songLiveness = 0;
    songValence = 0;
    songTempo = 0;
    songDuration_MS = 0;
    songTimeSignature = 0;
}

Data::Data(ifstream& in) {
    //Temporary strings for integer values, will be converted to ints when reading file
    string strSongDnc, strSongEng, strSongKey, strSongLdn, strSongMod, strSongSpc,
    strSongAcu, strSongIns, strSongLvn, strSongVal, strSongTmp, strSongDMC, strSongTim;

    //Read and assign members
    getline(in, songID, ',');
    getline(in, songName, ',');
    getline(in, songArtist, ',');
    getline(in, strSongDnc, ',');
    songDanceability = stod(strSongDnc);
    getline(in, strSongEng, ',');
    songEnergy = stod(strSongEng);
    getline(in, strSongKey, ',');
    songKey = stod(strSongKey);
    getline(in, strSongLdn, ',');
    songLoudness = stod(strSongLdn);
    getline(in, strSongMod, ',');
    songMode = stod(strSongMod);
    getline(in, strSongSpc, ',');
    songSpeechiness = stod(strSongSpc);
    getline(in, strSongAcu, ',');
    songAcousticness = stod(strSongAcu);
    getline(in, strSongIns, ',');
    songInstrumentalness = stod(strSongIns);
    getline(in, strSongLvn, ',');
    songLiveness = stod(strSongLvn);
    getline(in, strSongVal, ',');
    songValence = stod(strSongVal);
    getline(in, strSongTmp, ',');
    songTempo = stod(strSongTmp);
    getline(in, strSongDMC, ',');
    songDuration_MS = stod(strSongDMC);
    getline(in, strSongTim, '\n');
    songTimeSignature = stod(strSongTim);
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