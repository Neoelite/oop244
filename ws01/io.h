#ifndef SENECA_IO_H // replace with relevant names
#define SENECA_IO_H
namespace seneca {

	// Your header file content goes here
    void printInt(int value, int fieldWidth);
    int intDigits(int value);
    int getInt(int min, int max);
    void goBack(int n);
    void labelLine(int n, const char* label);
    void line(int n);
    int menu(int noOfSamples);
    const int MAX_NO_OF_SAMPLES = 20;

}
#endif