#include <iostream>
#include <vector>
#include <string.h>
#include <algorithm>
#include <cmath>
#include <limits.h>
#include <numeric>
#include <stack>
#include <queue>
#include <map>
using namespace std;

void themaxi(vector<vector<int>> teams, int index, vector<int>& themaxEliminationTeam) {
    int NoOfTeams = teams.size();
    if (index >= NoOfTeams) return;
    int size = teams[index].size();
    int themax = 0;
    for (int i = 0; i < size; i++) {
        int temp = teams[index][i];
        themax += temp;
    }
    themaxEliminationTeam.push_back(themax);
    themaxi(teams, index + 1, themaxEliminationTeam);
}

vector<vector<int>> func(vector<vector<int>> teams) {
    int size = teams.size();
    vector<vector<int>> theANS;
    vector<int> themaxEliminationTeams;
    int index = 0;
    themaxi(teams, index, themaxEliminationTeams);

    int maxOfAll = *max_element(themaxEliminationTeams.begin(), themaxEliminationTeams.end());
    vector<pair<int, int>> tempVectorforStoringMaxArrays;

    for (int i = 0; i < themaxEliminationTeams.size(); i++) {
        if (themaxEliminationTeams[i] == maxOfAll) {
            int data = themaxEliminationTeams[i];
            int index = i;
            tempVectorforStoringMaxArrays.push_back({data, index});
        }
    }

    vector<pair<int, int>> individualMaxElement;
    for (int i = 0; i < tempVectorforStoringMaxArrays.size(); i++) {
        int tempIndex = tempVectorforStoringMaxArrays[i].second;
        int max = -1;
        int index = 0;
        for (int j = 0; j < teams[tempIndex].size(); j++) {
            if (teams[tempIndex][j] > max) {
                max = teams[tempIndex][j];
                index = tempIndex;
            }
        }
        individualMaxElement.push_back({max, tempIndex});
    }

    int individualMaxOfAll = -1;
    for (int i = 0; i < individualMaxElement.size(); i++) {
        int temp = individualMaxElement[i].first;
        if (temp > individualMaxOfAll) individualMaxOfAll = temp;
    }

    for (int i = 0; i < individualMaxElement.size(); i++) {
        vector<int> temp = {};
        int maxValue = maxOfAll;
        int maxIndex = -1;
        int maxIndividual = -1;
        if (individualMaxElement[i].first == individualMaxOfAll) {
            maxIndex = individualMaxElement[i].second+1;
            maxIndividual = individualMaxElement[i].first;
            temp.push_back(maxIndex);
            temp.push_back(maxOfAll);
            temp.push_back(maxIndividual);
            theANS.push_back(temp);
        }
    }
    return theANS;
}

int main() {
    vector<vector<int>> teams = {{3, 3, 4}, {5, 2, 3}, {4, 3, 3}, {5, 3, 2}};
    vector<vector<int>> result = func(teams);

    for (int i = 0; i < result.size(); i++) {
        if (i == result.size() - 1) {
            cout << result[i][0] << " " << result[i][1] << " " << result[i][2];
        } else {
            cout << result[i][0] << " " << result[i][1] << " " << result[i][2] << endl;
        }
    }
    return 0;
}
