
#include <iostream>
#include <sstream>

#include "AdjacencyList.h"

using namespace std;

int main() {

    AdjacencyList adjacencyList;
    map<string , vector<pair<string,double>>> adjList;
    string  sentence1,sentence2,word, from, to, no_of_lines, power_iterations;
    vector<string> words1;
    getline(cin,sentence1);
    stringstream ss1(sentence1);
    while (ss1 >> word) {
        words1.push_back(word);
    }
    no_of_lines = words1[0];
    power_iterations = words1[1];

    for (int i = 0; i < stoi(no_of_lines); i++) {
        vector<string> words2;
        getline(cin, sentence2);
        stringstream ss2(sentence2);
        while (ss2 >> word) {
            words2.push_back(word);
        }
        from = words2[0];
        to = words2[1];

        adjList = adjacencyList.Connections(from,to);
    }

    adjacencyList.PageRank(adjList, power_iterations);

}
