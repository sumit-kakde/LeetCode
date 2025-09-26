class Solution {
public:
    bool squareIsWhite(string coordinates) {
return (((coordinates[0] - 'a') % 2) != ((stoi(to_string(coordinates[1]))) -1) % 2);
    }
};