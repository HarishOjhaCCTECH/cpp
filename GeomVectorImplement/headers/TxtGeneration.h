#pragma once
#include "GeomVector.h"
#include <string>
using namespace std;
class TxtGeneration
{
    public:
        TxtGeneration(const TxtGeneration& obj) = delete;
        static TxtGeneration& getObj();
        void txtGenerator(GeomVector& a, string str) const;
    private:
        TxtGeneration();
        static TxtGeneration t;
};