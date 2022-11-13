//
// Created by Raztor on 21/10/2022.
//
#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);


vector<int> stringAnagram(vector<string> dictionary, vector<string> query) {
    vector<int> result;
    for (int i = 0; i < query.size(); i++) {
        int count = 0;
        for (int j = 0; j < dictionary.size(); j++) {
            if (query[i].length() == dictionary[j].length()) {
                string temp = dictionary[j];
                for (int k = 0; k < query[i].length(); k++) {
                    for (int l = 0; l < temp.length(); l++) {
                        if (query[i][k] == temp[l]) {
                            temp.erase(l, 1);
                            break;
                        }
                    }
                }
                if (temp.length() == 0) {
                    count++;
                }
            }
        }
        result.push_back(count);
    }
    return result;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string dictionary_count_temp;
    getline(cin, dictionary_count_temp);

    int dictionary_count = stoi(ltrim(rtrim(dictionary_count_temp)));

    vector<string> dictionary(dictionary_count);

    for (int i = 0; i < dictionary_count; i++) {
        string dictionary_item;
        getline(cin, dictionary_item);

        dictionary[i] = dictionary_item;
    }

    string query_count_temp;
    getline(cin, query_count_temp);

    int query_count = stoi(ltrim(rtrim(query_count_temp)));

    vector<string> query(query_count);

    for (int i = 0; i < query_count; i++) {
        string query_item;
        getline(cin, query_item);

        query[i] = query_item;
    }

    vector<int> result = stringAnagram(dictionary, query);

    for (int i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

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