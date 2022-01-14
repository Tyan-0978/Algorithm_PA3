// main cpp file of pa3

#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char* argv[]) {
  // read input file
  if (arg_num != 3) {
    cout << "argument number error" << endl;
    return 0;
  }

  ifstream input_file(argv[1]);
  char type;
  input_file >> type;
  bool is_directed = type == "d";

  int vertex_num, edge_num;
  input_file >> vertex_num >> edge_num;

  vector<vector<int>> adj_matrix(edge_num, vector<int>(edge_num, -1));

  if (is_directed) {
  } else { // undirected
    while (input_file >> u >> v >> w) {
      adj_matrix[u][v] = w;
      adj_matrix[v][u] = w;
    }
  }

  // find edges to remove

  // write output file
}
