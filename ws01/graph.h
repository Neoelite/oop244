#ifndef SENECA_GRAPH_H // replace with relevant names
#define SENECA_GRAPH_H
namespace seneca {

	// Your header file content goes void getSamples(int samples[], int noOfSamples);
    void getSamples(int samples[], int noOfSamples);
    int findMax(int samples[], int noOfSamples);
    void printBar(int val, int max);
    void printGraph(int samples[], int noOfSamples, const char* label);
    const int GRAPH_WIDTH = 65;

}
#endif