#pragma once 

#include "lokoinc.h"
#include "lokodb.h"

#include <sqlite3.h>

namespace loko{

class LokoSqlite:public LokoDb{
    public:
        LokoSqlite();
        ~LokoSqlite();
        bool Handle(LokoCmd * cmd) override;
    private:
        sqlite3 * db;    
};

}
