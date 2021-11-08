#include <Arduino.h>
#include <FS.h>


void SpeicherSchreiben (String datei, String wert);
void SpeicherSchreiben (String ordner, String datei, bool wert);
//void SpeicherSchreiben (String ordner, String datei, int wert);
//void SpeicherSchreiben (String ordner, String datei, float wert);
//void SpeicherSchreiben (String ordner, String datei, double wert);
//void SpeicherSchreiben (String ordner, String datei, char wert);

void SpeicherLesen (String ordner, String datei, String wert);
void SpeicherLesen (String ordner, String datei, bool wert);
//void SpeicherLesen (String ordner, String datei, int wert);
//void SpeicherLesen (String ordner, String datei, float wert);
//void SpeicherLesen (String ordner, String datei, double wert);
//void SpeicherLesen (String ordner, String datei, char wert);