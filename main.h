#include <iostream>
#include <map>
#include <set>
#include <fstream>
#include <list>
#include <string>
#include <sstream>
#include <algorithm>
#include <vector>
#include <limits>
#include <queue>
#include <cctype>
#pragma once

/**
    *@brief Defines a type alias for a graph

*/
typedef std::map<std::string, std::set<std::pair<std::string, double>>> Graph;

/**
 * @brief Loads a graph from a file
 * @param fileName input file
 * @return The loaded graph
 */
Graph LoadFromFile(const std::string& fileName);

/**
 * @brief Creates path from previous map
 * @param previous map
 * @param start string
 * @param end string
 * @return The vector with ordered cities
 */
std::vector<std::string> ConstructShortestPath(
        const std::map<std::string, std::string>& previous,
        const std::string& start,
        const std::string& end);

/**
 * @brief Dijkstra sort with pq
 * @param graph Graph
 * @param start string
 * @param end string
 * @return Shortest path and distance
 */
std::pair<double, std::vector<std::string>> dijkstra(
        const Graph& graph,
        const std::string& start,
        const std::string& end);

/**
 * @brief Save all shortest path to file
 * @param fileName output file 
 * @param graph Graph
 * @param start string
 */
void saveToFile(
        const std::string& fileName,
        const Graph& graph,
        const std::string& start);

/**
 * @brief Gets data from user and checks errors
 * @param argc 
 * @param argv 
 * @return The vector with all user data
 */
std::vector<std::string> userData (
        int argc,
        char* argv[]);

/**
 * @brief Checks the name of the city
 * @param graph Graph
 * @param city string
 * @return True if city name is correct
 */
bool correctCity(
        Graph& graph,
        std::string& city);