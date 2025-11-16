#pragma once

#include <godot-cpp/classes/object.hpp>

using namespace godot;

class Summator : public Object {
    GDCLASS(Summator,object);
    int count ;

protected :
 static void _bin_methods();

public:
 void add(int, p_value);
 void reset ()
 int get_total()const;
 Summator();
}