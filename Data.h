//
// Created by Nathan Maynard on 11/12/19.
//

#ifndef PROJECT7_DATA_H
#define PROJECT7_DATA_H
#include <iostream>
#include <fstream>

using namespace std;

class Data {
public:
    Data(ifstream inFile); //Constructor
    friend ostream& operator<<(ostream& out, const Data& D); //Overloaded Output Operator
    bool operator> (Data D); //Overloaded Comparison operators
    bool operator< (Data D);
private:
    string songID; //Spotify URL of the song
    string songName; //Name of the song
    string songArtist; //Who produced the song
    int songDanceability; //How easy it is to dance to this song
                          //(0 = very hard to dance to, 1 = very easy to dance to)
    int songEnergy; //Measure of perceived intensity from 0 to 1
    int songKey; //Key the song is in (0 = C, 1 = C#/Db, 2 = D, 3 = D, 4 = D#/Eb, ect.)
    int songLoudness; //Loudness of a song in decibels (Ranging from -60 dB to 0 dB)
    int songMode; //If the song is played in major (1) or minor (0)
    int songSpeechiness; //The prevalence of vocals in a song
                         //(1 = a talk show, or a podcast, 0 = almost entirely instrumental)
    int songAcousticness; //Rough confidence measure is to whether or not a song is acoustic
                          //(1 = very confident, 0 = not so confident)
    int songInstrumentalness; //The prevalence of instruments in a song
                              //(1 = song is likely instrumental only, 0 = song is likely rap or a podcast)
    int songLiveness; //Detects the presence of an audience when the song was recorded
                      //(1 = song was likely recorded in front of an audience, 0 = song was recorded at a studio)
    int songValence; //The positivity of a song (1 = cheerful and happy, 0 = sad or angry)
    int songTempo; //Estimated tempo in BPM
    int songDuration_MS; //Duration of the song in milliseconds
    int songTimeSignature; //Estimated time signature of the song
};

#endif //PROJECT7_DATA_H
