# **Simplified PageRank Algorithm**

## **Overview**
This project implements a simplified version of the PageRank algorithm in C++. The PageRank algorithm is widely used to rank web pages by measuring their relative importance within a web graph. This implementation demonstrates how to analyze a directed graph structure using an adjacency list to compute page rankings iteratively.

## **Features**
- Efficient representation of the web graph using an adjacency list.  
- Iterative computation of page rankings based on link structure.  
- Customizable damping factor and number of iterations.  
- Scalable to handle medium-sized graph datasets.  

## **How It Works**
1. The web graph is represented as a directed graph using an adjacency list.  
2. The PageRank algorithm assigns an initial rank to all nodes.  
3. Using the iterative method, the algorithm updates the ranks based on the contributions from connected nodes.  
4. A damping factor simulates the probability of randomly jumping to another page, ensuring convergence.  

## **Technologies Used**
- **Language**: C++  
- **Data Structures**: Adjacency list for graph representation.  

