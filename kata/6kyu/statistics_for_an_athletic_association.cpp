/*
  codewars.com
  Problem: Statistics for an athletic association
  19/05/2019
*/

#include <bits/stdc++.h>

class Stat
{
public:
    static std::string format(int t) {
        const int hh = t / 3600;
        t -= hh * 3600;
        const int mm = t / 60;
        t -= mm * 60;
        const int ss = t;

        char buf[32] = {0};
        snprintf(buf, sizeof(buf), "%02d|%02d|%02d", hh, mm, ss);
        return std::string(buf);
    }

    static std::string stat(const std::string &s) {
        std::string r;
        if (s.size()) {
            std::vector<int> timings;
            std::istringstream iss(s);
            std::string w;
            while (iss >> w) {
                int hh = 0;
                int mm = 0;
                int ss = 0;
                char t = '|';

                std::istringstream is(w);
                is >> hh >> t >> mm >> t >> ss;
                timings.push_back(hh * 3600 + mm * 60 + ss);
            }
            std::sort(timings.begin(), timings.end());

            const int range = timings[timings.size() - 1] - timings[0];
            unsigned long long int sum = 0;
            for (std::size_t i = 0; i < timings.size(); ++i)
                sum += timings[i];
            const int avg = sum / timings.size();

            int median = 0;
            if (timings.size() & 1)
                median = timings[timings.size() >> 1];
            else
                median = (timings[timings.size() >> 1] + timings[(timings.size() >> 1) - 1]) >> 1;

            char buf[128] = {0};
            r = "Range: " + format(range) +
                " Average: " + format(avg) +
                " Median: " + format(median);
        }

        return r;
    }
};

int main() {
    std::string i = "01|15|59, 1|47|16, 01|17|20, 1|32|34, 2|17|17";
    printf("%s\n", Stat::stat(i).c_str());

    i = "02|15|59, 2|47|16, 02|17|20, 2|32|34, 2|17|17, 2|22|00, 2|31|41";
    printf("%s\n", Stat::stat(i).c_str());

    return 0;
}
