#include <iostream>
#include <string>

using namespace std;

void prefix(int *pi, string const &string) {
    for(size_t i = 1; i != string.size(); ++i) {
        int j = pi[i - 1];
        while(j > 0 && string[i] != string[j])
            j = pi[j - 1];
        if(string[i] == string[j]) ++j;
        pi[i] = j;
    }
}

int KMP(const string& str, const string &sample) {
    int ans = -1;
    string line = sample + '&' + str;
    auto l_size = line.size();
    auto s_size = sample.size();
    int *pi = new int[l_size]{};
    prefix(pi, line);
    for (size_t i = s_size + 1; i < l_size; ++i) {
        if (pi[i] == s_size) {
            ans = i - 2 * s_size;
            break;
        }
    }

    delete[] pi;
    return ans;
}

int main() {
    string str, comp;
    cin >> str;
    cin >> comp;
    comp += comp;
    int result = KMP(comp, str);
    cout << result;
    return 0;
}
