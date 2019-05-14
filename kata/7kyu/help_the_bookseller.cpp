/*
  codewars.com
  Problem: Help the bookseller !
  14/05/2019
*/

#include <bits/stdc++.h>

class StockList
{
public:
    static std::string stockSummary(std::vector<std::string> &l,
                                    std::vector<std::string> &c) {
        if (l.size() == 0 || c.size() == 0)  return std::string();
        std::string r;
        for (std::size_t i = 0; i < c.size(); ++i) {
            int s = 0;
            for (std::size_t j = 0; j < l.size(); ++j) {
                if (c[i] == l[j].substr(0, c[i].size())) {
                    const std::size_t p = l[j].find(" ");
                    s += std::atoi(l[j].substr(p, l[j].size() - p).c_str());
                }
            }
            r += "(" + c[i] + " : " + std::to_string(s) + ") - ";
        }

        if (r.size())
            r = r.substr(0, r.size() - 3);
        return r;
    }
};

int main() {
    std::vector<std::string> l = {"ABAR 200", "CDXE 500", "BKWR 250", "BTSQ 890", "DRTY 600"};
    std::vector<std::string> c = {"A", "B"};
    printf("%s\n", StockList::stockSummary(l, c).c_str());

    l = {"BBAR 150", "CDXE 515", "BKWR 250", "BTSQ 890", "DRTY 600"};
    c = {"A", "B", "C", "D"};
    printf("%s\n", StockList::stockSummary(l, c).c_str());

    return 0;
}
