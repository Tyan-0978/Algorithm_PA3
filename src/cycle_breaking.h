// header of CycleBreaking

#ifndef _CB
#define _CB

#include <vector>
using namespace std;

class CycleBreaking {
  public:
    CycleBreaking(); // constructor
    vector<vector<int>> break_cycle(int, vector<vector<int>>&);
}

#endif
