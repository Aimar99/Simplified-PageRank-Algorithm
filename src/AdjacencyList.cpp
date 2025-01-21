#include <iostream>
#include <math.h>
#include <iomanip>
#include <sstream>
#include "AdjacencyList.h"

using namespace std;

// prints the PageRank of all pages after p powerIterations in ascending
// alphabetical order of webpages and rounding rank to two decimal places

string AdjacencyList::PageRank(map<string, vector<pair<string,double>>> adjList, string n){
    // optionally, store your output in a string/stringstream and then return it from this function after printing so that it is easier to test with Catch
    map<string, double> pageRank;
    pageRank = PageRankVector(adjList,n);
    string result;
    for(auto it = pageRank.begin(); it != pageRank.end();it++) {
        string str = doubleToString(it->second);
        result += it->first + " " + str + "\n";
    }

    cout << result;
    return result;
}

map <string, vector<pair<string,double>>> AdjacencyList::Connections(string s, string v) {
    double initial_rank = 0;
    NamesList[s].push_back(make_pair(v,initial_rank));
    if (NamesList.find(v) == NamesList.end()) {
        NamesList[v] = {};
    }
    return NamesList;
}

map<string, vector<string>> AdjacencyList::reverseAdjList(map<string, vector<pair<string,double>>> names) {
    map<string, vector<string>> reversedAdjList;

    for (auto it = names.begin(); it != names.end(); it++) {
        string fromNode = it->first;
        for (auto it1 = it->second.begin(); it1 != it->second.end(); it1++) {
            reversedAdjList[it1->first].push_back(fromNode);
        }

    }
    return reversedAdjList;
}


map<string,double> AdjacencyList::PageRankVector(map<string, vector<pair<string,double>>> names, string iterations) {
    map<string, double> rank, outgoingedges;
    map<string, vector<string>> reversedAdjList;
    double initialRank = 1 / (double)names.size();
    for (auto it = names.begin(); it != names.end(); it++) {
        rank[it->first] = initialRank;

    }
    for (auto it = names.begin(); it != names.end(); it++) {
        outgoingedges[it->first] = it->second.size();
    }

    reversedAdjList = reverseAdjList(names);
    for (int i = 1; i < stoi(iterations); i++) {
        map<string, double> newrank;
        for (auto it = reversedAdjList.begin(); it != reversedAdjList.end(); it++) {
            for (auto it2: it->second) {
                newrank[it->first] += rank[it2]/outgoingedges[it2];
            }
        }
        for (auto it = names.begin(); it != names.end(); it++) {
            rank[it->first] = newrank[it->first];
        }
    }

    return rank;
}


string AdjacencyList::doubleToString(double value) {
    ostringstream out;
    out << fixed << setprecision(2) << value;
    return out.str();
}

string AdjacencyList::TestInput(map<string, vector<pair<string,double>>> &adjList,string input) {
    istringstream stream(input);
    string line, no_of_iterations;
    bool isFirstLine = true;

    while (getline(stream, line)) {
        istringstream lineStream(line);
        string firstWord, secondWord;

        // Extract the first and second words from the line
        lineStream >> firstWord >> secondWord;

        if (isFirstLine) {
            no_of_iterations = secondWord;
            isFirstLine = false;
        }
        else {
            adjList[firstWord].push_back(make_pair(secondWord,0));
            if (adjList.find(secondWord) == adjList.end()) {
                adjList[secondWord] = {};
            }
        }

    }
    return no_of_iterations;
}