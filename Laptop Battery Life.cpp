#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



int main()
{
    string timeCharged_temp;
    getline(cin, timeCharged_temp);

    double timeCharged = stod(ltrim(rtrim(timeCharged_temp)));
    double result;

    if(timeCharged <= 4.0)
        result = 2 * timeCharged;
    else
        result = 8.0;

    cout << fixed << setprecision(2) << result;

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
