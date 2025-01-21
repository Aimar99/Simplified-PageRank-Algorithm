/*
#include <catch2/catch_test_macros.hpp>
#include <iostream>

#include "AdjacencyList.h"
#include "main.cpp"

using namespace std;





TEST_CASE("PageRank Output Test 1", "[flag]"){
    string input = R"(7 2
google.com gmail.com
google.com maps.com
facebook.com ufl.edu
ufl.edu google.com
ufl.edu gmail.com
maps.com facebook.com
gmail.com maps.com)";

    string expectedOutput = R"(facebook.com 0.20
gmail.com 0.20
google.com 0.10
maps.com 0.30
ufl.edu 0.20
)";

    string actualOutput;

    AdjacencyList adjacencyList;
    map<string, vector<pair<string,double>>> adjList;
    string no_of_iterations = adjacencyList.TestInput(adjList,input);
    actualOutput = adjacencyList.PageRank(adjList,no_of_iterations);

    REQUIRE(actualOutput == expectedOutput);
}

TEST_CASE("PageRank Output Test 2","[flag]"){
    string input = R"(4 2
A B
A C
A D
A E)";

    string expectedOutput = R"(A 0.00
B 0.05
C 0.05
D 0.05
E 0.05
)";

    string actualOutput;

    AdjacencyList adjacencyList;
    map<string, vector<pair<string,double>>> adjList;
    string no_of_iterations = adjacencyList.TestInput(adjList,input);
    actualOutput = adjacencyList.PageRank(adjList,no_of_iterations);

    REQUIRE(actualOutput == expectedOutput);
}

TEST_CASE("PageRank Output Test 3","[flag]"){
    string input = R"(6 3
A B
A C
A D
B C
B D
C D)";

    string expectedOutput = R"(A 0.00
B 0.00
C 0.04
D 0.25
)";

    string actualOutput;

    AdjacencyList adjacencyList;
    map<string, vector<pair<string,double>>> adjList;
    string no_of_iterations = adjacencyList.TestInput(adjList,input);
    actualOutput = adjacencyList.PageRank(adjList,no_of_iterations);

    REQUIRE(actualOutput == expectedOutput);
}

TEST_CASE("PageRank Output Test 4","[flag]"){
    string input = R"(4 4
A B
B C
C A
D A)";

    string expectedOutput = R"(A 0.25
B 0.25
C 0.50
D 0.00
)";

    string actualOutput;

    AdjacencyList adjacencyList;
    map<string, vector<pair<string,double>>> adjList;
    string no_of_iterations = adjacencyList.TestInput(adjList,input);
    actualOutput = adjacencyList.PageRank(adjList,no_of_iterations);

    REQUIRE(actualOutput == expectedOutput);
}

TEST_CASE("PageRank Output Test 5","[flag]"){
    string input = R"(6 2
A B
B C
A D
E F
F J
F H)";

    string expectedOutput = R"(A 0.00
B 0.06
C 0.12
D 0.06
E 0.00
F 0.12
H 0.06
J 0.06
)";

    string actualOutput;

    AdjacencyList adjacencyList;
    map<string, vector<pair<string,double>>> adjList;
    string no_of_iterations = adjacencyList.TestInput(adjList,input);
    actualOutput = adjacencyList.PageRank(adjList,no_of_iterations);

    REQUIRE(actualOutput == expectedOutput);
}
*/