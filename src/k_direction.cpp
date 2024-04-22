#include "k_direction.h"
#include <godot_cpp/core/class_db.hpp>

using namespace godot;

void Kdirection::_bind_methods() {
	// ClassDB::bind_method(D_METHOD("x"), &Kdirection::x);
	// ClassDB::bind_method(D_METHOD("y"), &Kdirection::y);
	// ClassDB::bind_method(D_METHOD("z"), &Kdirection::z);
	// ClassDB::bind_method(D_METHOD("normalize"), &Kdirection::normalize);
	// ClassDB::bind_method(D_METHOD("normalized"), &Kdirection::normalized);
}

Kdirection::Kdirection() noexcept { dir = kln::direction(); }
Kdirection::Kdirection(float x, float y, float z) noexcept { dir = kln::direction(x, y, z); }
// Kdirection::Kdirection(kln::direction d) noexcept { dir = d; }
Kdirection::~Kdirection() { }

// float Kdirection::x() const noexcept { return dir.x(); }
// float Kdirection::y() const noexcept { return dir.y(); }
// float Kdirection::z() const noexcept { return dir.z(); }

// void Kdirection::normalize() noexcept { dir.normalize(); }
// Kdirection Kdirection::normalized() const noexcept { return Kdirection(dir.normalized()); }
