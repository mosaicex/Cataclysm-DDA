#ifndef _START_LOCATION_H_
#define _START_LOCATION_H_

#include "json.h"

#include <string>
#include <map>

class start_location;

typedef std::map<std::string, start_location> location_map;

class start_location
{
public:
    start_location();
    start_location( std::string ident, std::string name, std::string target );

    std::string ident() const;
    std::string name() const;
    std::string target() const;

    static location_map _locations;

    static start_location *find( const std::string ident );
    static void load_location( JsonObject &jsonobj );

private:
    std::string _ident;
    std::string _name;
    std::string _target;
};

#endif  /* _START_LOCATION_H_ */
