#pragma once

#include <godot_cpp/classes/ref_counted.hpp>

namespace godot {

class Kdirection : public RefCounted {
	GDCLASS(Kdirection, RefCounted)

protected:
	static void _bind_methods();

public:
	Kdirection();
	~Kdirection();

};

}