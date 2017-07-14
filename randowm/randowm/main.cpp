#include <string>
#include <iostream>
#include <vector>
#include <fstream>
#include <unordered_map>

using namespace std;

int main(int argc, const char * argv[]) {
    vector <string> words;
    string temp_str, file_name;
    
    cout << "What File do you want?\n";
    cin >> file_name;
    
    ifstream fin(file_name);
    while (fin >> temp_str) // will read up to eof()
        words.push_back(temp_str);
    
    fin.close();
    
    unordered_map<string, size_t> word_map;
    for(const auto &w : words)
        ++word_map[w];
    
    for (const auto &pair : word_map)
        cout << pair.second << " occurrences of word ' " << pair.first << "\n";
    
}
