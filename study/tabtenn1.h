// tabtenn1.h -- a table -nnis base class

#ifndef TABTENN1_H
#define TABTENN1_H

#include <string>
using std::string;

//simple base class
class TableTennisPlayer
{
    private:
        string firstname;
        string lastname;
        bool hasTable;
    public:
        TableTennisPlayer(const string & fn = "none",
                          const string & ln = "none", bool ht = false);
        void Name() const;
        bool HasTable() const {return hasTable;};
        void ResetTable(bool v) {hasTable = v;};
};


//simple derived class
class RatedPlayer: public TableTennisPlayer
{
    private:
        unsigned int rating;
    public:
        RatedPlayer (unsigned int r = 0, const string & fn = "none", const string &ln = "none", bool ht=false);
        RatedPlayer(unsigned int r, const TableTennisPlayer & tp); 
        unsigned int Raing() const {return rating;};
        void ResetRating (unsigned int r) {rating = r;};
};
#endif