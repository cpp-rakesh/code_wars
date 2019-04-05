/*
  codewars.com
  Problem: find the stray number
*/

int stray(std::vector<int> n) {
    int r = 0;
    for (std::size_t i = 0; i < n.size(); ++i)
        r ^= n[i];
    return r;
};
