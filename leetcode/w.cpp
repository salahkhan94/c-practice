// There is a map of cities - like a real world country's map. 
// Some cities have roads between them, and it takes a known time to traverse each road. 
// I'm in city A and have a list of my favorite cities [F1..Fn]. 
// Give an efficient algorithm to decide which of my favorite cities I can get to the fastest.

//              +-----+       +-----+      +-----+
//    8-------->|  A  |--20-->|  B  |--4-->|  E  |
//    |         +-----+       +-----+      +-----+
//    |            |             ^
//    |            |             |
//    |           10             7
//    |            |             |
//    |            V             |
// +-----+      +-----+       +-----+
// |  H  |<--2--|  C  |--10-->|  G  |
// +-----+      +-----+       +-----+
//    |                          |
//    3                          6
//    |                          |
//    V                          V
// +-----+                    +-----+
// |  F  |                    |  D  |
// +-----+                    +-----+

#include <bits/stdc++.h>
#include <climits>
#include <queue>
#include <unordered_map>

using namespace std;

struct Road {
  char dest_city;
  int travel_time;
};

pair<char, int> closestCityFinder (unordered_map<char, vector<Road>> Graph, char start, vector<char> Favs) {
  unordered_map<char, int> dist;
  for (auto&p : Graph) {
    dist[p.first] = INT_MAX;
  }

  priority_queue<pair<int, char>, vector<pair<int, char>>, greater<>> pq;
  dist[start] = 0;
  pq.push({0, start});

  while(!pq.empty()) {
    auto [curDist, city] = pq.top();
    pq.pop();

    if (curDist > dist[city]) continue;

    for (auto& road : Graph[city]) {
      char nextCity = road.dest_city;
      int weight = road.travel_time;

      if (dist[nextCity] > curDist + weight) {
        dist[nextCity] = curDist + weight;
        pq.push({dist[nextCity], nextCity});
      }
    }
  }

  char bestCity = '\0';
  int bestDist = INT_MAX;

  for (char fav : Favs) {
    if (dist.count(fav) && dist[fav] < bestDist) {
      bestDist = dist[fav];
      bestCity = fav;
    }
  }

  pair<char, int> best;
  best.first = bestCity;
  best.second = bestDist;

  return best;
}