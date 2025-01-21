#pragma once

#include <map>
#include <string>
#include <vector>

using namespace std;

class AdjacencyList {
    private:
    //Think about what member variables you need to initialize
    map<string, vector<pair<string,double>>> NamesList;

    public:
    //Think about what helper functions you will need in the algorithm
    string PageRank(map<string, vector<pair<string,double>>> adjList, string n);
    map<string, vector<pair<string,double>>> Connections(string s, string v);
    map<string, double> PageRankVector(map<string, vector<pair<string,double>>> names, string iterations);
    map<string, vector<string>> reverseAdjList(map<string, vector<pair<string,double>>> names);
    void printAdjList(map<string, vector<pair<string,double>>> adjList);
    void printReverse(map<string, vector<string>> names);
    void printRank(map<string, double> names);
    string doubleToString(double value);
    string TestInput(map<string, vector<pair<string,double>>> &adjList,string input);

};

// This class and method are optional.
